#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>bar(n);
    for(int i=0;i<n;i++){
        cin>>bar[i];
    }
    int q;
    cin>>q;
    int money[q];
    for(int i=0;i<q;i++){
        cin>>money[i];
    }
    sort(bar.begin(),bar.end());
   for(int i=0;i<q;i++){
    int k=upper_bound(bar.begin(),bar.end(),money[i])-bar.begin();
  cout<<k<<endl;
    
   }
    return 0;
}