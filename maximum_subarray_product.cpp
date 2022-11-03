#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxProduct(vector<int>& nums) {
	int result = INT_MIN, len = nums.size();
	int prod = 1;
	for (int i = 0; i < len; i++) {
		prod *= nums[i];
		if (prod > result)
			result = prod;
		if (prod == 0)
			prod = 1;
	}
        
	prod = 1;
	for (int i = len-1; i >= 0; i--) {
		prod *= nums[i];
		if (prod > result)
			result = prod;
            
		if (prod == 0)
			prod = 1;
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

	cout << maxProduct (vet) << endl;

	return 0;
}
