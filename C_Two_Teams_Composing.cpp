#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;    
        unordered_map<int,int> map;
        int maxx=0;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            map[val]++;
            maxx=max(maxx,map[val]);
        }
        int m=map.size();
        if(m<maxx) cout<<m;
        else cout<<min(maxx,m-1);
        cout<<endl;
        
    }
    
}