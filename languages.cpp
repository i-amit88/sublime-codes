#include<bits/stdc++.h>
#include<cstring>
using namespace std;


void file_io(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
}

int main(){

	
	file_io();

	int t;
	cin>>t;
	while(t--){
		int n,archives=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]==arr[i+1]){
				continue;
			}
			else{
				archives++;
			}
		}
		cout<<archives<<endl;
	}
	return 0;
}