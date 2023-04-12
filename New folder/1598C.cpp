#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t--)
    { int n; cin >> n;
    vector<int> v(n);
    long long sum = 0;
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
        m[v[i]] ++;
    }
    sum *= 2;
    if (sum % n)
        cout << "0\n";
    else
    {
        long long q = sum / n;
        long long pre = 0;

        for(int i = 0; i < n; ++i)
        {
            pre = pre + m[q - v[i]];
            if(q == 2 * v[i])
                pre --;
        }

        cout << pre / 2 << '\n';
    }
    }
    
    return 0;
}