#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        bool check=true;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'<d){
                check=false;
                s.insert(i,to_string(d));
                break;
            }
        }
        if(check==true){
            s+=to_string(d);
        }
      cout<<s<<endl;
    }
    return 0;
}