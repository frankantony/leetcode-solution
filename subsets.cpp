#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve (int i, vector<int>& nums, vector<vector<int> >& answer, vector<int>& back) {

	answer.push_back(back);

	while (i < nums.size()) {
		back.push_back(nums[i]);

		i++;
		solve (i, nums, answer, back);
		back.pop_back();
	}

}

vector<vector<int> > subsets(vector<int>& nums) {
	vector<vector<int> > answer;
	vector<int> back;

	solve (0, nums, answer, back);
	return answer;
}

int main () {
	int n, value;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		cin >> value;
		nums.push_back(value);
	}
	
	vector<vector<int> > result = subsets (nums);

	cout << "[" << "[] ";
	for (int i = 1; i < result.size(); i++) {
		cout << "[" << result[i][0];
		for (int j = 1; j < result[i].size(); j++) {
			cout << ", " << result[i][j] ;
		}
		cout << "] ";
	}
	cout << "]" << endl;

	return 0;
}
