#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int len = nums.size(), a = 0;
	for (int i = 0;i < len; i++)
		if (nums[i] != 0)
			nums[a++] = nums[i];

	for (int i = a; i < len; i++)
		nums[i] = 0;
}

int main () {
	int n, m, value;
	cin >> n;
	vector<int> vet;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	moveZeroes (vet);
	for (int i = 0; i < n; i++)
		cout << vet[i] << " ";
	cout << endl;

	return 0;
}

