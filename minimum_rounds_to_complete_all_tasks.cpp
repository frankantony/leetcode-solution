#include<iostream>
#include<vector>
#include<map>

using namespace std;

int minimumRounds(vector<int>& tasks) {
	map<int, int> mapa;
	int len = tasks.size();
    
	for (int i = 0; i < len; i++) {
		mapa[tasks[i]] = mapa[tasks[i]] + 1;
	}
        
	int result = 0;
	for (map<int, int>::iterator it = mapa.begin(); it != mapa.end(); it++) {
		int value = it -> second;
		if (value < 2) return -1;
            
		if (value % 3 == 0)
			result += value / 3;
		else
			result += (value / 3) + 1;
	}    
	return result;   
}


int main () {
	int n, value;
	vector<int> vet;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		vet.push_back(value);
	}

	cout << minimumRounds (vet) << endl;

	return 0;
}
