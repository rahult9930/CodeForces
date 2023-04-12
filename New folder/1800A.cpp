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
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        string temp="";
        temp+=s[0];
        for(int i=1;i<n;i++){
            
          if(s[i]!=s[i-1]){
            temp+=s[i];
          }
        }
        if(temp=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}