
#ifndef __MedianOfTwoSortedArrays_H
#define __MedianOfTwoSortedArrayss_H

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() < 1){
            auto n = nums2.size();
            return (nums2[n / 2] + nums2[(n - 1) / 2]) / 2.0;
        }
        if (nums2.size() < 1){
            auto m = nums1.size();
            return (nums1[m / 2] + nums2[(m - 1) / 2]) / 2.0;
        }
        auto m = nums1.size(); 
        auto n = nums2.size();
        auto len = m + n;
        if (len == 0)
            return 0;
        auto k = (len + 1) / 2;
        if (len % 2 == 1)
            return GetKth(nums1, 0, nums2, 0, k);
        return (GetKth(nums1, 0, nums2, 0, k) + GetKth(nums1, 0, nums2, 0, k + 1)) / 2;
    }

    double GetKth(vector<int> &nums1, int start1, vector<int> &nums2, int start2, int k)
    {
        if (start1 > nums1.size() - 1)
            return nums2[start2 + k - 1];
        if (start2 > nums2.size() - 1)
            return nums1[start1 + k - 1];
        if (k == 1){
            if (nums1[start1] < nums2[start2])
                return nums1[start1];
            return nums2[start2];
        }
        int mid1 = 2147483647, mid2 = 2147483647;
        if (start1 + k / 2 - 1 < nums1.size())
            mid1 = nums1[start1 + k / 2 - 1];
        if (start2 + k / 2 - 1 < nums2.size())
            mid2 = nums2[start2 + k / 2 - 1];
        if (mid1 < mid2)
            return GetKth(nums1, start1 + k / 2, nums2, start2, k - k / 2);
        else
            return GetKth(nums1, start1, nums2, start2 + k / 2, k - k / 2);
    }
};

#endif
