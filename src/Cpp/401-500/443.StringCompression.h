
#ifndef __STRING_COMPRESSION_H
#define __STRING_COMPRESSION_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
int compress(vector<char>& chars) {
    int i = 0, j = 0, n = chars.size();
	while (j < n) {
		if (j == n - 1 || chars[j] != chars[j + 1]) {
			chars[i++] = chars[j++];
		} else {
			chars[i++] = chars[j];
            int k = j;
        	while (j < n && chars[j] == chars[k]) j++;
            	string s = to_string(j - k);
            for (char c : s) chars[i++] = c;
        }
    }
    return i;
}
};

#endif
