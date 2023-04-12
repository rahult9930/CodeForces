#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
     cin>>arr[i];
     sum+=arr[i];
    }
    int maxi=sum;
     for(int i=0;i<n-1;i++){
        int curs=arr[i+1]+arr[i];
        int chng=-(arr[i+1]+arr[i]);
        if(chng>curs){
            arr[i+1]=-arr[i+1];
               arr[i]=-arr[i];
               sum=sum+chng-curs;
        }
     }
     cout<<sum<<endl;
}
return 0;
}