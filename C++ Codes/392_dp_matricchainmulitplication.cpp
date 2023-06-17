#include<bits/stdc++.h>
using namespace std;
int static t[100][100];            //for dp

int solve(int arr[],int i,int j){

    int mn=INT16_MAX;
    if(i>j)
        return 0;
    if(t[i][j] != -1)                 //for dp to check if value is available
        return t[i][j];
        
    for(int k=i;k<=j-1;k++){
        int tempans=solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];           //ab yha tk do part ka min cost aagya to ab further plus hoga sooo
        mn=min(mn,tempans);
    }
    return t[i][j]=mn;                //for dp

}


int main(){
    int d[]={10,20,30,40};
    memset(t,-1,sizeof(t));
    cout<<solve(d,0,3);                   //n is size of array
    return 0;
}