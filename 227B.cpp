#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m;
cin>>m;
int qur[m];
for(int i=0;i<m;i++){
    cin>>qur[i];
}
unordered_map<int,int>mp;
long long int vas=0;
long long int pet=0;
for(int i=0;i<n;i++){
    mp[arr[i]]=i;
}
for(int i=0;i<m;i++){
   vas+=mp[qur[i]]+1;
   pet+=n-mp[qur[i]];
}

 cout<<vas<<" "<<pet;
return 0;
}