#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n%3){
            n--;
            count++;
        };
        n/=3;
        if(count==2) cout<<n+1<<" "<<n+2<<" "<<n-1;
        else cout<<n<<" "<<n+1+count<<" "<<n-1;
        cout<<endl;
             
    }
    
}