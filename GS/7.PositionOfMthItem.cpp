// https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/
int findPosition(int N, int M, int K)
{
    if (N == 1)
        return N;
    if (K + M <= N)
        return K + M - 1;
    return ((K + M - 1) % N == 0) ? N : (K + M - 1) % N;
}