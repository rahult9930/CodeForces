#include <bits/stdc++.h>
using namespace std;

// int help(vector<int>&arr,int i){
//     if(i==arr.size()-1) return arr[i];
//     vector<int>temp=arr;  
//     arr[i]=-arr[i];
//     arr[i+1]=-arr[i+1];
//     int swap=arr[i]+help(arr,i+1);
//     int not_swap=temp[i]+help(temp,i+1);
//     return max(swap,not_swap);
// }

int main() {
   int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(n), prefix(n, 0);
    long long ans = 0, count = 0;
    for(int i = 0; i < n; i++){
      cin>>arr[i];
      ans += abs(arr[i]);
      if(arr[i] < 0) count++;
    }
    for(int i= 0;i < n; i++){
      if(arr[i] < 0){
        arr[i] = abs(arr[i]);
      }
    }
    if(!(count % 2)){
      cout<<ans<<endl;
      continue;
    }
    int mini = *min_element(arr.begin(), arr.end());
    cout<<ans-(2*mini)<<endl;
  }
    return 0;
}