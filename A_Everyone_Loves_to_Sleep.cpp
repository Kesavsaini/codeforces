#include<bits/stdc++.h>
using namespace std;
class solution{
public:
  
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int Ha=-1,Hm=-1;
        for(int i=0;i<n;i++){
            int hrs,mins;
            cin>>hrs>>mins;
                int h,m;
                if(hrs<H || (hrs==H && mins<M)){
                  if(mins>M){
                    m=M+60-mins;
                    h=H-1-hrs;
                  }else m=M-mins,h=H-hrs;
                  if(m>0){
                    h=23-h;
                    m=60-m;
                  }
                  else h=24-h;
                }else {
                   if(mins<M){
                    m=mins+60-M;
                    h=hrs-1-H;
                  }else m=mins-M,h=hrs-H;
                }
                if(Ha==-1 || ((h*60+m)<(Ha*60+Hm))){
                    Ha=h;
                    Hm=m;
                }
        }
        cout<<Ha<<" "<<Hm<<endl;     
    }
    
}