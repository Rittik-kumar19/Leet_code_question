class Solution {
public:
    // string shortestCommonSupersequence(string s1, string s2) {
    //     int x=s1.size();
    //     int y=s2.size();
    //     int dp[x+1][y+1];
    //     memset(dp,0,sizeof(dp));
    //     for(int i=0;i<=x;i++){
    //         for(int j=0;j<=y;j++){
    //             if(i==0 || j==0){
    //                 dp[i][j]=0;
    //             }
    //         }
    //     }
    //     for(int i=1;i<=x;i++){
    //         for(int j=1;j<=y;j++){
    //             if(s1[i-1]==s2[j-1]){
    //                 dp[i][j]=1+dp[i-1][j-1];
    //             }
    //             else{
    //                 dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    //             }
    //         }
    //     }
    //     int i=x;
    //     int j=y;
    //     string s="";
    //     while(i>0 && j>0){
    //         if(s1[i-1]==s2[j-1]){
    //             s.push_back(s1[i-1]);
    //             i--;
    //             j--;
    //         }
    //         else{
    //             if(dp[i][j-1]>dp[i-1][j]){
    //                 s.push_back(s2[j-1]);
    //                 j--;
    //             }
    //             else if(dp[i-1][j]>dp[i][j-1]){
    //                 s.push_back(s1[i-1]);
    //                 i--;
    //             }
    //         }
    //     }
    //     while(i>0){
    //         s.push_back(s1[i-1]);
    //         i--;
    //     }
    //     while(j>0){
    //         s.push_back(s2[j-1]);
    //         j--;
    //     }
    //     reverse(s.begin(),s.end());
    //     return s;
    // }
    //  string shortestCommonSupersequence(string s1, string s2) {
    //     int x=s1.size();
    //     int y=s2.size();
    //     int dp[x+1][y+1];
    //     memset(dp,0,sizeof(dp));
    //     for(int i=0;i<=x;i++){
    //         for(int j=0;j<=y;j++){
    //             if(i==0 || j==0){
    //                 dp[i][j]=0;
    //             }
    //         }
    //     }
    //     for(int i=1;i<=x;i++){
    //         for(int j=1;j<=y;j++){
    //             if(s1[i-1]==s2[j-1]){
    //                 dp[i][j]=1+dp[i-1][j-1];
    //             }
    //             else{
    //                 dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    //             }
    //         }
    //     }
    //     int i=x;
    //     int j=y;
    //     string s="";
    //     while(i>0 && j>0){
    //         if(s1[i-1]==s2[j-1]){
    //             s.push_back(s1[i-1]);
    //             i--;
    //             j--;
    //         }
    //         else{
    //             if(dp[i][j-1]>dp[i-1][j]){
    //                 s.push_back(s2[j-1]);
    //                 j--;
    //             }
    //             else if(dp[i-1][j]>dp[i][j-1]){
    //                 s.push_back(s1[i-1]);
    //                 i--;
    //             }
    //         }
    //     }
    //     while(i>0){
    //         s.push_back(s1[i-1]);
    //         i--;
    //     }
    //     while(j>0){
    //         s.push_back(s2[j-1]);
    //         j--;
    //     }
    //     // reverse(s.begin(),s.end());
    //     return s;
    // }
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.length(), m = str2.length();
	    int dp[n + 1][m + 1];
	    for (int i = 0; i <= n; i++) {
		    for (int j = 0; j <= m; j++) {
		    	if (i == 0 || j == 0) {
		    		dp[i][j] = 0;
		    	}
		    }
	    }
	    for (int i = 1; i <= n; i++) {
		    for (int j = 1; j <= m; j++) {
			    if (str1[i - 1] == str2[j - 1]) {
			    	dp[i][j] = 1 + dp[i - 1][j - 1];
			    } else {
			    	dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			    }
		    }
	    }
	    int i = n, j = m;
	    string ans = "";
	    while (i > 0 && j > 0) {
		    if (str1[i - 1] == str2[j - 1]) {
			    ans.insert(ans.begin(), str1[i - 1]);
			    i--;
			    j--;
            }
		    else {
			    if (dp[i - 1][j] > dp[i][j - 1]) {
				    ans.insert(ans.begin(), str1[i - 1]);
				    i--;
			    } else {
				    ans.insert(ans.begin(), str2[j - 1]);
				    j--;
			    }
            }
	    }
	    while (j > 0) {
		    ans.insert(ans.begin(), str2[j - 1]);
		    j--;
	    }
	    while (i > 0) {
		    ans.insert(ans.begin(), str1[i - 1]);
		    i--;
	    }
	    return ans;
    }
};