#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>low(26,0);
        vector<int>high(26,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                high[s[i]-'A']++;
            }
            else{
                low[s[i]-'a']++;
            }
        }
       for(int i=0;i<26;i++){
        ans+=min(low[i],high[i]);
        int diff=abs(high[i]-low[i]);
        if(k>0){
            if(k>=diff/2){
                ans+=diff/2;
                k-=diff/2;
            }
            else{
                ans+=k;
                k=0;
            }
        }
       }
    
       cout<<ans<<endl;
    }
    return 0;
}