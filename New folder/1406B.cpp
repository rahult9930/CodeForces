#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        for(ll i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        ll m1=ar[0]*ar[1]*ar[2]*ar[3]*ar[4];
        ll m2=ar[n-1]*ar[n-2]*ar[n-3]*ar[n-4]*ar[n-5];
        ll ans=max(m1,m2);
        ll m3=ar[0]*ar[1]*ar[2]*ar[3]*ar[n-1];
        ll m4=ar[0]*ar[1]*ar[n-3]*ar[n-1]*ar[n-2];
        ll ans1=max(m3,m4);
        ans=max(ans,ans1);
        cout<<ans<<"\n";
    }
    return 0;
}