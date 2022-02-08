class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        bool isAllcap = false;
        int i = 0;
        for(i=0;i<n;i++){
            if(islower(word[i])){
                break;
            }
        }
        if(i==word.size()){
            isAllcap = true;
        }
        else{
            isAllcap = false;
        }
        
        bool islow = false;
        
         int j = 0;
        for(j=0;j<n;j++){
            if(isupper(word[j])){
                break;
            }
        }
        if(j==word.size()){
            islow = true;
        }
        else{
            islow = false;
        }
        
        bool fcosm = false;
        if(isupper(word[0])){
            // bool xf = true;
            int k= 1;
            for(k=1;k<word.size();k++){
                if(isupper(word[k])){
                    // xf=false;
                    break;
                }
            }
            if(k<word.size()){
                fcosm = false;
            }
            else{
                fcosm = true;
            }
            // fcosm = xf;
        }
        else if(islower(word[0])){
            fcosm = false;
        }
        cout<<"isAllcap->"<<isAllcap<<endl;
        cout<<"islow->"<<islow<<endl;
        cout<<"fcosm->"<<fcosm<<endl;
        
        if(isAllcap or islow or fcosm){
            return true;
        }
        else{
            return false;
        }
        
        
        
        
        
    }
};