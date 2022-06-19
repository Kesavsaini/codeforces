#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int ans=0,one=0,two=0,three=0;
        for(int i=0;i<n;i++){
           int val;
           cin>>val;
           if(val==1) one++;
           else if(val==2) two++;
           else if(val==3) three++;
           else ans++;
        }
        one-=min(one,three);
        ans+=(one/4);
        ans+=(two/2);
        ans+=three;
        int extra=(one%4);
        extra+=(two%2)*2;
        if(extra && extra<=4) ans++;
        else if(extra==5) ans+=2;
        cout<<ans<<endl;     
}