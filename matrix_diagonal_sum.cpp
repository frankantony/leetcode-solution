#include<iostream>
#include<vector>
#include<map>

using namespace std;

int diagonalSum(vector<vector<int> >& mat) {
	int sum_main = 0, n = mat.size();
        
	for (int i = 0; i < n; i++)
		sum_main += mat[i][i];
        
	int j = n-1, i = 0, sum_secundary = 0;
	while (j >= 0) {
		if (j != i)
			sum_secundary +=  mat[i][j];
		i++;
		j--;
	}
        
	return sum_secundary + sum_main;
}


int main () {
	vector<vector<int> > matrix;
	int value, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> line;
		for (int j = 0; j < n; j++) {
			cin >> value;
			line.push_back(value);
		}
		matrix.push_back (line);
	}
	
	cout << diagonalSum (matrix) << endl;

	return 0;
}

