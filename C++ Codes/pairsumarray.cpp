#include<bits/stdc++.h>
using namespace std;
        //program to find sub array elements  which is equal to k  
bool pairsum(int arr[],int n, int k){
        int low=0;
        int high=n-1;
        while(low<high){
            if(arr[low]+ arr[high] ==k){
                cout<<arr[low]<<" "<<arr[high]<<endl;
                return true;
            }
            else if(arr[low]+ arr[high]>k){
                high--;
            }else{
                low++;
            }
        }
        return false;
}

int main(){
    cout<<"enetr size of array ";
    int n;
    cin>>n;
    cout<<"enetr sum element ";
    int k;
    cin>>k;
    
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<pairsum(arr,n,k)<<endl;




}