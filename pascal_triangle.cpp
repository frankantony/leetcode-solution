#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > generate(int numRows) {
	vector<vector<int> > result;
        
	for (int i = 0; i < numRows; i++) {
		vector<int> aux;
		for (int j = 0; j < i+1; j++) {
			if (j == 0 || j == i)
				aux.push_back(1);
			else
				aux.push_back(result[i-1][j] + result[i-1][j-1]);
		}
		result.push_back(aux);
	}
	return result;
}

int main () {
	int numRows;
	cin >> numRows;

	vector<vector<int> > result = generate (numRows);
	cout << "[";
	for (int i = 0; i < result.size(); i++) {
		cout << "[" << result[i][0];
		for (int j = 1; j < result[i].size(); j++) {
			cout << ", " << result[i][j];
		}
		cout << "] ";
	}

	cout << "]" << endl;
	
	return 0;
}
