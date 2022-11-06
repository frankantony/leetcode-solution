#include<iostream>
#include<vector>
#include<climits>

using namespace std;

long solve (int i, int j, vector<vector<int> >& grid, int m, int n, vector<vector<int> >& memorization) {

	if (i == m || j == n) return INT_MAX;
	if (i == m-1 && j == n-1) return grid[i][j];

	if (memorization[i][j] != -1)
		return memorization[i][j];

	long alternative1 = grid[i][j] + solve (i + 1, j, grid, m, n, memorization);
	long alternative2 = grid[i][j] + solve (i, j + 1, grid, m, n, memorization);

	memorization[i][j] = min (alternative1, alternative2);
	return memorization[i][j];
}
    
int minPathSum(vector<vector<int> >& grid) {
	int m = grid.size(), n = grid[0].size();
	vector<vector<int> > memorization(m + 1 , vector<int>(n + 1, -1));

	long result =  solve(0, 0, grid, m, n, memorization);
	return result;
}


int main () {
	int m, n;
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

	int result = minPathSum (grid);
	cout << result << endl;
	return 0;
}
