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
        unordered_map<int,int> map;
        bool ans=false;
        for(int i=0;i<n;i++){
           if(map.find(nums[i])==map.end()) map[nums[i]]=i;
           else{
              if(i-map[nums[i]]>=2){
                ans=true;
                break;
              }
           }
        }
        if(ans) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
            
    }
    
}