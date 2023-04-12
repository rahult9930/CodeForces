#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int res=0;
        int count=1;
        int ans=0;
        unordered_set<char>se;
        for (int i = 1; i < n; i++)
        {
            if(s[i]!=s[i-1]){
               if(count>=2) ans++;
                count=0;
            }
            count++;
            se.insert(s[i]);
        }
        if(count>=2) {
            ans++;
        }
      //  cout<<ans<<" "<<se.size()<<endl;
        cout<<ans+se.size()-1<<endl;
    }
    return 0;
}