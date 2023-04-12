#include<bits/stdc++.h>
using namespace std;
bool beautiful(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            return false;
        }
    }
    return true;
}
 bool check(string s,string t){
    if(beautiful(s) && beautiful(t)) return true;
    while(t.size()>=2){
        s.push_back(t[t.size()-1]);
        t.erase(t.size()-1,1);
         if(beautiful(s) && beautiful(t)) return true;
    }
    return false;
 }
int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    bool ans=check(s,t) || check(t,s);
    if(ans==1)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
}
return 0;
}