#include<iostream>
#include<vector>

using namespace std;

bool canReach(int i, string s, int minJump, int maxJump) {
	if (memorization[i] != -1) return memorization[i];
	if (i == 0) return true;
        
	for (int j = minJump; j <= maxJump; j++) {
		if (i + j <= s.size()-1 && s[i+j] == '0')
			if (canReach(i + j, s, minJump, maxJump))
				return true;
	}
	return false;
}

bool canReach(string s, int minJump, int maxJump) {
	return canReach (0, s, minJump, maxJump);
}

int main () {
	string str;
	cin >> str;
	int minJump, maxJump;
	cin >> minJump >> maxJump;

	if (canReach(str, minJump, maxJump))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
