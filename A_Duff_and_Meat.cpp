#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> a(n),p(n);
        for(int i=0;i<a.size();i++){
            cin>>a[i]>>p[i];
        }
        int minn=p[0];
        for(int i=1;i<p.size();i++){
            minn=min(minn,p[i]);
            p[i]=minn;
        }
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans+=a[i]*p[i];
        }
        cout<<ans<<endl;     
    
}