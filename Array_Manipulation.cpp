#include<bits/stdc++.h>
using namespace std;
const int N=1e7 + 10;
long long ar[N];
int main(){
    int n,m;
    cin>>n >> m;
    while(m--){
        int a,b,d;
        cin>>a >>b >> d;
        ar[a] +=d;       //first index pe +d and last+1 pe -d
        ar[b+1] -=d;        //isse prefix sum hota rhega till - ni aaya and end
        
        // for(int i=a; i<=b; i++){  //this taking long time
        //     ar[i] +=d;
        // }
    }
    for(int i=1; i<=n ; i++){
            ar[i] +=ar[i-1];
        }
    long long mx=-1;
    for(int i=1; i<=n; i++){
        mx=max(mx,ar[i]);
    }
    cout<<mx<<endl;
    return 0;
}