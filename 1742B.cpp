#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     unordered_set<int>se;
     bool check=false;
     for(int i=0;i<n;i++){
        if(se.find(arr[i])!=se.end()){
           check=true ;
            break;
        }
        else{
            se.insert(arr[i]);
        }
     }
     if(check==false){
        cout<<"Yes"<<endl ;
     }
     else{
        cout<<"NO"<<endl;
     }
  
}
return 0;
}