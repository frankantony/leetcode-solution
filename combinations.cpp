#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve (int i, int count, int k, int n, vector<vector<int> >& answer, vector<int>& back) {
	if (count == k) {
		answer.push_back(back);
		return;
	}
        
	while (i <= n) {
		back.push_back(i);
            
		i++;
		solve (i, count + 1, k, n, answer, back);    
            
		back.pop_back();
	}
}
    
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > answer;
        vector<int> back;
        
        solve (1, 0, k, n, answer, back);
        
        return answer;
    }


int main () {
	int n, k;
	cin >> n >> k;

	vector <vector <int> > result = combine (n, k);
	cout << "[";
	for (int i = 0; i < result.size(); i++) {
		cout << "[" << result[i][0];
		for (int j = 1; j < result[i].size(); j++) {
			cout << ", " << result[i][j] ;
		}
		cout << "] ";
	}
	cout << "]" << endl;

	return 0;
}
