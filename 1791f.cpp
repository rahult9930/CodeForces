#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int t, n, q, a[N];

int sum_of_digits(int x) {
int res = 0;
while (x > 0) {
res += x % 10;
x /= 10;
}
return res;
}

int main() {
cin >> t ;
while (t--) {
cin >> n >> q;
for (int i = 1; i <= n; i++) {
cin >> a[i];
}
while (q--) {
int type, l, r;
cin >> type >> l;
if (type == 1) {
    cin>>r;
for (int i = l; i <= r; i++) {
a[i] = sum_of_digits(a[i]);
}
} 
else {
cout << a[l] << endl;
}
}
}
return 0;
}