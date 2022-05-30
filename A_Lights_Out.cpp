#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3],ans[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(arr[i][j]%2==0) continue;
           ans[i][j]=!ans[i][j];
           if(i>0) ans[i-1][j]=!ans[i-1][j];
           if(j>0) ans[i][j-1]=!ans[i][j-1];
           if(j<2) ans[i][j+1]=!ans[i][j+1];
           if(i<2) ans[i+1][j]=!ans[i+1][j];           
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<ans[i][j];      
        }
        cout<<endl;
    }
    
    
    
}