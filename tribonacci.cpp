#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int tribonacci(int n) {
	int tri[n + 1];
	if (n == 0 || n == 1)
		return n;
	else if (n == 2)
		return 1;

	tri[0] = 0;
	tri[1] = 1;
	tri[2] = 1;
	for (int i = 3; i <= n; i++)
		tri[i] = tri[i-1] + tri[i-2] + tri[i-3];
    
	return tri[n];
}


int main () {
	int n, k;
	cin >> n;
	int result = tribonacci (n);
	cout << result << endl;

	return 0;
}
