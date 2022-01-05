// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/
long long squaresInChessBoard(long long N)
{
    // code here
    long long result = 0;
    for (long long i = 1; i <= N; i++)
    {
        result += i * i;
    }
    return result;
}