#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int len = nums.size(), a = 0;
	for (int i = 0;i < len; i++)
		if (nums[i] != 0)
			nums[a++] = nums[i];

	for (int i = a; i < len; i++)
		nums[i] = 0;
}

vector<int> applyOperations(vector<int>& nums) {
	int len = nums.size();
	for (int i = 0; i < len-1; i++) {
		if (nums[i] == nums[i+1]) {
			nums[i] = nums[i] * 2;
			nums[i+1] = 0;
		}
	}
	moveZeroes(nums);
	return nums;
}


int main () {
	int n, m, value;
	cin >> n;
	vector<int> vet;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	vector<int> result = applyOperations (vet);
	for (int i = 0; i < n; i++)
		cout << result[i] << " ";
	cout << endl;

	return 0;
}

