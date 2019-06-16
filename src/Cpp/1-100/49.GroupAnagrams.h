
#ifndef __GROUP_ANAGRAMS_H
#define __GROUP_ANAGRAMS_H

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

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> hash;
        vector<vector<string>> ans;
        int count = 0;
        for (auto s : strs){
            auto tmp = s;
            sort(s.begin(), s.end());
            if (hash.find(s) == hash.end()){
                hash[s] = count;
                count += 1;
                ans.push_back(vector<string>{tmp});
            }
            else
                ans[hash[s]].push_back(tmp);
        }
        return ans;
    }
};

#endif
