#include<iostream>
#include<vector>

using namespace std;

vector<int> getRow (int rowIndex) {
	vector<vector<int> > result;

	for (int i = 0; i <= rowIndex; i++) {
		vector<int> aux;
		for (int j = 0; j < i+1; j++) {
			if (j == 0 || j == i)
				aux.push_back(1);
			else
				aux.push_back(result[i-1][j] + result[i-1][j-1]);
		}
		result.push_back(aux);
	}
	return result[rowIndex];
}

int main () {
	int rowIndex;
	cin >> rowIndex;

	vector<int> result = getRow (rowIndex);
	cout << "[" << result[0];
	for (int i = 1; i < result.size(); i++)
		cout << " " << result[i];
	cout << "]" << endl;
	
	return 0;
}
