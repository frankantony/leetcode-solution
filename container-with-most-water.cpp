#include<iostream>
#include<vector>

using namespace std;

int maxArea(vector<int> height) {
	int len = height.size();
	int l = 0, r = len-1;
	int max = 0;
	while (l <= r) {
		int aux = (r - l) * min(height[l], height[r]);
		if (max < aux)
			max = aux;
            
		if (height[l] <= height[r])
			l++;
		else
			r--;
	}

	return max;
}

int main() {
	int n, value;
	cin >> n;
	vector<int> height;
	for (int i = 0; i < n; i++) {
		cin >> value;
		height.push_back(value);
	}

	cout << maxArea (height) << endl;
	return 0;
}

