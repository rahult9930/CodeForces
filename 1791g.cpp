#include<bits/stdc++.h> 
using namespace std; 
  
int t, n, c, a[200005]; 
  
int main() 
{ 
    cin >> t; 
    while (t--) 
    { 
        cin >> n >> c; 
        for (int i = 0; i < n; i++) 
            cin >> a[i]; 
        sort(a, a + n); 
        int ans = 0; 
        for (int i = 0; i < n; i++) 
        { 
            if (c >= a[i]) 
            { 
                c -= a[i]; 
                ans++; 
            } 
            else break; 
        } 
        cout << ans << endl; 
    } 
    return 0; 
} 
