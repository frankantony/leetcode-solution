#include<iostream>
#include<vector>

using namespace std;

int jump (int i, int len, vector<int>& nums, vector<int> memorization) {
	if (i >= len - 1) return 0;
        
	if (memorization[i] != -1) return memorization[i];
        
	int m = 10005;
	for (int k = 1; k <= nums[i]; k++) {
		m = min (m, 1 + jump (i + k, len, nums, memorization));
	}    
	return m;
}
    
int jump (vector<int>& nums) {
	int len = nums.size();
	vector<int> memorization(len, -1);
	return jump(0, len, nums, memorization);
}

int main () {
	int n, value;
	vector<int> vet;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}
	
	cout << jump (vet) << endl;

	return 0;
}
