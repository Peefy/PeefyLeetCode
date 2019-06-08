
#ifndef __MINIMUM_PATH_SUM_H
#define __MINIMUM_PATH_SUM_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution
{
public:
    void split(string s, char delim, vector<string> &nodes)
    {
        string temp;
        stringstream ss(s);
        while (getline(ss, temp, delim))
        {
            nodes.push_back(temp);
        }
    }
    string simplifyPath(string path)
    {
        vector<string> st;
        vector<string> nodes;
        string result;
        split(path, '/', nodes);
        for (auto node : nodes)
        {
            if (node == "" || node == ".")
                continue;
            if (node == ".." && !st.empty())
                st.pop_back();
            else if (node != "..")
                st.push_back(node);
        }
        for (auto it : st)
            result += "/" + it;
        return result.empty() ? "/" : result;
    }
};

#endif
