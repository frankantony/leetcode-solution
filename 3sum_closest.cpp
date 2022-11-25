#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
	sort (nums.begin(), nums.end());
        
	vector<vector<int> > result;
	int len = nums.size(), left, right;
	int closestSum = nums[0] + nums[1] + nums[2];
	for (int i = 0; i < len - 2; i++) {
            
		left = i + 1;
		right = len - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum > target)
				right--;
			else if (sum < target)
				left++;
			else
				return sum;
                
			if (abs (target - closestSum) > abs (target - sum))
				closestSum = sum;
		}
	}
        
	return closestSum;  
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
	int result = threeSumClosest (nums, target);
	cout << result << endl;

	return 0;
}

