#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
           cin>>nums[i];
        }
        int ans=0;
        int count=0;
        for(int i=1;i<n-1;i++){
           if(nums[i-1]+nums[i+1]<nums[i]) ans++;
           if(i%2) count++;
        }
        if(k!=1) cout<<ans;
        else cout<<count;
        cout<<endl;

    }
    
}