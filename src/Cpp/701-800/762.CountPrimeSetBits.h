
#ifndef __COUNT_PRIME_SET_BITS_H
#define __COUNT_PRIME_SET_BITS_H

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
    int countPrimeSetBits(int L, int R) {
        int _primes[21] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
        int count = 0;
        for (int i = L; i <= R; i++) {
            int bits = 0;
            for (int n = i; n > 0; n >>= 1)
                bits += n & 1;
            if (_primes[bits] == 1)
                count += 1;
        }
        return count;
    }
};

#endif
