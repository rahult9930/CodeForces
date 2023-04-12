#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
 {
    string  pi = "314159265358979323846264338327" ;
//  int num=22;
//  int den=7;
//  for(int i=0;i<31;i++){
//     pi+=to_string(num/den);
//    int rem=num%den;
//    num=rem*10 ;
//  }
string s;
cin>>s;
if(s==pi){
    cout<<30<<endl;
    continue;
}
int count=0;
for(int i=0;i<30;i++){
    if(s[i]!=pi[i]){
        break;
    }
    count++ ;
}
cout<<count<<endl;}
return 0;
}