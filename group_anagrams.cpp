#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<vector<string> > groupAnagrams(vector<string>& strs) {
	vector<vector<string> > result;
        
	map<string, vector<string> > mapa;
        
	vector<string> copy = strs;
	int len = copy.size();
        
	for (int i = 0; i < len; i++) {
		sort(copy[i].begin(), copy[i].end());
		mapa[copy[i]].push_back(strs[i]);
	}
        
	for(map<string, vector<string> >::iterator it = mapa.begin(); it != mapa.end(); ++it) {
		vector<string> v = it->second;
		result.push_back(v);
	}

	return result;
}

int main () {
	int n;
	cin >> n;
	string value;
	vector<string> strs;
	for (int j = 0; j < n; j++) {
		cin >> value;
		strs.push_back(value);
	}
	vector<vector<string> > result = groupAnagrams (strs);
	int len = result.size();
	cout << "[";
	for (int i = 0; i < len; i++) {
		cout << "[";
		for (int j = 0; j < result[i].size(); j++) {
			cout << result[i][j] << " ";
		}
		cout << "] ";
	}
	cout << "]" << endl;
	return 0;
}

