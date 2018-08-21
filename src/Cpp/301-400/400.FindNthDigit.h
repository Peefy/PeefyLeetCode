
#ifndef __FIND_THE_DIFFERENCE_H
#define __FIND_THE_DIFFERENCE_H

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
    int findNthDigit(int n) {
        long x = 9;
		int start = 1;
		int xN = 1;
		while (n > x * xN) {
			n -= x * xN;
			x *= 10;
			start *= 10;
			xN++;
		}
		if (start == 1) {
			return n;
		} else {
			int index = n % xN;
			int theInt = start + n / xN + (index == 0 ? -1 : 0);
			index = index == 0 ? xN - 1 : index-1;
			return to_string(theInt)[index] - '0';
		}
    }
};

#endif
