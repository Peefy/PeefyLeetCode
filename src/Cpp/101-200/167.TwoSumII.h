
#ifndef __TWO_SUM_II_H
#define __TWO_SUM_II_H

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
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;
        while(left < right){
            if (numbers[left] + numbers[right] == target)
            {
                return vector<int>{left + 1, right + 1};
            }
            else if(numbers[left] + numbers[right] > target)
            {
                right -= 1;
            }
            else if (numbers[left] + numbers[right] < target)
            {
                left += 1;
            }
        }
        return vector<int>{};
    }
};

#endif
