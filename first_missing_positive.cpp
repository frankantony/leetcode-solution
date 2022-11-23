#include<iostream>
#include<vector>
#include<map>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
	int len = nums.size();
	long m = 0;
	map<int, bool> table;
        
	for (int i = 0; i < len; i++) {
		table[nums[i]] = true;
		if (m < nums[i])
			m = nums[i];
	}
        
	long result = 1;
	while (result <= m + 1 && table[result])
		result++;
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

	int result = firstMissingPositive(vet);
	cout << result << endl;

	return 0;
}

