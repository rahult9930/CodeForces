#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=1;
    int maxi=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            ans++;
        }
        else{
            maxi=max(maxi,ans);
            ans=1;
        }
    }
     maxi=max(maxi,ans);
     cout<<maxi<<endl;
    return 0;
}