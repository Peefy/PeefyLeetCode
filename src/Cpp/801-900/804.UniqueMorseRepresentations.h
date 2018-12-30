
#ifndef __UNIQUE_MORSE_REPRESENTATION_H
#define __UNIQUE_MORSE_REPRESENTATION_H

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
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> morsewords;
        for(string word : words){
            string l = "";
            for (char c : word)
                l += morse[c - 'a'];
            morsewords.insert(l);
        }
        return morsewords.size();
    }
};

#endif

