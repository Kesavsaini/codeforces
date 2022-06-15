#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='Y' || c=='y') return true;
    return false;
}
int main(){
string s,ans;
cin>>s;
for(int i=0;i<s.size();i++){
    if(isVowel(s[i])) continue;
    else if(s[i]>=97 && s[i]<=122) ans+='.',ans+=s[i];
    else{
        ans+='.';
        ans+=(s[i]+32);
    }
}
cout<<ans<<endl;
    
}