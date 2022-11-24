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

string multiply(string num1, string num2) {
	int len1 = num1.size(), len2 = num2.size();
	string numberZeroes = "", result = "";
	for (int i = len1 - 1; i >= 0; i--) {
		int value = num1[i] - '0', carry = 0;
		string portion = "";
		for (int j = len2 - 1; j >= 0 || carry != 0; j--) {
			int a = (j >= 0) ? num2[j] - '0': 0;
			int prod = (a * value) + carry;
			carry = prod / 10;
			portion += (prod % 10) + '0';
		}
            
		reverse(portion.begin(), portion.end());
		portion = portion + numberZeroes;
		numberZeroes += "0";
		result = addStrings (result, portion);
	}
        
	for (int i = 0; i < result.size(); i++)
		if (result[i] != '0')
			return result;
        
	return "0";
}


int main () {
	string num1, num2;
	cin >> num1 >> num2;
	string result = multiply (num1, num2);
	cout << result << endl;
	return 0;
}
