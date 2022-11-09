#include<iostream>
#include<vector>

using namespace std;

bool canReach (vector<int>& arr, int len, int start) {
	if (start < 0 || start >= len || arr[start] == -1) return false;
	if (arr[start] == 0) return true;
        
	int jump = arr[start];
	arr[start] = -1;
        
	return canReach (arr, len, start + jump) || canReach (arr, len, start - jump);
        
}
    
bool canReach(vector<int>& arr, int start) {
	int len = arr.size();
	return canReach(arr, len, start);
}

int main () {
	int n, value;
	vector<int> vet;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}
	int start;
	cin >> start;
	
	if (canReach (vet, start))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
