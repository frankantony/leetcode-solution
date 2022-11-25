#include<iostream>

using namespace std;

string say (string st) {
	st += " ";
	int len = st.size(), cont = 1;
	string result = "";
	for (int i = 0; i < len-1; i++) {
		if (st[i] == st[i+1])
			cont++;
		else {
			result += (cont + '0');
			result += st[i];
			cont = 1;    
		}
	}
	return result;
}
    
string countAndSay(int n) {
	string current = "1";
	for (int i = 0; i < n-1; i++)
		current = say (current);

	return current;
}

int main () {
	int n;
	cin >> n;
	cout << countAndSay (n) << endl;
	return 0;
}
