
#ifndef __RANDOM_NOTE_H
#define __RANDOM_NOTE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

int guess(int num);

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = {0};
		for(auto c : magazine){
			record[c - 'a']++;
		}
		for(auto c : ransomNote){
			if(--record[c - 'a'] < 0) return false;
		}
		return true;
    }
};

#endif
