#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int min (int a, int b, int c) {
	if (a <= b && a <= c) return a;
	else if (b <= c && b <= a) return b;
	return c;        
}
    
int maximalSquare(vector<vector<char> >& matrix) {
	int m = matrix.size(), n = matrix[0].size();
        
	int dp[m+1][n+1];
        
	for (int i = 0; i <= m; i++)
		for (int j = 0; j <= n; j++)
			dp[i][j] = 0;
        
	int max_side = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == '1') {
				dp[i + 1][j + 1] = min (dp[i][j + 1], dp[i][j], dp[i + 1][j]) + 1;
				max_side = max (max_side, dp[i + 1][j + 1]);
			}
		}
	}    
	return max_side * max_side;
}

int main () {
	int m, n;
	char value;
	vector<vector<char> > matrix;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		vector<char> vet;
		for (int j = 0; j < n; j++) {
			cin >> value;
			vet.push_back(value);
		}
		matrix.push_back(vet);
	}
	
	cout << maximalSquare (matrix) << endl;

	return 0;
}
