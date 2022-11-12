#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	vector<int> result;
	string aux = "";
        
	int len = digits.size();
	int first_sum = digits[len-1] + 1;
	result.push_back(first_sum % 10);
         
	int go_one = first_sum / 10;
        
	for (int i = len-2; i >= 0; i--) {
		int sum = digits[i] + go_one;
		if (sum == 10) {
			result.push_back(0);
			go_one = 1;
		}
		else {
			result.push_back(sum);
			go_one = 0;
		}
	}
        
	if (go_one == 1)
		result.push_back(1);
        
	reverse(result.begin(), result.end());
	return result;
}


int main () {
	int value, n;
	cin >> n;
	vector<int> digits;
	for (int j = 0; j < n; j++) {
		cin >> value;
		digits.push_back(value);
	}
	vector <int> result = plusOne (digits);
	for (int i = 0;i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;

	return 0;
}
