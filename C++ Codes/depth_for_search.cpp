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




int visited[7];
	int a[7][7]={{0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0},
	{0,1,0,0,1,0,0},
	{0,1,0,0,1,0,0},
	{0,0,1,1,0,1,1},
	{0,0,0,0,1,0,0},
	{0,0,0,0,1,0,0}};

void dfs(int u){
	if(visited[u]==0){
		cout<<u;
		visited[u]=1;
		for (int v = 1; v < 7; v++)
		{
			if(a[u][v]==1 and visited[v]==0){
				dfs(v);
			}
		}
	}
}

int main(){

	file_io();
	
	dfs(3);
	cout<<"hello";
	return 0;
}




