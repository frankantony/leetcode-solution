#include<iostream>
#include<vector>

using namespace std;

bool search (int n, int m, vector<vector<char> >& board, int i, int j, string word, int k) {
	if (k == word.size()) return true;
	if (i < 0 || j < 0 || i == n || j == m || word[k] != board[i][j]) return false;

	char c = board[i][j];
	board[i][j] = '*';
        
	bool alternative1 = search (n, m, board, i + 1, j, word, k + 1);
	bool alternative2 = search (n, m, board, i, j + 1, word, k + 1);
	bool alternative3 = search (n, m, board, i-1, j, word, k + 1);
	bool alternative4 = search (n, m, board, i, j-1, word, k + 1);
        
	board[i][j] = c;
        
	return alternative1 || alternative2 || alternative3 || alternative4;
}
    
bool exist(vector<vector<char> >& board, string word) {
	int n = board.size(), m = board[0].size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			if (search(n, m, board, i, j, word, 0))
				return true;
	}
	return false;
}

int main () {
	int n, m;
	cin >> n >> m;
	char value;
	vector<vector<char> > board;
	for (int i = 0; i < n; i++) {
		vector<char> vet;
		for (int j = 0; j < m; j++) {
			cin >> value;
			vet.push_back(value);
		}
			board.push_back(vet);
	}
	string word;
	cin >> word;
	if (exist (board, word))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
