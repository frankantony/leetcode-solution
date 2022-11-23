#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
	int len = nums.size();
	map<int, bool> table;
	vector<int> result;
	for (int i = 0; i < len; i++) {
		int value = nums[i];
		if (table[value])
			result.push_back(value);
            
		table[value] = true;
	}
	return result;
}


int main () {
	int n, value;
	cin >> n;
	vector<int> vet;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	vector<int> result = findDuplicates (vet);
	for (int i = 0;i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;

	return 0;
}

