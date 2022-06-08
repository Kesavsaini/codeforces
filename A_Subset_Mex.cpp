#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;   
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int a=-1,b=-1;
        for(int i=0;i<nums.size();i++){
            if(a+1==nums[i]) a++;
            else if(b+1==nums[i]) b++;
        }
        cout<<a+b+2<<endl; 
    }
    
}