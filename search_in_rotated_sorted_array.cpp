#include<iostream>
#include<vector>
#include<map>

using namespace std;

int search (int i, int j, vector<int>& nums, int target) {
	int mid = (i+j) / 2;
	if (i > j) return -1;
	if (nums[mid] == target) return mid;
	else if (nums[mid] < target) return search (mid+1, j, nums, target);
	return search (i, mid-1, nums, target);
}
    
int search (vector<int>& nums, int target) {
	int len = nums.size(), i = 0, index;
        
	while (i < len-1) {
		if (nums[i] > nums[i+1]) {
			index = i;
			break;
		}
		i++;
	}
                
	int left = search (0, index, nums, target);
	int right = search (index + 1, len - 1, nums, target);
        
	if (left != -1)
		return left;
	else if (right != -1)
		return right;
	return -1;
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
	cout << search (vet, target) << endl;

	return 0;
}
