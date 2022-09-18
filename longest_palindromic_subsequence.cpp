#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int static t[100][100];

int lcs(string a,string b, int n, int m){
    if(n==0 or m==0){
        return 0;
    }
    if(t[n][m] != -1)
        return t[n][m];
    if(a[n-1] == b[m-1]){
        return 1+lcs(a,b,n-1,m-1);
    }else{
        return t[n][m]=max(lcs(a,b,n,m-1),lcs(a,b,n-1,m));
    }
}


int main(){
    memset(t,-1,sizeof(t));
    string a;
    cin>>a;
    string b=a;
    reverse(b.begin(),b.end());     //it is a void return type
    cout<<lcs(a,b,6,6);
    return 0;
}