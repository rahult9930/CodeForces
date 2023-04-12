#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int nums[n];
for (int i = 0; i < n; i++)
{
 cin>>nums[i];
}
int ans=-1;
queue<pair<int,int>>qe;
for(int i=0;i<n;i++){
    qe.push({nums[i],i});
}
while(!qe.empty()){
    if(qe.size()==1){
        pair<int,int>temp=qe.front();
        qe.pop();
        ans=temp.second;
    }
    else{
        pair<int,int>temp=qe.front();
        qe.pop();
        if(temp.first>m){
            qe.push({temp.first-m,temp.second});
        }
    }
}
cout<<ans+1;
return 0;
}