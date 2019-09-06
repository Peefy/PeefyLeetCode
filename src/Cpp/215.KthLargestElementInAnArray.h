
#ifndef __KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H
#ifndef __KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
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
    int findKthLargest(vector<int>& nums, int k) {
        int low = 0, high = nums.size() - 1, mid = 0;
        while (low <= high){
            mid = partation(nums, low, high);
            if (mid == k - 1)
                return nums[mid];
            else if (mid > k - 1)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }

    int partation(vector<int>& nums, int low, int high) {
        int left = low + 1, right = high;
        swap(nums[low], nums[(low + high) / 2]);
        int bound = nums[low];
        while (left <= right) {
            while (left < high && nums[left] > bound)
                left++;
            while (nums[right] < bound)
                right--;
            if (left < right)
                swap(nums[left++], nums[right--]);
            else
                break;
        }
        swap(nums[low], nums[right]);
        return right;
    }
};


#endif
