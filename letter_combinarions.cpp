#include<iostream>
#include<vector>
#include<map>

using namespace std;

void solve (int i, string digits, vector <string>& answer,  map<char, string>& table, string back) {
	if (i == digits.size()) {
		answer.push_back (back);
		return;
	}
        
	string st = table[digits[i]];
	for (int j = 0; j < st.size(); j++) {
		back += st[j];
		solve (i + 1, digits, answer, table, back);
		back.pop_back();

	}            
}
    
vector<string> letterCombinations(string digits) {
	vector<string> answer;
	map<char, string> table;
	string back = "";
	table['2'] = "abc";
	table['3'] = "def";
	table['4'] = "ghi";
	table['5'] = "jkl";
	table['6'] = "mno";
	table['7'] = "pqrs";
	table['8'] = "tuv";
	table['9'] = "wxyz";
        
	solve (0, digits, answer, table, back);
        
	return answer;
}

int main() {
	string digits;
	cin >> digits;
	vector <string> result = letterCombinations (digits);
	cout << "[" << result[0];
	for (int i = 1; i < result.size(); i++)
		cout << ", " << result[i];
	cout << "]" << endl;
    return 0;
}

