#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;     
        vector<int> nums(n);
        for(int i=0;i<nums.size();i++){
            cin>>nums[i];
        }
        if(is_sorted(nums.begin(),nums.end())){
            cout<<0;
        }else if(nums[0]==1 || nums[n-1]==n){
               cout<<1;
        }else{
            if(nums[n-1]==1 && nums[0]==n) cout<<3;
            else cout<<2;
        }
        cout<<endl;
    }
    
}