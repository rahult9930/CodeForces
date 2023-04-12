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
      
        if(arr[0]==1){
          long long max=1;
          bool check =true;
          for(int i=1;i<n;i++){
            if(arr[i]>max){
                check=false;
                break;
            }
            max+=arr[i];
          }
          if(check) cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
       


    }
    return 0;
}