#include<iostream>

using namespace std;

void integer_to_roman (int n) {
	
	while (n >= 1000) {
		cout << "M";
		n -= 1000;
	}

	while (n >= 500) {
		if (n >= 900) {
			cout << "CM";
			n -= 900;
		} else {
			cout << "D";
			n -= 500;
		}
	}

	while (n >= 100) {
		if (n >= 400) {
			cout << "CD";
			n -= 400;
		} else {
			cout << "C";
			n -= 100;
		}
	}

	while (n >= 50) {
		if (n >= 90) {
			cout << "XC";
			n -= 90;
		} else {
			cout << "L";
			n -= 50;
		}
	}

	while (n >= 10) {
		if (n >= 40) {
			cout << "XL";
			n -= 40;
		} else {
			cout << "X";
			n -= 10;
		}
	}

	while (n >= 5) {
		if (n >= 9) {
			cout << "IX";
			n -= 9;
		} else {
			cout << "V";
			n -= 5;
		}
	}

	while (n >= 1) {
		if (n >= 4) {
			cout << "IV";
			n -= 4;
		} else {
			cout << "I";
			n -= 1;
		}
	}
	cout << endl;
}

int main() {
	int n, T;
	cin >> T;

	while (T) {
		cin >> n;
		integer_to_roman(n);		
		T--;
	}
    return 0;
}

