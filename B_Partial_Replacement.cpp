#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int firsti,lasti=-1;
        vector<char> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]=='*'){
                if(lasti==-1) firsti=i;
                lasti=i;
            }
        }
        if(lasti==-1) cout<<0;
        else if(lasti==firsti) cout<<1;
        else if(lasti-firsti<=k) cout<<2;
        else{
            int prev=firsti,curri=firsti;
            int ans=2;
           for(int i=firsti;i<lasti;i++){
                 if(nums[i]=='*' && i-prev<=k && lasti-i<=k){
                    ans++;
                    break;
                 }
                if(nums[i]=='*') curri=i; 
                 if(i-prev==k) ans++,prev=curri; 
           }
           cout<<ans;
        }
        cout<<endl;

    }
    
}