#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        int count=1;
        for(int i=0;i<n;i++){
            if(count>=arr[i]){
                ans++;
                count=1;
            }
            else count++;
        }
        cout<<ans<<endl;
    }
    return 0;
}