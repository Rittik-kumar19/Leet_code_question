class Solution {
public:
    int romanToInt(string s) {
        map<string,int>mp;
//         {
            
//             "I":1,
//             "V":5,
//             "x":10,
//             "L":50,
//             "C":100,
//             "D":500,
//             "M":1000,
//             "IX":9,
//             "IV":4,
//             "XL":40,
//             "XC":90,
//             "CD":400,
//             "CM":900,
//         };
        mp.insert({"I",1});
        mp.insert({"V",5});
        mp.insert({"X",10});
        mp.insert({"L",50});
        mp.insert({"C",100});
        mp.insert({"D",500});
        mp.insert({"M",1000});
        mp.insert({"IX",9});
        mp.insert({"IV",4});
        mp.insert({"XL",40});
        mp.insert({"XC",90});
        mp.insert({"CD",400});
        mp.insert({"CM",900});
        int l=s.size();
        int ans=0;
        for(int i=0;i<l;i++){
            if(i!=l-1){
                string st=s.substr(i,2);
                if(mp.count(st)){
                   ans+=mp[st];
                   i=i+1; 
                }
                else{
                    char ch=s[i];
                    string sz="";
                    sz+=ch;
                    ans+=mp[sz];
                }
            }
            else if(i==l-1){
                char ch1=s[i];
                string sp="";
                sp+=ch1;
                ans+=mp[sp];
            }
            
        }
        return ans;
    }
};