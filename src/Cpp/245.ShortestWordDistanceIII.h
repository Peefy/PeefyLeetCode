
#ifndef __SHORTEST_WORD_DISTANCE_III_H
#define __SHORTEST_WORD_DISTANCE_III_H

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
    int shortestWordDistance(vector<string> words, string word1, string word2) {
        int res = words.size();
        int a = -1;
        int b = -1;
        for(int i = 0; i < words.size(); i++){
            if(words[i] == word1){
                a = i;
            }
            if(words[i] == word2){
                if(word1 == word2){
                    a = b;
                }
                b = i;
            }
            if(a != -1 && b != -1){
                res = min(res, abs(a - b));
            }
        }
        return res;
    }
};

#endif
