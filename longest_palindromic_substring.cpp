#include<iostream>

using namespace std;

int main() {

	string s;
	cin >> s;
	int len = s.size();	
	bool table[len][len];
	
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			table[i][j] = false;

	int contMax = 1, begin = 0;
	for (int i = 0; i < len; i++)
		table[i][i] = true;
	
	for (int i = 0; i < len-1; i++) {
		if (s[i] == s[i+1]) {
			table[i][i+1] = true;
			contMax = 2;
			begin = i;
		}
	}

	for (int k = 3; k <= len; k++) {
		for (int i = 0; i < len - k + 1; i++) {
			int j = i + k - 1;
			if (table[i+1][j-1] && s[i] == s[j]) {
				table[i][j] = true;
				if (k > contMax) {
					begin = i;
					contMax = k;
				}
			}
		}
	}

	for (int i = begin; i < begin + contMax; i++)
		cout << s[i];
	cout << endl;

	return 0;
}


