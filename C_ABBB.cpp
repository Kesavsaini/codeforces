#include<bits/stdc++.h>
using namespace std;
// class solution{
// public:

// int sol(string &s){

// }
// int dpsol(string &s,int i){
//     if((s[i]=='A' && s[i+1]=='B') && ) 
// }
  
// };
int main(){
    int t;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
       stack<char> stk;
       for(int i=0;i<str.size();i++){
         if(!stk.empty() && ((stk.top()=='A' && str[i]=='B') || (stk.top()=='B' && str[i]=='B'))) stk.pop();
         else stk.push(str[i]);
       }
       cout<<stk.size()<<endl;
    }
    
}