#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num=9;
        string ans;
        while(n){
           if(n<num){
             ans+=to_string(n);
              n-=n;
           }else{
             n-=num;
             ans+=to_string(num);
             num--;
           }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;     
    }
    
}