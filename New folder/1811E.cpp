#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>v;
        for(int i=1;i<=k;i++){
            int p=i;
            while(p>0){
                if(p%10==4){
                    v.push_back(i);
                   
                    break;
                }
                p=p/10;
            }
        }
        int ind=upper_bound(v.begin(),v.end(),k)-v.begin();
        cout<<k+ind<<endl;
    }
    return 0;
}