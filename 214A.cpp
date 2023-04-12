#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int cnt=0;
for (int i = 0; i*i<=n && i <=m; i++)
{
    int b=n-i*i;
    if(i+b*b==m){
        cnt++;
    }
    
}
cout<<cnt;
return 0;
}