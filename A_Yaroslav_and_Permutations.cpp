#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;   
        int maxx=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
           int val;
           cin>>val;
           map[val]++;
           maxx=max(maxx,map[val]);
        }
        if(maxx<=(n+1)/2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
}