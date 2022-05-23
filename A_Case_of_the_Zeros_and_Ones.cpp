#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> stk;
       for(int i=0;i<s.size();i++){
           if(!stk.empty() && s[i]=='0' && stk.top()=='1') stk.pop();
           else if(!stk.empty() && s[i]=='1' && stk.top()=='0') stk.pop();
           else stk.push(s[i]);
       }   
       cout<<stk.size()<<endl;
}