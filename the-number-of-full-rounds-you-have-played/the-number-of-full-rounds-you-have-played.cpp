class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
        int minS = stoi(startTime.substr(3));
        int minE = stoi(finishTime.substr(3));
        int hS = stoi(startTime.substr(0,2));
        int hE = stoi(finishTime.substr(0,2));
        cout<<minS<<" "<<minE<<" "<<hS<<" "<<hE<<" "<<endl;
        if(minS>0 && minS<=15){
            minS=15;
        }
        if(minS>15 && minS<=30){
            minS=30;
        }
        if(minS>30 && minS<=45){
            minS=45;
        }
        if(minS>30 && minS<=45){
            minS=45;
        }
        if(minS>45){
            minS=0;
            hS+=1;
        }
        
        if(minE>=0 && minE<15){
            minE=0;
        }
        if(minE>=15 && minE<30){
            minE=15;
        }
        if(minE>=30 && minE<45){
            minE=30;
        }
        if(minE>=45){
            minE=45;
        }
        cout<<endl;
        cout<<minS<<" "<<minE;
        int h,m;
        if(minS>minE){
            m = 60-minS;
            m+=minE;
            hS++;
        }else{
            m = minE - minS;  
        }
        if(hS>hE){
            h = 24-hS;
            h+=hE;
        }else if(hS==0 && hE==0){
            h=23;
        }else{
            h = hE-hS;
        }
        
        int ans = h*4;
        ans+=m/15;
        return ans;
        
    }
};