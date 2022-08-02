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
        int j=0;
        unordered_set<int> set;
        for(int i=0;i<n;i++){
           if(set.find(nums[i])==set.end()) set.insert(nums[i]);
           else{
             while(nums[j]!=nums[i]) set.erase(nums[j]),j++;
             j++;
           }
        }
        cout<<j<<endl;
    }
    
}