#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,d;
        cin>>n>>d;
        vector<int> nums(n);
        int sum=0;
        for(int i=0;i<nums.size();i++){
           cin>>nums[i];
           sum+=nums[i];
        }
        if(((n-1)*10+sum)>d) cout<<-1;
        else cout<<(d-sum)/5;
        cout<<endl;
}