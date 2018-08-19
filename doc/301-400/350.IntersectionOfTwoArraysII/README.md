
# problem 350 : IntersectionOfTwoArraysII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/350.IntersectionOfTwoArraysII/problem.png"/>

* 解法一：采用hash集合
* 解法二：采用快速排序或者堆排序等复杂度低的算法预先排序

## C++ Solution

```c++

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty())
            return {};
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i += 1;
                j += 1;
            }
            else if (nums1[i] < nums2[j])
                i += 1;
            else if (nums1[i] > nums2[j])
                j += 1;
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] Intersect(int[] nums1, int[] nums2) {
        Array.Sort(nums1);
        Array.Sort(nums2);
        int i = 0;
        int j = 0;
        var r = new List<int>();
        while (i < nums1.Length && j < nums2.Length)
        {
            if (nums1[i] == nums2[j]){
                r.Add(nums1[i]);
                i += 1;
                j += 1;
            }
            else if (nums1[i] < nums2[j])
                i += 1;
            else if (nums1[i] > nums2[j])
                j += 1;
        }
        return r.ToArray();
    }
}

```

## Java Solution

```java


class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        quickSort(nums1, 0, n1 - 1);
        quickSort(nums2, 0, n2 - 1);
        int i = 0;
        int j = 0;
        ArrayList<Integer> r = new ArrayList<>();
        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]){
                r.add(nums1[i]);
                i += 1;
                j += 1;
            }
            else if (nums1[i] < nums2[j])
                i += 1;
            else if (nums1[i] > nums2[j])
                j += 1;
        }
        int size = r.size();
        int[] nums = new int[size];
        for (int k = 0; k < size; k++) {
            nums[k] = r.get(k);
        }
        return nums;
    }

    private static void quickSort(int[] nums, int start, int end) {
        if (nums == null || nums.length < 2 || start >= end) {
            return;
        } 
        int i = start, j = end;
        int pivot = nums[(start + end) / 2];
        while (i <= j) {
            while(i <= j && nums[i] < pivot) { 
                ++i; 
            }    
            while(i <= j && nums[j] > pivot) { 
                --j;
            }  
            if (i < j) { 
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++i;
                --j;
            } else if (i == j) {
                ++i;
            }
        } 
        quickSort(nums, start, j);
        quickSort(nums, i, end);
    }
}

```

## Python Solution

```python


class Solution:
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1, nums2 = sorted(nums1), sorted(nums2)
        ans = []
        i, j = 0, 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                ans.append(nums1[i])
                i += 1
                j += 1
            elif nums1[i] < nums2[j]:
                i += 1
            elif nums1[i] > nums2[j]:
                j += 1
        return ans

```





