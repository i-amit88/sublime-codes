#include<bits/stdc++.h>
using namespace std;
#define ll int 
const int N=20;
ll t[N][N];
int main(){

    ll a;
    cin>>a;
    ll v[2*a];
    for(ll i=0; i<2*a; i++){
        int b;
        cin>>b;
        v[i]=b;
    }

    for(ll i=1; i<=N; i++){
        for(ll j=i+1; j<=N; j++){
            t[i][j]=(ll)__gcd((ll)i,(ll)j);
            
        }
    }
    ll mx=0;
    set<ll>s;
    for(int i=0; i<=2*a; i++){
        for(int j=i+1; j<=2*a; j++){
            mx=max(t[v[i]][v[j]],mx);
        }
        s.insert(mx);
        mx=0;
    }
    ll ans=0,j=1;
    for(auto i:s){
        ans+=i*j;
        j++;
    }
    cout<<ans;
    
    return 0;

}