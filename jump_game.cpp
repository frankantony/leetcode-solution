#include<iostream>
#include<vector>

using namespace std;

bool canJump (int i, int len, vector<int>& nums, vector<int>& memorization) {
	if (i == len - 1) return true;
	if (memorization[i] != -1) return memorization[i];

	int jump = nums[i];
	for (int k = 1; k <= jump; k++)
		if (canJump (i + k, len, nums, memorization))
			return memorization[i] = true;

	return memorization[i] = false;
}

bool canJump(vector<int>& nums) {
	int len = nums.size();
	vector<int> memorization (len, -1);

	return canJump (0, len, nums, memorization);
}

int main () {
	int n, value;
	vector<int> nums;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		nums.push_back(value);
	}
	
	cout << canJump (nums) << endl;

	return 0;
}
