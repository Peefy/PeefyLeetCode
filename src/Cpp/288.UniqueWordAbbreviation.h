
#ifndef __UNIQUE_WORD_ABBREVIATION_H
#define __UNIQUE_WORD_ABBREVIATION_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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

class Solution {
private:
    map<string, set<string>> abbrs;

    string abbr(string word) {
        if (word.length() <= 2)
            return word;
        stringstream ss;
        ss << word[0];
        ss << word.length() - 2;
        ss << word[word.length() - 1];
        return ss.str();
    }
public:
    Solution(vector<string> dictionary) {
        for (string word : dictionary) {
            string abbr = abbr(word);
            if (abbrs.find(abbr) == abbrs.end()) {
                set<string> words;
                abbrs[abbr] = words;
            }
            else
                abbrs[abbr].add(word);
        }
    }
 
    bool isUnique(string word) {
        if (abbrs.find(abbr(word)) == abbrs.end())
            return true;
        auto words = abbrs[abbr(word)];
        if (words.size() == 0)
            return true;
        if (words.size() == 1 && words.find(word) != words.end()) 
            return true;
        return false;
    }
};

#endif
