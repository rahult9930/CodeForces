#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n,m;
    cin>>n>>m;
    int near[n+1] = {0};
    for (int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        if (a>b)
        {
            if (near[b]>a) near[b]=a;
            else if (near[b]==0) near[b]=a;
        }
        else 
        {
             if (near[a]>b) near[a]=b;
            else if (near[a]==0) near[a]=b;
        }
    }
    near[n]=n+1;

    for (int i = n-1; i >0; i--)
    {
       //  cout<<near[i]<<" ";
        if (near[i]==0)
        {
            near[i]=near[i+1];
        }
        else if (near[i]>near[i+1]) near[i]=near[i+1];
    }
     
    // for(auto it:near) cout<<it<<" ";
    // cout<<endl;
    long long int sum=0;
    for (int i=1; i<n+1;i++)
    {
        sum+=near[i]-i;
    }
    cout<<sum<<endl;
    
}

int main()
{
	//need to calculate the no. of subarrays with a given XOR
	int t;
	cin>>t;
	while (t--) solve();
}