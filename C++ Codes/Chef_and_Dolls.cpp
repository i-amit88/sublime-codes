// #include<bits/stdc++.h>
// using namespace std;
// #include<map>
// const int N=1e7+10;
// int arr[N]={0};
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         map<int,int>m;
//         for(int i=0; i<n; i++){
//             int type;
//             cin>>type;
//             m[type]++;
//         }
//         for(auto x:m){
//             int key=x.first;
//             int value=x.second;
//             if(value %2 !=0)
//                 cout<<key<<endl;
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#include<map>
const long N=1e7+10;
long  int arr[N];
int main(){

    
    
    
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long array[n];
        for(int i=0 ; i<n ; i++){
            cin>>array[i];
        }
        for(int i=0; i < n ; i++){
            arr[array[i]] +=1;
        }
        for(int i=0; i < n ; i++){
            if(arr[array[i]] %2 !=0){
                if(arr[array[i]]==0)
                    cout<<0<<endl;
                cout<<array[i]<<endl;
                
            }
        }


    }
    
    
    
    return 0;

}

