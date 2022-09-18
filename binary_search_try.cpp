#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void binarysearch(string str,int l,int h,char target){
    if(l<=h){
        int mid=(l+h)/2;
        if(target==str[mid]){
            cout<<"target found "<<str[mid+1];
            return;
        }else{
            if(str[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        binarysearch(str,l,h,target);
    }else{
        cout<<"no character found ";
    }
}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    char target;
    cin>>target;
    binarysearch(str,0,n,target);
    

    return 0;
}