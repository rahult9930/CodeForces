#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n=s.size();
    vector<int>bef(n,0),aft(n,0);
    if(s[0]=='Q') bef[0]=1;
    if(s[n-1]=='Q') aft[n-1]=1;
    for(int i=1;i<n;i++){
        if(s[i]=='Q') bef[i]=bef[i-1]+1;
        else bef[i]=bef[i-1];
    }
     for(int i=n-2;i>=0;i--){
        if(s[i]=='Q') aft[i]=aft[i+1]+1;
        else aft[i]=aft[i+1];
    }
    // for(auto it:aft) cout<<it<<" ";
    int ans=0;
    for(int i=0;i<s.size();i++){
     if(s[i]=='A'){
        ans+=(bef[i]*aft[i]);
     }
    }
     cout<<ans;
        return 0;
}