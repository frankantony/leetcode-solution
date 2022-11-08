#include<iostream>
#include<vector>
#include<string>

using namespace std;

string solve (string s,int k) {

	if (s.size() <= k) return s;

	int i = 0;
	string str = "";
	while(i < s.size()) {
		int sum = 0;
		int count = 0;
		while(i < s.size() && count < k) {
			sum += (s[i] - '0');
			count++;
			i++;
		}

		str += to_string(sum);
	}

	return solve (str, k);
}
    
string digitSum(string s, int k) {
	return solve(s, k);
}


int main () {
	string s;
	int k;
	cin >> s >> k;
	
	string result = digitSum (s,k);

	cout << result << endl;

	return 0;
}
