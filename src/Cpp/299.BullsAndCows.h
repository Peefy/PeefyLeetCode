
#ifndef __BULLS_AND_COWS_H
#define __BULLS_AND_COWS_H

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
public:
    string getHint(string secret, string guess) {
		int a = 0, b = 0;
		int s[10] = {0};
		int g[10] = {0};
		for (int i = 0; i < secret.length(); i++) {
			s[secret[i] - '0']++;
			g[guess[i] - '0']++;
			a += secret[i] == guess[i] ? 1 : 0;
		}
		for (int i = 0; i < 10; i++) 
			b += min(s[i], g[i]);
		return to_string(a) + "A" + to_string(b - a) + "B";
    }
};

#endif
