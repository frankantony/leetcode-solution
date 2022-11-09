#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool checkValid (vector<vector<int> >& matrix) {
	int len = matrix.size();
	for (int i = 0; i < len; i++) {
		map<int, bool> line, column;
		for (int j = 0; j < len; j++) {
			int a = matrix[i][j], b = matrix[j][i];
			if (line[a])
				return false;
			else
				line[a] = true;
                
			if (column[b])
				return false;
			else
				column[b] = true;
		}
	}
	return true;
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
	
	cout << checkValid (matrix) << endl;

	return 0;
}

