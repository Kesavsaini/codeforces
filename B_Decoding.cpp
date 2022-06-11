#include<bits/stdc++.h>
using namespace std;
class solution{
public:
  
};
int main(){
        int n;
        cin>>n;    
        string s;
        cin>>s;
        string ans;
        ans+=s[0];
        int sz=s.size()-1;
        for(int i=1;i<s.size();i++){
            if(sz%2!=0){
                ans+=s[i];
            }else{
                string temp;
                temp+=s[i];
                temp+=ans;
                ans=temp;
            }
            sz--;
        }
        cout<<ans<<endl;
}