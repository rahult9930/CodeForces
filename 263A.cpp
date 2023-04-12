#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
    }
}
int k=-1,l=-1;
for (int i = 0; i < 5; i++)
{
    for(int j=0;j<5;j++){
        if(arr[i][j]==1){
            k=i;
            l=j;
            break;
        }
    }
}
//cout<<k<<l;
cout<<abs(k-2)+abs(l-2)<<endl;
return 0;
}