#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cout<<"entre no. of elements";
    // cin >> n;
    int arr[8]={1,2,0,7,2,0,2,2};
    // cout<<"entre elements";
    // for(int i =0;i<n;i++){
    //     cin>>arr[i];

    // }
    // int j=2;
    // int diff=arr[1]-arr[0],ans=0,curr=2;   //curr 2 isiliye h kyuki length of array btani h
    // while(j < n){
    //    if(diff == arr[j]-arr[j-1]){
    //        curr++;
    //     //    ans++;
    //    }else{
    //        diff = arr[j]-arr[j-1];
    //        curr=2;
    //    }
    //    ans=max(ans,curr);
    //    j++;
    // }

    // cout<<ans;


    //.........................xxxxxxxxxxxx............................
    int mx=0;
    int ans=0;
    if(arr[1] < arr[0]){
        ans=1;
        mx=arr[1];
    }
    for(int j=1; j<8 ; j++ ){
        if(arr[j]>arr[j+1] and arr[j]>arr[j-1] and arr[j]>mx){
            ans++;
            mx=arr[j];
        }
    }
    cout<<ans;

    return 0;
}