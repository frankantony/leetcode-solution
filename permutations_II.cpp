#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

void swap (int i, int j, vector<int>& nums) {
	int aux  = nums[i];
	nums[i] = nums[j];
	nums[j] = aux;
}
    
void solve (int i, vector<int>& nums, map<vector<int>, bool>& table) {
	if (i == nums.size()) {
		if (!table[nums])
			table[nums] = true;
		return;
	}
        
	for (int j = i; j < nums.size(); j++) {
            
		swap(i, j, nums);
            
		solve (i + 1, nums, table);
              
		swap(i, j, nums);
	}
}

vector<vector<int> > permuteUnique(vector<int>& nums) {
	map<vector<int>, bool > table;
        
	solve (0, nums, table);
        
	vector<vector<int> > result;
        
	for (map<vector<int>, bool>::iterator m = table.begin(); m != table.end(); ++m)
		result.push_back(m -> first);
            
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
	
	vector<vector<int> > result = permuteUnique (nums);

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
