#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,m;
        cin>>n>>m;     
        vector<int> nums(n),vec(m);
        for(int i=0;i<nums.size();i++){
           cin>>nums[i];
        }
        for(int i=0;i<m;i++){
            cin>>vec[i];
        }
        unordered_map<int,int> map;
        vector<int> ans(n);
        int j=0;
        for(int i=0;i<nums.size();i++){
             map[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
             ans[i]=map.size();
             map[nums[i]]--;
             if(!map[nums[i]]) map.erase(nums[i]);
        }
        for(int i=0;i<vec.size();i++){
            cout<<ans[vec[i]-1]<<endl;
        }
}