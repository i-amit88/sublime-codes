#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        unsigned long int x,y;
        int n=0;
        cin>>x >> y;
        
        if(x>y)swap(x,y);
        if(x==0 and y==0)
            cout<<"0\n";
        else if(x==0){
            cout<<"-1\n";
            
        }else{
            long long int ans=0;
            while(x<y){
                x*=2;
                ans++;
            }
            cout<<ans+y<<endl;
        }

        
        
        
    }
    return 0;
}