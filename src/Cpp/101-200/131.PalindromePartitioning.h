
#ifndef __PALINDROME_PARTITIONING_H
#ifndef __PALINDROME_PARTITIONING_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();

class Solution
{
public:
    vector<vector<string>> list;
    string s;
    vector<vector<string>> partition(string s)
    {
        this->s = s;
        vector<string> ll;
        dfs(ll, 0);
        return list;
    }

    void dfs(vector<string>& ll, int index)
    {
        if (index == s.length())
        {
            list.push_back(vector<string>(ll));
            return;
        }
        for (int i = index; i < s.length(); i++)
        {
            if (isPalindrome(index, i))
            {
                ll.push_back(s.substr(index, i + 1 - index));
                dfs(ll, i + 1);
                ll.pop_back();
            }
        }
    }

    bool isPalindrome(int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};

#endif
