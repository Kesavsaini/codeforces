#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
            while(x>20 && n){
               x/=2;
               x+=10;
               n--;
            }
           if(m*10>=x) cout<<"YES";
           else cout<<"NO"; 
        cout<<endl;  
    }
    
}