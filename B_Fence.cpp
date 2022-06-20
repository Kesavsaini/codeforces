#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<nums.size();i++){
           cin>>nums[i];
        }     
        int sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        int ans=0,minn=sum;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            if(sum<minn) minn=sum,ans=i-k+1;
        }
        cout<<ans+1<<endl;
}