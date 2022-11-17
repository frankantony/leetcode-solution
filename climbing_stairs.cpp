#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int climbStairs (int n) {
	if (n == 1 || n == 2)
		return n;
	int fib[n];
	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i < n; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	return fib[n-1];
}


int main () {
	int n, k;
	cin >> n;
	int result = climbStairs (n);
	cout << result << endl;

	return 0;
}
