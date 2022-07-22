#include<bits/stdc++.h>
using namespace std;
class solution{
public:
  
};
int main(){
    int t;
    cin>>t;
    while(t--){
       long long hc,dc,hm,dm,k,w,a;
       cin>>hc>>dc;
       cin>>hm>>dm;
       cin>>k>>w;
       cin>>a;
       int n=k;
       bool flag=false;
       while(n!=-1){
        long long myhit=(hm/(dc+(w*(k-n))));
        if(hm%(dc+(w*(k-n)))) myhit++;
        long long monhit=((hc+(a*n))/dm);
        if((hc+(a*n))%dm) monhit++;
        // cout<<myhit<<" "<<monhit<<endl;
           if(myhit<=monhit){
            flag=true;
            break;
           }
           n--;
       }
       if(flag) cout<<"YES";
       else cout<<"NO";
       cout<<endl;   
    }
    
}