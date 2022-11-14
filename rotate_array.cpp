#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
        
	int len = nums.size();
	k = k % len;
        
	vector<int> copy;
	for (int i = 0; i < len; i++)
		copy.push_back (nums[i]);
        
	int cont = 0;

	for (int i = len - k; i < len; i++)
		nums[cont++] = copy[i];

	for (int i = 0; i < len - k; i++)
		nums[cont++] = copy[i];

}


int main () {
	int n, k, value;
	cin >> n;
	vector<int> vet;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	cin >> k;
	rotate (vet, k);
	for (int i = 0; i < n; i++)
		cout << vet[i] << " ";
	cout << endl;

	return 0;
}

