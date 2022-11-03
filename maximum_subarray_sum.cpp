#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxSubArray(vector<int>& nums) {
	int result = INT_MIN, sum = 0;
        
	int len = nums.size();
	for (int i = 0; i < len; i++) {
		sum += nums[i];
		if (sum > result)
			result = sum;
		if (sum < 0)
			sum = 0;
	}    
        return result;
}

int main () {
	int n, value;
	vector<int> vet;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	cout << maxSubArray(vet) << endl;

	return 0;
}
