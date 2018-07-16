
#ifndef __COUNT_PRIMES_H
#define __COUNT_PRIMES_H

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

class Solution
{
  public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        const bool exist = true;
        const bool not_exist = false;

        unsigned count = n - 1; //假设全部是素数

        bool *A = new bool[n + 1];
        memset(A, exist, sizeof(bool) * (n + 1));

        for (int p = 2; p * p <= n; p++)
        {
            if (A[p] == exist)
            {
                int j = p * p;
                while (j <= n)
                {
                    if (A[j] == exist) //只有没被去除，才做去除操作。避免重复统计
                    {
                        A[j] = not_exist;
                        count--; //减少1个
                    }
                    j += p;
                }
            }
        }
        delete[] A;
        int div = n / 2;
        for (int i = 2; i <= div; ++i)
            if (n % i == 0)
                return count;

        return count - 1;
    }
};

#endif
