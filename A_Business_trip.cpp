#include<bits/stdc++.h>
using namespace std;
class solution{
public:
  
};
int main(){
 int k;
 cin>>k;
 vector<int> nums(12);
 for(int i=0;i<nums.size();i++){
     cin>>nums[i];
 }
 sort(nums.begin(),nums.end(),[&](int a,int b){return a>b;});
 int val=0;
 int i;
 for(i=0;i<nums.size();i++){
    if(val>=k) break;
    val+=nums[i];
 }
 if(val>=k){
   cout<<i;
 }else cout<<-1;
 cout<<endl;
    
}