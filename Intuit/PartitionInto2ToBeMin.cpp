// https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/
#include <bits/stdc++.h>
using namespace std;

int helper(int arr[], int i, int sumCalculated, int sumTotal)
{
    if (i == 0)
        return abs((sumTotal - sumCalculated) - sumCalculated);
    return min(helper(arr, i - 1, sumCalculated + arr[i], sumTotal), helper(arr, i - 1, sumCalculated, sumTotal));
}

int solve(int n, int arr[])
{
    int sumTotal = 0;
    for (int i = 0; i < n; i++)
        sumTotal += arr[i];
    return helper(arr, n, 0, sumTotal);
}

int main()
{
    int arr[] = {3, 1, 4, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solve(n, arr);

    return 0;
}
