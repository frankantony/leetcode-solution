#include<iostream>
#include<vector>
#include<map>

using namespace std;

int lengthOfLongestSubstring (string s) {
	int len = s.size(), result = 0, i = 0, j = 0;
	map<char, int> table;
	while (j < len) {
		if (table[s[j]])
			i = max (i, table[s[j]]);
            
		result = max (result, j - i + 1);
		table[s[j]] = j + 1;
		j++;
	}
        
	return result;
}


int main () {
	string s;
	cin >> s;
	int result = lengthOfLongestSubstring (s);
	cout << result << endl;
	return 0;
}
