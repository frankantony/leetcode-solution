class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int len = moves.size();
        string matrix[3][3];
        for (int i = 0; i < len; i++) {
            int row = moves[i][0];
            int col = moves[i][1];
            if (i % 2 == 0)
                matrix[row][col] = "A";
            else
                matrix[row][col] = "B";
        }
        int line, column, diagonal, secondary;
        for (int i = 0; i < 3; i++) {
            line = 0;
            column = 0;
            diagonal = 0;
            secondary = 0;
            for (int j = 0; j < 2; j++) {
                if (matrix[i][j] == matrix[i][j+1] && matrix[i][j] != "")
                    line++;
                if (matrix[j][i] == matrix[j+1][i] && matrix[j][i] != "")
                    column++;
                if (matrix[j][j] == matrix[j+1][j+1] && matrix[j][j] != "")
                    diagonal++;
                if (matrix[j][3-j-1] == matrix[j+1][1-j] && matrix[j+1][1-j] != "")
                    secondary++;
            }
            if (line == 2 || diagonal == 2)
                return matrix[i][0];
            else if (column == 2)
                return matrix[0][i];
            else if (secondary == 2)
                return matrix[0][2];
        }
        if (len != 9)
            return "Pending";
        else
            return "Draw";
    }
};
