#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n >> q;
        string s;
        cin>>s;
        long long  hsh[26][2];
        memset(hsh,0,sizeof(hsh));
        for(long long i = 1 ; i <= n ; i++){
            hsh[s[i-1]-'a'][1] += 1;    //to iterate from 0 index of string
        }
        while(q--){
            long  oddctr=0;
            long long l,r;
            cin >> l >> r;
            for(long long i=l;i<=r;i++){
                if(hsh[s[i-1]-'a'][1] %2 !=0)
                    oddctr++;
            }
            if(oddctr>1 )
                cout<<"NO\n";
            else{
                cout<<"YES\n";
            }
        }
    }
    return 0;
}