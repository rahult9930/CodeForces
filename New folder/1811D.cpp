#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int prev1=1;
        int prev2=1;
        unordered_set<int>se;
        int len=1,bre=1;
        se.insert(1);
        int i=3;
        
        while(i<=n+1){
            int curr=prev1+prev2 ;
            if(i==n) len=curr;
            if(i==n+1) bre=curr;
            se.insert(curr);
            prev1=curr;
            prev2=prev1;
        }

    }
    
    return 0;
}