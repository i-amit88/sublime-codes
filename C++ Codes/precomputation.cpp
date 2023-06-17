#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7; // depends on the contraints
int a[N];
int pf[N];

int main()
{

    // fact[0]=fact[1]=1;
    // for(int i =2; i < N ; i++){
    //     fact[i]=fact[i-1] * i;
    // }

    // int t;
    // cin>>t;
    // while(t--){

    //     int n;
    //     cin>>n;
    //     cout<<fact[n]<<endl;
    //     //time complexity is t(for test cases ) + n(for factorial computation)
    // }
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>> l >> r;
        cout<<pf[r]- pf[l-1]<<endl;
    }

    return 0;
}