#include<iostream>
#include<vector>
#include<climits>
#include <sstream>

using namespace std;

bool isNumber (string s) {
	for (int i = 0; i < s.size(); i++)
		if (s[i] < '0' || s[i] > '9')
			return false;
	return true;
}
    
bool areNumbersAscending (string s) {
	stringstream ss(s);
        
	vector<string> vet;
	while (getline(ss, s, ' '))
		vet.push_back(s);
        
	int previous = INT_MIN;
	for (int i = 0; i < vet.size(); i++) {
		string token = vet[i];
		if (isNumber (token)) {
			int number_current = stoi(token);
			if (number_current > previous)
            	previous = number_current;
			else
				return false;
		}
	}
        
	return true;
}


int main () {
	string st;
	cin >> st;
	if (areNumbersAscending(st))
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}
