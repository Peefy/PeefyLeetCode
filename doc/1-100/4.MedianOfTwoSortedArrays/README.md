
# Problem 4 : Median of Two Sorted Arrays

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/4.MedianOfTwoSortedArrays.png"/>

## C++ Solution

```c++

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

```

## C# Solution

```csharp
public class Solution
    {
        public double FindMedianSortedArrays(int[] nums1, int[] nums2)
        {
            var nums = new List<int>();
            nums.AddRange(nums1);
            nums.AddRange(nums2);
            nums.Sort();
            var n = nums.Count;
            return (nums[n / 2] + nums[(n - 1) / 2]) / 2.0;
        }
    }

```

## Java Solution

```java

class Solution {
    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int MIN_VALUE = 0x80000000;

        int MAX_VALUE = 0x7fffffff;

        int N1 = nums1.length;
        int N2 = nums2.length;
        if (N1 > N2) {// 确保N1是短的部分。
            return findMedianSortedArrays(nums2, nums1);
        }

        if (N1 == 0)
            return ((double) nums2[(N2 - 1) / 2] + (double) nums2[N2 / 2]) / 2;
        int size = N1 + N2;
        int cutL = 0, cutR = N1;
        int cut1 = N1 / 2;
        int cut2 = size / 2 - cut1;

        while (cut1 <= N1) {
            cut1 = (cutR - cutL) / 2 + cutL;
            cut2 = size / 2 - cut1;

            double L1 = (cut1 == 0) ? MIN_VALUE : nums1[cut1 - 1];
            double L2 = (cut2 == 0) ? MIN_VALUE : nums2[cut2 - 1];
            double R1 = (cut1 == N1) ? MAX_VALUE : nums1[cut1];
            double R2 = (cut2 == N2) ? MAX_VALUE : nums2[cut2];
            if (L1 > R2)
                cutR = cut1 - 1;
            else if (L2 > R1)
                cutL = cut1 + 1;
            else {// Otherwise, that's the right cut.
                if (size % 2 == 0) {// 偶数个数的时候
                    L1 = (L1 > L2 ? L1 : L2);
                    R1 = (R1 < R2 ? R1 : R2);
                    return (L1 + R1) / 2;
                }

                else {
                    R1 = (R1 < R2 ? R1 : R2);
                    return R1;
                }
            }
        }
        return -1;
    }
}

```

## Python Solution

```python

class Solution:
    def findMedianSortedArrays(self, nums1 : list, nums2 : list):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        m = len(nums1)
        n = len(nums2)
        nums1.append(math.inf)
        nums2.append(math.inf)
        total = m + n
        one = (total + 1) // 2
        two = (total + 2) // 2
        i = 0
        j = 0
        count = 0
        median1 = 0
        median2 = 0
        while True:
            min = -math.inf
            if nums1[i] < nums2[j]:
                min = nums1[i]
                i += 1
            else:
                min = nums2[j]
                j += 1
            count += 1
            if count == one:
                median1 = min
            if count == two:
                median2 = min
                break
        return (median1 + median2) / 2

```


