#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        bool ans=true;
        string str=to_string(n);
        if(str[0]=='1'){
         int count=0;
        for(int i=1;i<str.size();i++){
              if(str[i]!='1' && str[i]!='4'){
                  ans=false;
                  break;
              }
              if(str[i]=='1'){
                  count=0;
              }
              else{
                  count++;
              }
              if(count>2){
                  ans=false;
                  break;
              }
        }
    }else ans=false;
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;     
    
}