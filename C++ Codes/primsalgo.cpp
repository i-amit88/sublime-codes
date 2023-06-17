
#include<bits/stdc++.h>
using namespace std;

#define I 32767
void file_io(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
}

int cost[8][8];
int near[8],t[2][6];

int main(){
	file_io();


	int i,j,u,v,k,min = I,n=7;       //check for minimum
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			if(min<cost[i][j]){
				min=cost[i][j];
				u=i;
				v=j;
			}
		}
	} 

	t[0][0]=u; t[0][1]=v;
	near[u]=0;
	near[v]=0;

	for(i=1;i<n;i++){
		if(near[i] != 0 and cost[i][u]<cost[i][v]) //saves the connected and smallest element
			near[i]=u;
		else
			near[i]=v;
	}	

	for(i=1;i<n-1;i++){
		min = I;
		for(j=1;j<n-1;j++){       //compares the value and finds the near element 
			if(near[j] != 0 and cost[j][near[j]]<min ){
				min=cost[j][near[j]];
				k=j;
			}
		}
		t[o][i]=k; t[1][i]=j;
		near[k]=0;
		for(j=1;j<=n;j++){
			if(near[j] !=0 and cost[j][k]<cost[j][near[j]])
				near[j]=k;
		}
	}
	
	return 0;

}