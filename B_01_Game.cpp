#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool alice=true;
        stack<char> stk;
        for(int i=0;i<s.size();i++){
            if(!stk.empty() && stk.top()!=s[i]){ 
                stk.pop();
                alice=!alice;
            }
            else stk.push(s[i]);
        }
        if(alice) cout<<"NET";
        else cout<<"DA";     
        cout<<endl;
    }
    
}