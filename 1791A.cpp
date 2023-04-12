#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    char x;
    cin>>x;
    string t="codeforces";
    bool check=false;
    for(int i=0;i<t.size();i++){
        if(t[i]==x){
           check=true;
        
        }
    }
if(check==true) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}