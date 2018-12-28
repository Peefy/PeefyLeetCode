
#ifndef __NUM_SPECIAL_EQUIV_GROUPS_H
#define __NUM_SPECIAL_EQUIV_GROUPS_H

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

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> hash;
		for (int i = 0; i < A.size(); i++) {
			string ch = A[i];
		    int len2 = ch.length() / 2;
		    int len1 = ch.length() - len2;
		    vector<char> ch1(len1);
            vector<char> ch2(len2);
		    for (int i = 0; i + i < ch.length(); i++)
			    ch1[i] = ch[i + i];
		    for (int i = 0; i + i + 1 < ch.length(); i++)
			    ch2[i] = ch[i + i + 1];
		    sort(ch1.begin(), ch1.end());
		    sort(ch2.begin(), ch2.end());
			hash.insert(string(ch1.begin(), ch1.end()) + string(ch2.begin(), ch2.end()));
		}
		return hash.size();
    }
};

#endif
