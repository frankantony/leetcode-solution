#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> mapa;
	int len = nums.size();
	for (int i = 0; i < len; i++)
		mapa[nums[i]] = i;
       
	vector<int> result;
	for (int i = 0; i < len; i++) {
		if (mapa[target-nums[i]] && i != mapa[target-nums[i]]) {
			result.push_back(i);
			result.push_back(mapa[target-nums[i]]);
			break;
		}
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
	int target;
	cin >> target;

	vector<int> result = twoSum (vet, target);
	for (int i = 0;i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
	
	return 0;
}
