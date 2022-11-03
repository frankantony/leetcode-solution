#include<iostream>
#include<vector>

using namespace std;

string addBinary (string a, string b) {
	int len_a = a.size(), len_b = b.size(), rest = 0;
	int i = len_a-1, j = len_b-1;
	string result = "";
        
	while (i >= 0 && j >= 0) {
		int value = (a[i] - '0') + (b[j] - '0') + rest;
		result += (value % 2) + '0';
		rest = value / 2;
		i--;
		j--;
	}
        
	while (i >= 0) {
		int value = (a[i] - '0') + rest;
		result += (value % 2) + '0';
		rest = value / 2;
		i--;
	}
        
	while(j >= 0) {
		int value = (b[j] - '0') + rest;
		result += (value % 2) + '0';
		rest = value / 2;    
		j--;
	}
        
	if (rest == 1)
		result += "1";

	string reverse = "";
	for (int i = result.size()-1; i >= 0; i--)
		reverse += result[i];
        
	return reverse;
}

int main() {
	int n, value;
	string a, b;
	cin >> a >> b;
	cout << addBinary (a, b) << endl;

	return 0;
}

