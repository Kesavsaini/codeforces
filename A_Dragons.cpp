#include<bits/stdc++.h>
using namespace std;
int main(){
        int s,n;
        cin>>s>>n;
        vector<pair<int,int>> nums(n);
        for(int i=0;i<nums.size();i++){
            cin>>nums[i].first>>nums[i].second;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           if(s>nums[i].first) s+=nums[i].second;
           else{
            cout<<"NO"<<endl;
            return 0;
           }
        }
        cout<<"YES"<<endl;

}