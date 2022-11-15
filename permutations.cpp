#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve (int cont, vector<int>& nums, vector<vector<int> >& answer, vector<int>& back) {
	if (cont == nums.size()) {
		answer.push_back(back);
		return;
	}
        
	for (int i = 0; i < nums.size(); i++) {
		if (find(back.begin(), back.end(), nums[i]) != back.end())
			continue;
            
		back.push_back(nums[i]);
            
		solve (cont + 1, nums, answer, back);
              
		back.pop_back();
	}
}

vector<vector<int> > permute(vector<int>& nums) {
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

	vector <vector <int> > result = permute (nums);
	cout << "[";
	for (int i = 0; i < result.size(); i++) {
		cout << "[" << result[i][0];
		for (int j = 1; j < result[i].size(); j++) {
			cout << ", " << result[i][j] ;
		}
		cout << "] ";
	}
	cout << "]" << endl;

	return 0;
}
