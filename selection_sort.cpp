#include<bits/stdc++.h>

using  namespace std;






void selection(int a[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=k=i;j<n;j++){
			if(a[j]<a[k])
					k=j;

		}
		swap(a[i],a[k]);
	}
}

void insertion(int a[],int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		int x=a[i];
		while(j>-1 and a[j]>x){
			a[j+1]=a[j];
			j--;

		}
		a[j+1]=x;
	}
}



int main(){
	
	int n=10;
	int arr[10]={2,5,4,3,56,78,97,43,99,22};
	cout<<"using selection sort";
	selection(arr,10);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
	cout<<"using insertion sort\n";
	insertion(arr,10);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}


	return 0;

}