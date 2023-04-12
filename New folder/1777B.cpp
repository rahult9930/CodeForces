#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(m,vector<int>(2)) ;
        for(int i=0;i<m;i++){
            cin>>arr[i][0]>>arr[i][1];
            sort(arr[i].begin(),arr[i].end());
        }
       vector<int>dp(n+1,n+1);
       dp[0]=0;
       for(int i=0;i<m;i++){
        dp[arr[i][0]]=min( dp[arr[i][0]],arr[i][1]) ;
       }
      long long ans=0;
      for(int i=1;i<n;i++){
        if(dp[i]>dp[i+1]) dp[i]=dp[i+1];
        ans+=(dp[i]-i);
      }
      ans++;
      cout<<ans<<endl;
    }
    return 0;
}