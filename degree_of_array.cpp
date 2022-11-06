#include<iostream>
#include<vector>
#include<climits>
#include<map>

using namespace std;

int findShortestSubArray(vector<int>& nums) {
        
	int len = nums.size();
	map <int, int> count, initial_index, final_index;
        
	int max_cont = INT_MIN;
	for (int i = 0; i < len; i++) {
		int value = nums[i];
		if (count[value] == 0) {
			initial_index[value] = i;
		}
            
		count[value] = count[value] + 1;
		final_index[value]= i;
            
		max_cont = max(max_cont, count[value]);
	}
        
	int m = INT_MAX;
	for(map<int, int>::iterator it = count.begin(); it != count.end(); it++) {
		int value = it->first;
		if (count[value] == max_cont)
			m = min(final_index[value] - initial_index[value] + 1, m);
	}
        
	return m;
}

int main () {
	int n, value;
	vector<int> vet;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	cout << findShortestSubArray (vet) << endl;

	return 0;
}
