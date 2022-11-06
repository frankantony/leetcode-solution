#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int len = nums.size();
	int i = 0, j = len-1;
	while(i <= j) {
		int mid = (i+j)/2;
		if (nums[mid] == target)
			return mid;
		else if (nums[mid] < target)
			i = mid+1;
		else
			j = mid-1;
	}
	return i;
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
	cout << searchInsert (vet, target) << endl;

	return 0;
}
