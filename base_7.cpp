#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string convertToBase7 (int num) {
	string result = "";
	bool isNegative = false;
	if (num < 0) {
		isNegative = true;
		num = -num;
	}
        
	while (num != 0) {
		int v = num % 7;
		result += v + '0';
		num /= 7;
	}
        
	reverse(result.begin(), result.end());
        
	if (isNegative)
		return "-" + result;
	return result;
}


int main () {
	int num;
	cin >> num;
	cout << convertToBase7 (num) << endl;

	return 0;
}

