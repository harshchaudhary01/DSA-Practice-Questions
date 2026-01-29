class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> un_set;

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                char c = board[row][col];
                if (c == '.') continue;

                string num(1, c);

                string rowKey = num + "r" + to_string(row);
                string colKey = num + "c" + to_string(col);
                string boxKey = num + "b" + to_string(row/3) + to_string(col/3);

                if (un_set.count(rowKey) || un_set.count(colKey) || un_set.count(boxKey))
                    return false;

                un_set.insert(rowKey);
                un_set.insert(colKey);
                un_set.insert(boxKey);
            }
        }
        return true;
    }
};
