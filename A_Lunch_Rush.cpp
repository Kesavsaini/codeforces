#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> nums(n);
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>nums[i].first>>nums[i].second;
            nums[i].first-=(nums[i].second>k?nums[i].second-k:0);
            maxx=max(maxx,nums[i].first);
        }
        cout<<maxx<<endl;
        
             
        
}