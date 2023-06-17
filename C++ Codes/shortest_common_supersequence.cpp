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

int supersequence(string  a,string b,int n, int m){
    return m+n-lcs(a,b,n,m);  //worst case me add kr deta hu fir repeating minus krunga jitne h wo aayega lcs se
}

int main(){
    memset(t,-1,sizeof(t));
    string a;
    string b;
    cin>>a>>b;
    cout<<supersequence(a,b,4,3);
    return 0;
}