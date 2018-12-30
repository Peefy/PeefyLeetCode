
#ifndef __UNCOMMON_FROM_SENTENCES_H
#define __UNCOMMON_FROM_SENTENCES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    vector<string> split(const string &str, const string &delim){
        vector<string> res;
        if ("" == str)
            return res;
        char *strs = new char[str.length() + 1];
        strcpy(strs, str.c_str());
        char *d = new char[delim.length() + 1];
        strcpy(d, delim.c_str());
        char *p = strtok(strs, d);
        while (p){
            string s = p;
            res.push_back(s);
            p = strtok(NULL, d);
        }
        return res;
    }

    vector<string> uncommonFromSentences(string A, string B){
        unordered_map<string, int> hash;
        vector<string> r;
        auto Astrlist = split(A, " ");
        auto Bstrlist = split(B, " ");
        for (auto s : Astrlist) {
            hash[s] += 1;
        }
        for (auto s : Bstrlist) {
            hash[s] += 1;
        }
        for (auto kv : hash) {
            if (kv.second == 1) {
                r.push_back(kv.first);
            }
        }
        return r;
    }
};

#endif
