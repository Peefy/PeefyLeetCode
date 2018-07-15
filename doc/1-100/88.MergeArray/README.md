
# problem 88 : MergeArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/88.MergeArray/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int nums[999];
        for (int ii = 0; ii < m; ++ii)
        {
            nums[ii] = nums1[ii];
        }
        int i = 0;
        int j = 0;
        int index = 0;
        while (i < m || j < n)
        {
            if (i == m)
            {
                for (int k = j; k < n; ++k)
                {
                    nums1[index] = nums2[k];
                    index += 1;
                }
                break;
            }
            if (j == n)
            {
                for (int k = i; k < m; ++k)
                {
                    nums1[index] = nums[k];
                    index += 1;
                }
                break;
            }
            if (nums[i] < nums2[j])
            {
                nums1[index] = nums[i];
                i += 1;
            }
            else
            {
                nums1[index] = nums2[j];
                j += 1;
            }
            index += 1;
    }
    }
};

```

## C# Solution

```csharp
    public class Solution
    {
        public void Merge(int[] nums1, int m, int[] nums2, int n)
        {
            int[] nums = new int[m];
            for (int ii = 0; ii < m; ++ii)
            {
                nums[ii] = nums1[ii];
            }
            int i = 0;
            int j = 0;
            int index = 0;
            while (i < m || j < n)
            {
                if (i == m)
                {
                    for (int k = j; k < n; ++k)
                    {
                        nums1[index] = nums2[k];
                        index += 1;
                    }
                    break;
                }
                if (j == n)
                {
                    for (int k = i; k < m; ++k)
                    {
                        nums1[index] = nums[k];
                        index += 1;
                    }
                    break;
                }
                if (nums[i] < nums2[j])
                {
                    nums1[index] = nums[i];
                    i += 1;

                }
                else
                {
                    nums1[index] = nums2[j];
                    j += 1;
                }
                index += 1;
        }
    }
    }

```

## Java Solution

```java
class Solution {
        public void merge(int[] nums1, int m, int[] nums2, int n) {
            int[] nums = new int[m];
            for(int i = 0;i < m;++i){
                nums[i] = nums1[i];
            }
            int i = 0;
            int j = 0;
            int index = 0;
            while (i < m || j < n) {
                if (i == m){
                    for (int k = j; k < n; ++k){
                        nums1[index] = nums2[k];
                        index += 1;
                    }
                    break;
                }
                if (j == n) {
                    for (int k = i; k < m; ++k) {
                        nums1[index] = nums[k];
                        index += 1;
                    }
                    break;
                }
                if (nums[i] < nums2[j]) {
                    nums1[index] = nums[i];
                    i += 1;
                    
                } else {
                    nums1[index] = nums2[j];
                    j += 1;
                }
                index += 1;
                
            }
        }
    }

```

## Python Solution

```python

class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        nums = []
        for i in range(m):
            nums.append(nums1[i])
        i = 0
        j = 0
        index = 0
        while i < m or j < n:
            if i == m:
                for k in range(j, n):
                    nums1[index] = nums2[k]
                    index += 1
                break
            if j == n:
                for k in range(i, m):
                    nums1[index] = nums[k]
                    index += 1
                break
            if nums[i] < nums2[j]:
                nums1[index] = nums[i]
                i += 1
            else:
                nums1[index] = nums2[j]
                j += 1
            index += 1
        return nums1

```


