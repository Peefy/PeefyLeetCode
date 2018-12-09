
#ifndef __DOMINANT_INDEX_H
#define __DOMINANT_INDEX_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    long primes[27] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103};
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        long pro = getProduct(licensePlate);
        string res = "aaaaaaaaaaaaaaaaaaaaaaaaa";
        for (string word : words){
            if(word.length() < res.length() && (getProduct(word) % pro == 0)){
                res = word;
            }
        }
        return res;
    }

    long getProduct(string str){
        long res = 1L;
        for (char ch : str){
            int index = ch - 'a';

            if(index >=0 && index <= 25){
                res *= primes[index];
            }
            else if(index >= -32 && index <= -7){
                res *= primes[32 + index];
            }
        }
        return res;
    }
};

#endif
