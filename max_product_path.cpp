#include<iostream>
#include<vector>

using namespace std;

int maxProductPath(vector<vector<int> >& grid) {
	int m = grid.size(), n = grid[0].size();
	int MOD = 1000000007;
        
	long long maxDp[m][n], minDp[m][n];
	minDp[0][0] = maxDp[0][0] = grid[0][0];
        
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) continue;
			else if (i == 0)
				minDp[i][j] = maxDp[i][j] = grid[i][j] * maxDp[i][j-1];
			else if (j == 0)
				minDp[i][j] = maxDp[i][j] = grid[i][j] * maxDp[i-1][j];
                
			else {
				if (grid[i][j] < 0) {
					maxDp[i][j] = min (minDp[i-1][j], minDp[i][j-1]) * grid[i][j];
					minDp[i][j] = max (maxDp[i-1][j], maxDp[i][j-1]) * grid[i][j];
				}                   
				else {
					maxDp[i][j] = max (maxDp[i-1][j], maxDp[i][j-1]) * grid[i][j];
					minDp[i][j] = min (minDp[i-1][j], minDp[i][j-1]) * grid[i][j];
				}
			}
		}
	}
        
	int result = maxDp[m-1][n-1] % MOD;
	if (result < 0) return -1;
	return result;
}

int main () {
	int n, m;
	cin >> m >> n;
	int value;
	vector<vector<int> > grid;
	for (int i = 0; i < m; i++) {
		vector<int> vet;
		for (int j = 0; j < n; j++) {
			cin >> value;
			vet.push_back(value);
		}
			grid.push_back(vet);
	}
	int result = maxProductPath(grid);
	cout << result << endl;
	return 0;
}
