#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int threeSumSmaller(vector<int>& nums, int target) {
	sort (nums.begin(), nums.end());
  	
	int len = nums.size(), left, right, result = 0;
	for (int i = 0; i < len - 2; i++) {
            
		left = i + 1;
		right = len - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum < target) {
				result += (right - left);
				left++;
			}
			else
				right--;
   		}
	}
        
	return result;
}


int main () {
	int n, value;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		cin >> value;
		nums.push_back(value);
	}

	int target;
	cin >> target;

	int result = threeSumSmaller (nums, target);
	cout << result << endl;

	return 0;
}

