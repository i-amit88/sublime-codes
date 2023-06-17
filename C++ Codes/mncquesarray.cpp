#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){

    // int idx[7];
    // int minidx=INT8_MAX;    //usi ka value save rhe
    // fill_n(idx,7,-1);               //initialize array with -1 using algorithm in std;
    //     //counting no. repeating numbers
    // int arr[7]={1,5,3,4,3,5,6};
    // for(int i=0; i<7; i++){
    //     if(idx[arr[i]] == -1)
    //         idx[arr[i]]=i;
    //     else{   
    //         minidx=min(minidx,idx[arr[i]]);
    //         continue;
    //     }
    // }
    // if(minidx==INT8_MAX)
    //     cout<<"-1 "<<endl;
    // else
    //     cout<<minidx+1<<endl;   //for user friendly
    

    //.................xxxxxxxxxxxxxx...................
    //...........continuous array of specific sum..............
    // int a[5]={1,2,3,7,5};
    // int s=12;
    // int n=5;
    // //2 pointer sum approach will take bigo of n

    // int st=-1,en=-1,sum=0,i=0,j=0;

    // while(j<n and sum+a[j]<=s){
    //     sum+=a[j];

    //     j++;    //j will be end pointer adding the sum
    // }

    // // now either sum is less or equal

    // if(sum==s){      //if sum is equal to sum then st en is the ans
    //     cout<<st+1<< " " << en << endl;   //as i is 0 so +1
    // }

    // while(j<n){
    //     sum+=a[j];    //j is already incremented then cond was checked

    //     while(sum>s){
    //         sum-=a[i];
    //         i++;
    //     }
        
    //     if(sum==s){
    //         st=i+1;
    //         en=j+1;
    //         break;
    //     }
    //     j++;
    // }
    // cout<<st << " "<< en <<endl;

    //................xxxxxxxxxxxxxxxxxx...............
    // //finding first +ve missing number
    int arr[6]={0,-9,1,3,-4,5};
    // // for hasiing we will use 10 power 6 +2 size array amx is 10 power 8
    // const int N=678;
    // int check[N];
    // fill_n(check,N,0);
    // for(int i=0 ; i<6; i++){
    //     if(arr[i]>=0)
    //         check[arr[i]]=1;

    // }
    // int ans=0;
    // for(int j =1; j<N; j++){
    //     if(check[j]==0){
    //         ans =j;
    //         break;
    //     }
    // }
    // cout<<ans;


    //.................xxxxxxxxxxx my stl way xxxxxx.xxx.......
    set<int>s;
    for(int i = 0; i< 6; i++){
        s.insert(arr[i]);
    }
    int j=1;
    while(j< *--s.end()){
        if(s.find(j) == s.end()){
            cout<<j<<endl;
            break;
        }
        j++;
    }
    return 0;
}