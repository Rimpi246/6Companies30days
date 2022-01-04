// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
vector<vector<string>> Anagrams(vector<string> &string_list)
{
    map<string, vector<string>> M;
    for (auto i : string_list)
    {
        string s = i;
        sort(s.begin(), s.end());
        M[s].push_back(i);
    }
    vector<vector<string>> ans;
    for (auto i : M)
    {
        ans.push_back(i.second);
    }
    return ans;
}