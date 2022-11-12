#include<iostream>

using namespace std;

int strStr(string haystack, string needle) {
	int len_haystack = haystack.size(), len_needle = needle.size(), count, index;
	for (int i = 0; i <= len_haystack - len_needle; i++) {
		count = 0;
		index = i;
		for (int j = 0; j < len_needle; j++) {
			if (haystack[index] != needle[j])
				break;
			else
				count++;
			index++;
		}
		if (count == len_needle) return i;
	}
        return -1;
}


int main() {

	string haystack, needle;
	cin >> haystack >> needle;
	cout << strStr(haystack, needle) << endl;

	return 0;
}


