#include<iostream>
#include<vector>

using namespace std;

int solve (int i, int j, vector<vector<int> >& triangle, vector<vector<int> >& memorization, int len) {
	if (i == len) return 0;
        
	if (memorization[i][j] != -1) return memorization[i][j];
        
	int left = triangle[i][j] + solve (i + 1, j, triangle, memorization, len);
	int right = triangle[i][j] + solve (i + 1, j + 1, triangle, memorization, len);
        
	memorization[i][j] = min(left, right);
        
	return memorization[i][j];
        
}

int minimumTotal(vector<vector<int> >& triangle) {
	int len = triangle.size();
        
	vector<vector<int> > memorization(len , vector<int>(len, -1));
        
	int result = solve (0, 0, triangle, memorization, len);
        
	return result;
    
}

int main () {
	int n, m, value;
	cin >> n;
	vector<vector<int> > vet;
	for (int i = 0; i < n; i++) {
		vector <int> v;
		for (int j = 0; j <= i; j++) {
			cin >> value;
			v.push_back(value);
		}
			vet.push_back(v);
	}

	int result = minimumTotal (vet);

	cout << result << endl;

	return 0;
}

