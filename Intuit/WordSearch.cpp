// https://practice.geeksforgeeks.org/problems/word-search/
bool DFS(vector<vector<char>> &board, string word, int i, int j, int k)
{
    // if all the alphabets in word string are checked
    if (k == word.size())
        return true;
    // if i and j are ut of bound
    if (i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[k])
        return false;
    // mark as visited
    board[i][j] = '0';
    // branch out in all 4 directions
    bool status = DFS(board, word, i + 1, j, k + 1) || DFS(board, word, i - 1, j, k + 1) || DFS(board, word, i, j + 1, k + 1) || DFS(board, word, i, j - 1, k + 1);
    // change the character for other searches
    board[i][j] = word[k];
    return status;
}

bool isWordExist(vector<vector<char>> &board, string word)
{
    for (int i = 0; i < board.size(); i++)
        for (int j = 0; j < board[i].size(); j++)
            if (board[i][j] == word[0] && DFS(board, word, i, j, 0))
                return true;
    return false;
}