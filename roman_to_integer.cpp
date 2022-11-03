#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	map <char, int> table;

	table['I'] =  1;
	table['V'] =  5;
	table['X'] =  10;
	table['L'] =  50;
	table['C'] =  100;
	table['D'] = 500;
	table['M'] = 1000;
        
	string s;
	cin >> s;
	int len = s.size(), result = 0;
	for (int i = 0; i < len; i++) {
		if (table[s[i]] < table[s[i+1]])
			result += (table[s[i+1]] - table[s[i]]);
         else
         	result += table[s[i]];
	}

	cout << result << endl;
	return 0;
}


