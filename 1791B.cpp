#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string x;
    cin>>x;
    int k=0,j=0;
    bool check=false;
    for(int i=0;i<n;i++){
        if(x[i]=='L'){
            k--;
        }
        else if(x[i]=='R'){
            k++;
        }
        else if(x[i]=='U'){
            j++;
        }
        else if(x[i]=='D'){
            j--;
        }

        if(k==1 && j==1) check=true;
    }
    if(check==true) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
return 0;
}