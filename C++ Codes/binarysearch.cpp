#include<bits/stdc++.h>
using namespace std;

void binarysearch(int arr[],int l,int h,int key){
    if(l<=h){
        int mid=(l+h)/2;
        if(key==arr[mid]){
            cout<<"element found at "<<mid+1;
            return;
        }else{
            if(arr[mid]>key)
                h=mid-1;
            else    
                l=mid+1;
        }
    
        binarysearch(arr,l,h,key);

    }else{
        cout<<"element not found ";
    }
}



int main(){

    int arr[6]={1,4,6,7,12,7};
    double time_spent = 0.0;
 
    clock_t begin = clock();

    binarysearch(arr,0,5,1);

    clock_t end = clock();
 
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout<<endl;
    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}