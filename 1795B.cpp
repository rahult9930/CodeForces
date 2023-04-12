#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{
   int n,k;
   cin>>n>>k;
   vector<vector<int>>arr(n,vector<int>(2));
   for(int i=0;i<n;i++){
    cin>>arr[i][0]>>arr[i][1];
   }
   vector<int>temp;
   for(int i=0;i<arr.size();i++){
    if(arr[i][0]<=k && arr[i][1]>=k){
        temp.push_back(i);
    }
   }
   map<int,int>mp;
   for(int i=0;i<temp.size();i++){
    for(int j=arr[temp[i]][0];j<=arr[temp[i]][1];j++){
        mp[j]++;
    }
   }
   bool check=true;
  for(auto it:mp){
    if(it.first==k) continue;
    if(it.second==temp.size()) check=false;
  }
  if(check==false || temp.size()==0){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
}

return 0;
}