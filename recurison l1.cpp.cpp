#include<bits/stdc++.h>
using namespace std;

void file_io(){


	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

}

int fact(int n){
	//base case
	if(n == 1) return 1;
	//recursive assumption
	int subproblem=fact(n-1);
	//self work
	return n*subproblem;
}

void printinc(int n){
	if(n == 0) return;
	printinc(n-1);
	cout<<n<<endl;
}

void print_dec_inc(int n){
	if (n == 1){
		cout<<1<<endl;
		return;
	}
	cout<<n<<endl;
	print_dec_inc(n-1);
	cout<<n<<endl;

}


int main(){


	file_io();
	
	// cout<<fact(5);
	// printinc(5);
	print_dec_inc(5);
	return 0;
}