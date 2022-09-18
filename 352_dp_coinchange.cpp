#include<bits/stdc++.h>
using namespace std;


int minCoins(int n, int a[], int dp[]) {
		
		if(n == 0) return 0;
		
		int ans = INT_MAX;
		
		for(int i = 0; i<4; i++) {
			if(n-a[i] >= 0) {
				int subAns = 0;
				if(dp[n-a[i]] != -1) {
					subAns = dp[n-a[i]];
				} else {
					subAns = minCoins(n-a[i], a, dp);
				}
				if(subAns != INT_MAX && subAns + 1 < ans) {
					ans = subAns + 1;
				}
			}
		}
		return dp[n] = ans;
}

int main(){

		int n = 18;
		int a[] = {7, 5, 1};
		
		int dp[n+1]; 
		
        memset(dp,-1,sizeof(dp));
        
		
		int ans = minCoins(n, a, dp);
		cout<<ans<<endl;
		
		
	

   
}