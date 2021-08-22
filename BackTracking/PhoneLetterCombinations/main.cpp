// to find letter combinations of a phone number

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> res;
unordered_map<char, string> mp;

void combinations(string &digits, string r, int idx)
{
    if (idx == digits.length())
    {
        res.push_back(r);
        return;
    }
    for (int i = 0; i < mp[digits[idx]].size(); i++)
    {
        r.push_back(mp[digits[idx]][i]);
        combinations(digits, r, idx + 1);
        r.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    if (digits.length() == 0)
        return res;

    mp['0'] = "";
    mp['1'] = "";
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";

    string r = "";
    combinations(digits, r, 0);
    return res;
}

int main()
{
    string digits = "23";
    vector<string> res = letterCombinations(digits);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
    return 0;
}
