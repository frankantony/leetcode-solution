#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(int m, int n) {
	int dp[m][n];
        
	for (int i = 0; i < m; i++)
		dp[i][n-1] = 1;

	for (int i = 0; i < n; i++)
		dp[m-1][i] = 1;
        
	for (int i = n-2; i >= 0; i--)
		for (int j = m-2; j>= 0; j--)
			dp[j][i] = dp[j+1][i] + dp[j][i+1];
        
	return dp[0][0];    
}
    
int uniquePaths(int m, int n) {
        
	int result = solve(m, n);
	return result;
}


int main () {
	int n, m;
	cin >> m >> n;
	int result = uniquePaths(m, n);
	cout << result << endl;

	return 0;
}
