#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int brokenCalc(int startValue, int target) {
	if (startValue >= target) return startValue - target;

	else if (target % 2 == 0)
		return brokenCalc (startValue, target / 2) + 1;
	return brokenCalc (startValue, target + 1) + 1;
}


int main () {
	int startValue, target;
	cin >> startValue >> target;
	int result = brokenCalc (startValue, target);

	cout << result << endl;
	
	return 0;
}

