#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<int> nums(n+1);
 nums[0]=0;
 for(int i=1;i<n+1;i++){
    cin>>nums[i]; 
 }
 int ans=0,eng=0;
 for(int i=1;i<n+1;i++){
    eng+=(nums[i-1]-nums[i]);
    if(eng<0) ans+=abs(eng),eng=0;
 }
 cout<<ans<<endl;   
}