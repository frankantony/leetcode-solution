#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
	int len = nums.size();
	map<int, bool> table;
        
	for (int i = 0; i < len; i++)
		table[nums[i]] = true;
        
	long k = 1;
	vector<int> result;
	while (k <= len) {
		if (!table[k])
			result.push_back(k);
		k++;
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

	vector<int> result = findDisappearedNumbers(vet);
	for (int i = 0;i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;

	return 0;
}

