#include<iostream>
#include<vector>

using namespace std;

int triangularSum(vector<int>& nums) {
	int len = nums.size(), result;
        
	for (int i = len-1; i >= 0; i--) {
		vector<int> vet;
		for (int j = 0; j < i; j++) {
			vet.push_back ((nums[j] + nums[j+1])  % 10);
         }
		nums = vet;
	}
	return nums[0];
}


int main () {
	int n;
	cin >> n;
	int value;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		cin >> value;
		nums.push_back(value);
	}

	int result = triangularSum(nums);
	cout << result << endl;

	return 0;
}
