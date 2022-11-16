#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(vector<vector<int> >& obstacleGrid) {
	int m = obstacleGrid.size(), n = obstacleGrid[0].size();
	long dp[m][n];
        
	bool obstacle = false;
	for (int i = m-1; i >= 0; i--) {
		if (obstacleGrid[i][n-1] == 0 && !obstacle)
			dp[i][n-1] = 1;
		else {
			dp[i][n-1] = 0;
			obstacle = true;
		}
	}

	obstacle = false;
	for (int i = n-1; i >= 0; i--) {
		if (obstacleGrid[m-1][i] == 0 && !obstacle)
			dp[m-1][i] = 1;
		else {
			dp[m-1][i] = 0;
			obstacle = true;
		}
	}
        
	for (int i = n-2; i >= 0; i--) {
		for (int j = m-2; j >= 0; j--) {
			if (obstacleGrid[j][i] == 0)
				dp[j][i] = dp[j+1][i] + dp[j][i+1];
			else
				dp[j][i] = 0;
		}
	}
        
	return dp[0][0];    
}
 
    
int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
	int result = solve(obstacleGrid);
	return result;
}

int main () {
	int n, m, value;
	cin >> m >> n;
	vector<vector<int> > obstacleGrid;
	for (int i = 0;i < m; i++) {
		vector<int> vet;
		for (int j = 0; j < n; j++) {
			cin >> value;
			vet.push_back(value);
		}
		obstacleGrid.push_back(vet);		
	}

	int result = uniquePathsWithObstacles (obstacleGrid);
	cout << result << endl;

	return 0;
}
