#include<iostream>
#include<vector>
#include<map>

using namespace std;

int lenLongestFibSubseq(vector<int>& arr) {
	map<int, int> table;
	int len = arr.size();
	int dp[len][len];
	for (int i = 0; i < len; i++) 
		for (int j = 0; j < len; j++)
			dp[i][j] = 2;
        
	int result = 0;
	for (int j = 0; j < len; j++) {
		table[arr[j]] = j;
		for (int i = 0; i < j; i++) {
			int diff = arr[j] - arr[i]; 
                
			if (table.count(diff) && table[diff] < i) {
				int k = table[diff];
				dp[i][j] = max(dp[i][j], dp[k][i] + 1);
			}
                
			result = max (result, dp[i][j]);
		}
	}
        
	return result >= 3 ? result : 0;
}


int main() {
	int n, value;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		arr.push_back(value);
	}

	int result = lenLongestFibSubseq (arr);
	cout << result << endl;
	return 0;
}


