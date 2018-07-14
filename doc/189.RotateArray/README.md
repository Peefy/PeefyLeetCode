
# problem 189 RotateArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/189.RotateArray/problem.png"/>

空间复杂度O(1)答案见C#

## C++ Solution

```c++

class Solution
{
  public:
    void rotate(vector<int> nums ,int k)
    {
        int l = nums.size();
        if (l > 1)
        {
            k = k % l;
            if (k != 0)
            {
                if ((l % k) && (l % (l % k)))
                {
                    int temp = nums[(l - 1) * k % l];
                    for(int i = l - 2;i > -1;--i)
                    {
                        nums[(i+1) * k % l] = nums[i * k % l];
                    }                        
                    nums[0] = temp;
                }
                else
                {
                    int m = 0;
                    if (l % k != 0 && l % (l % k) == 0)
                        m = l % k;
                    else
                        m = k;
                    for (int i = 0;i < m;++i)
                    {
                        int temp = nums[(i + (l / m - 1) * k) % l];
                        for (int j = l / m - 2;j > -1;--j)
                        {
                            nums[(i + (j+1) * k) % l] = nums[(i + j * k) % l];
                        }
                        nums[i] = temp;
                    }
                }
            }
        }
    }
};

```

## C# Solution

```csharp

    public class Solution {
    
    public void Rotate(int[] nums, int k) {
        int len = nums.Length;
        if(len <= 1) {
            return;
        }
        k %= len;
        if(k == 0) {
            return;
        }
        reverse(nums,0,len-k-1);
        reverse(nums,len-k,len-1);
        reverse(nums,0,len-1);
    }
    private void reverse(int[] nums, int start, int end){
        while (start < end) {
            swap(nums,start,end);
            start++;
            end--;
        }
    }
    private void swap(int[] nums, int index1, int index2) {
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }
}

```

## Java Solution

```java

class Solution {
    public void rotate(int[] nums, int k) {
        LinkedList<Integer> arr = new LinkedList<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            arr.add(nums[i]);
        }
        k = k % n;
        if (k == 0)
            return;
        for (int i = 0; i < n; i++) {
            nums[(i + k) % n] = arr.get(i);
        }
    }
}



```

## Python Solution

```python

from copy import deepcopy

class Solution:
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        arr = deepcopy(nums)
        n = len(nums)
        k = k % n
        if k == 0:
            return
        for i in range(n):
            index = i + k
            if index >= n:
                index -= n
            nums[index] = arr[i]  

```



