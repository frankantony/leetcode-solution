#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve (int i, vector<int>& candidates, int target, vector<vector<int> >& answer, vector<int>& back) {
	if (target == 0) {
		answer.push_back(back);
		return;
	}
        
	for (int j = i; j < candidates.size() && target - candidates[j] >= 0; j++) {
		back.push_back(candidates[j]);
            
		solve (j , candidates, target - candidates[j], answer, back);
            
		back.pop_back();
	}
}
    
vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
	vector<vector<int> > answer;
	vector<int> back;
        
	sort(candidates.begin(), candidates.end());
        
	solve (0, candidates, target, answer, back);
	return answer;
}


int main () {
	int n, value, target;
	vector<int> candidates;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		candidates.push_back(value);
	}

	cin >> target;
	vector <vector <int> > result = combinationSum (candidates, target);
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
