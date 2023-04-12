#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      int maxi=0;
      int sum=0;
      int ans=0;
      for(int i=0;i<k;i++){
        sum+=arr[i];
      }
      int start=0;
      maxi=sum;
      for(int i=k;i<n;i++){
         sum+=arr[i];
         sum-=arr[start];
         maxi=min(maxi,sum);
         start++;
         if(sum==maxi) ans=start;
        
      }
      cout<<ans+1;
    return 0;
}