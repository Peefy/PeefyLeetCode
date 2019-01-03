
#ifndef __RECORD_LOG_FILES_H
#define __RECORD_LOG_FILES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        unordered_map<string, string> table;
        vector<string> alphalogs;
        vector<string> digitlogs;
        for (string log : logs){
            int index = log.find_first_of(' ');
            string first = log.substr(0, index);
            string after = log.substr(index + 1, log.length() - index);
            if (isalpha(after[0])){
                alphalogs.push_back(after);
                table[after] = first + ' ';
            }
            else{
                digitlogs.push_back(log);
            }             
        }
        sort(alphalogs.begin(), alphalogs.end());
        for (string& s : alphalogs){
            s = table[s] + s;
        }
        alphalogs.insert(alphalogs.end(), digitlogs.begin(), digitlogs.end());
        return alphalogs;
    }
};

#endif

