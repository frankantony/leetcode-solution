#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool verify_square (int line1, int line2, int column1, int column2, vector<vector<char> >& board) {
	map <char, bool> square;
	for (int i = line1; i <= line2; i++) {
		for (int j = column1; j <= column2; j++) {
			if (board[i][j] != '.') {
				if (square[board[i][j]]) return false;
				else square[board[i][j]] = true;
            }
		}
	}
        return true;
}
    
bool verify (vector<vector<char> >& board, int option) {
	int line = board.size(), column = board[0].size();
    
	for (int i = 0; i < line; i++) {
		map <char, bool> exists;
		for (int j = 0; j < column; j++) {
			char ch;
			if (option == 0)
				ch = board[i][j];
			else
				ch = board[j][i];
                
			if (ch != '.')
				if (exists[ch])
					return false;
				else 
					exists[ch] = true;
		}
	}

	return true;
}
    
bool isValidSudoku (vector<vector<char> >& board) {
	int l = board.size(), c = board[0].size();
        
	bool square1 = verify_square (0, 2, 0, 2, board), square2 = verify_square (3, 5, 0, 2, board), square3 = verify_square (6, 8, 0, 2, board);
	bool square4 = verify_square (0, 2, 3, 5, board), square5 = verify_square (3, 5, 3, 5, board), square6 = verify_square (6, 8, 3, 5, board);
	bool square7 = verify_square (0, 2, 6, 8, board), square8 = verify_square (3, 5, 6, 8, board) , square9 = verify_square (6, 8, 6, 8, board);
	
	return square1 && square2 && square3 && square4 && square5 
			&& square6 && square7 && square8 && square9 
			&& verify (board, 0) && verify (board, 1);
}

int main () {
	vector<vector<char> > board;
	char value;
	for (int i = 0; i < 9; i++) {
		vector<char> line;
		for (int j = 0; j < 9; j++) {
			cin >> value;
			line.push_back(value);
		}
		board.push_back (line);
	}
	
	cout << isValidSudoku (board) << endl;

	return 0;
}

