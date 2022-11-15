#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	nums.push_back(101);
	int a = 0, len = nums.size();
	for (int i = 0; i < len-1; i++) {
		if (nums[i] != nums[i+1])
			nums[a++] = nums[i];
	}
	return a;
}


int main () {
	int n, value;
	cin >> n;
	vector<int> vet;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	int k = removeDuplicates (vet);
	for (int i = 0; i < k; i++)
		cout << vet[i] << " ";
	cout << endl;
	return 0;
}

