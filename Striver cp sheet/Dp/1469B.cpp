#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int red[n];
        for(int i=0;i<n;i++){
            cin>>red[i];
        }
      //   for(auto it:red) cout<<it<<" ";
        int m;
        cin>>m;
        int blue[m];
        for(int i=0;i<m;i++){
            cin>>blue[i];
        }
         vector<int> prer(n);
         prer[0]=red[0];
         for(int i=1;i<n;i++){
          prer[i]=prer[i-1]+red[i];
         }
           vector<int> preb(m);
         preb[0]=blue[0];
         for(int i=1;i<m;i++){
          preb[i]=preb[i-1]+blue[i];
         }
         
         int maxi1=0;
         for(auto it:prer) maxi1=max(maxi1,it);
         int maxi2=0;
         for(auto it:preb) maxi2=max(maxi2,it);
         cout<<maxi1+maxi2<<endl;
         
    }
    return 0;
}