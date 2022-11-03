#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int len = nums.size(), removed = 0, cont = 1;
        
	nums.push_back(30000);
	for (int i = 0; i < len; i++) {
		if (nums[i] == nums[i+1])
			cont++;
		else {
			if(cont > 2) {
				int j = i;
				while (cont > 2) {
					nums.erase(nums.begin() + j);
					j--;
					removed++;
					cont--;
				}
				i = j;
			}
				cont = 1;
		}
	}    
        return len-removed;
}

int main () {
	int n, value;
	cin >> n;
	vector<int> vet;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	int k = removeDuplicates(vet);
	for (int i = 0;i < k;i++)
		cout << vet[i] << " ";
	cout << endl;

	return 0;
}

