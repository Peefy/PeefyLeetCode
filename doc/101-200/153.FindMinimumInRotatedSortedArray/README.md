
# problem 153 : FindMinimumInRotatedSortedArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/153.FindMinimumInRotatedSortedArray/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        if(nums.size() == 1)    return nums[0];
        while(l <= r){
            int mid = l + (r - l) / 2;
            cout << mid << endl;
            if((mid == 0 && nums[mid] < nums[mid + 1]) || (mid == nums.size()-1 && nums[mid] < nums[mid - 1]) || (mid != 0 && mid != nums.size()-1 && nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1]))   return nums[mid];
            if(nums[r] <nums[l] && nums[mid] < nums[r]) r = mid - 1;
            else if(nums[r] > nums[l])  r = l;
            else if(nums[mid] > nums[r])    l = mid + 1;
        }
        return -1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindMin(int[] nums) {
        if (nums.Length == 1)
            return nums[0];
        int left = 0;
        int right = nums.Length - 1;
        if (nums[right] > nums[0])
            return nums[0];
        while (right >= left) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            if (nums[mid - 1] > nums[mid])
                return nums[mid];
            if (nums[mid] > nums[0])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return nums[0];
    }
}

```

## Java Solution

```java

class Solution {
    public int findMin(int[] nums) {
        if (nums.length == 1)
            return nums[0];
        int left = 0;
        int right = nums.length - 1;
        if (nums[right] > nums[0])
            return nums[0];
        while (right >= left) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            if (nums[mid - 1] > nums[mid])
                return nums[mid];
            if (nums[mid] > nums[0])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return nums[0];
    }
}

```

## Python Solution

```python

class Solution:
    def findMin(self, nums):
        if len(nums) == 1:
            return nums[0]
        left = 0
        right = len(nums) - 1
        if nums[right] > nums[0]:
            return nums[0]
        while right >= left:
            mid = left + (right - left) // 2
            if nums[mid] > nums[mid + 1]:
                return nums[mid + 1]
            if nums[mid - 1] > nums[mid]:
                return nums[mid]
            if nums[mid] > nums[0]:
                left = mid + 1
            else:
                right = mid - 1

```


