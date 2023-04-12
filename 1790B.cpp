#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int>ans;
    ans.push_back(s-r);
    n--;
    while(n>0){
        if(n==r){
            while(n--){
                 ans.push_back(1) ;
    
            }
            continue;
        }
      int rem=r%n;
        int k=r/n;
      //   cout<<rem<<" "<<n<<endl;
        int count=0;
       
        while(k--){
               ans.push_back(n) ;
               count ++;
        }
        n=n-count;
        r=rem;
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
return 0;
}