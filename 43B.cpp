#include<bits/stdc++.h>
using namespace std;

int main(){
string x,y;
cin>>x>>y;

unordered_map<char,int>mp;
for(int i=0;i<x.size();i++){
    //if(x[i]==' ') continue;
    mp[x[i]]++;
}
bool check=true ;
for(int i=0;i<y.size();i++){
 //    if(y[i]==' ') continue ;

    if( mp.find(y[i])==mp.end() ){
        check=false;
        break;
    }
    else{
        mp[y[i]]--;
    }
}
if(check==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}