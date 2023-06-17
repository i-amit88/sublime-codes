#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>> n >> x;
        if(n %2==0 or x%2 !=0 ){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}