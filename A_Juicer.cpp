#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,b,d;
        cin>>n>>b>>d;
        vector<int> nums(n);
        for(int i=0;i<nums.size();i++){
            cin>>nums[i];
        }   
        int sum=0;
        int ans=0;      
        for(int i=0;i<nums.size();i++){
            if(nums[i]>b) continue;
            sum+=nums[i];
            if(sum>d) ans++,sum=0;
        }
        if(sum>d) ans++;
        cout<<ans<<endl;

}