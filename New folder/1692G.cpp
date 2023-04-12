#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
     // for(auto it:arr) cout<<it<<" ";
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            if(2*arr[i]>arr[i-1]){
                dp[i]=dp[i-1]+1;
            }
            
        }
       // for(auto it:dp) cout<<it<<" ";
        int ans=0;
        for(int i=0;i<n;i++){
              if(dp[i]>=k+1) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}