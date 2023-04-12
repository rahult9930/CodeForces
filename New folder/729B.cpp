#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // read in values of the array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // preprocess rows
    vector<int> first_actor_in_row(n, -1), last_actor_in_row(n, -1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 1) {
                if(first_actor_in_row[i] == -1) first_actor_in_row[i] = j;
                last_actor_in_row[i] = j;
            }
        }
    }
   
    // preprocess columns
    vector<int> first_actor_in_col(m, -1), last_actor_in_col(m, -1);
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            if(arr[i][j] == 1) {
                if(first_actor_in_col[j] == -1) first_actor_in_col[j] = i;
                last_actor_in_col[j] = i;
            }
        }
    }
   
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 0) {
                // check row
                if(first_actor_in_row[i] != -1 ) {
                  if(j<first_actor_in_row[i] || j>last_actor_in_row[i]) ans++;
                  else ans=ans+2;
                }

                // check column
                if(first_actor_in_col[j] != -1) {
                    if(i<first_actor_in_col[j] || i>last_actor_in_col[j]) ans++;
                    else ans=ans+2;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
