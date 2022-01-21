// https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/
bool canPair(vector<int> nums, int k)
{
    if (nums.size() % 2 != 0)
        return false;
    map<int, int> M;
    for (auto i : nums)
        M[i % k]++;
    if (M[0] % 2 != 0)
        return false;
    for (int i = 1; i < k; i++)
    {
        if (M[i] != M[k - i])
            return false;
    }
    return true;
}
// for handling negative test cases
// https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/
bool canArrange(vector<int> &arr, int k)
{
    if (arr.size() % 2 != 0)
        return false;
    map<int, int> M;
    for (auto i : arr)
        M[(i % k + k) % k]++;
    if (M[0] % 2 != 0)
        return false;
    for (int i = 1; i < k; i++)
    {
        if (M[i] != M[k - i])
            return false;
    }
    return true;
}