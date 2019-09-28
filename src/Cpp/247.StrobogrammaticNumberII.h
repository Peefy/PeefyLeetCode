
#ifndef __STROBOGRAMMATIC_NUMBER_II_H
#define __STROBOGRAMMATIC_NUMBER_II_H

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


class Solution {
public:
    vecotr<string> findStrobogrammatic(int n) {
        unordered_map<char, char> diffMap;
        diffMap['6'] = '9';
        diffMap['9'] = '6';
        vector<char> selfArr = { '0', '1', '8' };
        vector<string> result;
        vector<char> cache(n, '0');
        buildResult(0, n, cache, selfArr, diffMap, result);
        return result;
    }

    void buildResult(int curPos, int n, vector<char>& cache, vector<char>& selfArr, 
        unordered_map<char, char>& diffMap, vecotr<string>& result) {
        if (curPos < (n + 1) / 2) {
            for (char c : selfArr) {
                if (curPos == 0 && c == '0' && n != 1)
                    continue;
                cache[curPos] = cache[n - 1 - curPos] = c;
                buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
            }
            if (n % 2 == 0 || curPos != n / 2) {
                for (auto kv : diffMap) {
                    auto c = kv.first;
                    cache[curPos] = c;
                    cache[n - 1 - curPos] = diffMap[c];
                    buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
                }
            }
        } else if (n != 0) {
            result.add(string(cache));
        }
    }
};

#endif
