#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,z,ans=0;
        cin>>n>>z;
        priority_queue<ll>q;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            q.push(x);   //soldiersw
        }
        while(q.size())
        {
            ans++;
            auto a=q.top();
            z-=a;
            q.pop();
            if(a/2)q.push(a/2);   //soldier attacked and strength reduces
            if(z<=0)break;    //pain defeated means monster
        }

        if(z<=0)cout<<ans<<endl;
        else cout<<"Evacuate\n";    
        
    }
    return 0;
}