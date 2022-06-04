#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0,carry=0;
        while(n>=10){
           int val=n%10;
           ans+=n-val;
           n/=10;
           n+=val;
        }
        ans+=n;
        cout<<ans<<endl;     
    }
    
}