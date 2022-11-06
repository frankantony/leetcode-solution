#include<iostream>
#include<vector>

using namespace std;

bool searchBinary (vector<int> vet, int target) {
	int i = 0, len = vet.size(), j = len - 1;
	while (i <= j) {
		int mid = (i+j) / 2;
		if (vet[mid] == target)
			return true;
		else if (vet[mid] < target)
			i = mid + 1;
		else
			j = mid - 1;
	}
	return false;
}

bool searchMatrix (vector<vector<int> >& matrix, int target) {
	int line = matrix.size(), column = matrix[0].size();
	vector<int> vet;
	for (int i = 0; i < line; i++) 
		for (int j = 0; j < column; j++)
			vet.push_back(matrix[i][j]);
        
	return searchBinary (vet, target);
}

int main () {
	int n, m;
	cin >> m >> n;
	int value;
	vector<vector<int> > matrix;
	for (int i = 0; i < m; i++) {
		vector<int> vet;
		for (int j = 0; j < n; j++) {
			cin >> value;
			vet.push_back(value);
		}
			matrix.push_back(vet);
	}

	int target;
	cin >> target;
	if (searchMatrix (matrix, target))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
