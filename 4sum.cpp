#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int> > fourSum(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int len = nums.size();
	vector <vector<int> > result;
	for (int i = 0; i < len - 3; i++) {
		if (i > 0 && nums[i] == nums[i - 1])
			continue;
            
		for (int j = i+1; j < len - 2; j++) {
			if (j > i+1 && nums[j] == nums[j - 1]) 
				continue;
                
			int left = j + 1;
			int right = len - 1;
			while (left < right) {
				long long sum = (long long) nums[i] + (long long) nums[j] + (long long) nums[left] + (long long) nums[right];
				if (sum < target)
					left++;
				else if (sum > target)
					right--;
				else {
					result.push_back({nums[i], nums[j], nums[left], nums[right]});
					int last_right = nums[right], last_left = nums[left];
					while (left < right && last_right == nums[right])
						right--;
                            
					while (left < right && last_left == nums[left])
						left++;                        
				}
			}
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

	vector<vector<int> > result = fourSum (nums, target);
	for (int i = 0; i < result.size(); i++) {
		cout << "[ " << result[i][0];
		for (int j = 1; j < result[i].size(); j++) {
			cout << ", " << result[i][j];
		}
		cout << "] ";
	}
	cout << endl;

	return 0;
}

