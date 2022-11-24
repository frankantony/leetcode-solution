#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string addStrings(string num1, string num2) {
	int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
	string result = "";
	while (i >= 0 || j >= 0 || carry != 0) {
		int a = (i >= 0) ? num1[i] - '0' : 0;
		int b = (j >= 0) ? num2[j] - '0': 0;
		int sum = a + b + carry;
		result += (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
	}
        
	reverse(result.begin(), result.end());
	return result;
}


int main () {
	string num1, num2;
	cin >> num1 >> num2;
	string result = addStrings(num1, num2);
	cout << result << endl;
	return 0;
}
