#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        int maxx=-1;
        for(int i=0;i<nums.size();i++){
            cin>>nums[i];
            maxx=max(maxx,nums[i]);
        }
        int idx=-2;
        for(int i=0;i<nums.size();i++){
             if(nums[i]==maxx){
                 if(i>0 && nums[i-1]!=maxx){
                     idx=i;
                     break;
                 }
                 if(i<nums.size()-1 && nums[i+1]!=maxx){
                     idx=i;
                     break;
                 }
             }
        }     
        cout<<idx+1<<endl;
    }
    
}