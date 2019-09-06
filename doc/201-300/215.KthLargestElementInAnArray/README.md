
# problem 215 : KthLargestElementInAnArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/215.KthLargestElementInAnArray/problem.png"/>

## C++ Solution

```c++

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

```

## C# Solution

```csharp

public class Solution {
    int[] nums;
    void swap(int a, int b){
        int tmp = this.nums[a];
        this.nums[a] = this.nums[b];
        this.nums[b] = tmp;
    }

    int partition(int left, int right, int pivot_index){
        int pivot = this.nums[pivot_index];
        swap(pivot_index, right);
        int store_index = left;
        for (int i = left; i <= right; i++) {
            if (this.nums[i] < pivot){
                swap(store_index, i);
                store_index++;
            }
        }
        swap(store_index, right);
        return store_index;
    }

    int quickselect(int left, int right, int k_smallest){
        if (left == right)
            return this.nums[left];
        Random random_num = new Random();
        int pivot_index = left + random_num.Next(right - left);
        pivot_index = partition(left, right, pivot_index);
        if (k_smallest == pivot_index)
            return this.nums[k_smallest];
        else if (k_smallest < pivot_index)
            return quickselect(left, pivot_index - 1, k_smallest);
        return quickselect(pivot_index + 1, right, k_smallest);
    }

    public int FindKthLargest(int[] nums, int k) {
        this.nums = nums;
        return quickselect(0, nums.Length - 1, nums.Length - k);
    }
}

```

## Java Solution

```java

class Solution {
    int[] nums;

    public void swap(int a, int b){
        int tmp = this.nums[a];
        this.nums[a] = this.nums[b];
        this.nums[b] = tmp;
    }

    public int partition(int left, int right, int pivot_index){
        int pivot = this.nums[pivot_index];
        swap(pivot_index, right);
        int store_index = left;
        for (int i = left; i <= right; i++) {
            if (this.nums[i] < pivot){
                swap(store_index, i);
                store_index++;
            }
        }
        swap(store_index, right);
        return store_index;
    }

    public int quickselect(int left, int right, int k_smallest){
        if (left == right)
            return this.nums[left];
        Random random_num = new Random();
        int pivot_index = left + random_num.nextInt(right - left);
        pivot_index = partition(left, right, pivot_index);
        if (k_smallest == pivot_index)
            return this.nums[k_smallest];
        else if (k_smallest < pivot_index)
            return quickselect(left, pivot_index - 1, k_smallest);
        return quickselect(pivot_index + 1, right, k_smallest);
    }

    public int findKthLargest(int[] nums, int k) {
        this.nums = nums;
        return quickselect(0, nums.length - 1, nums.length - k);
    }
}

```

## Python Solution

```python

import heapq

class Solution:
    def findKthLargest(self, nums, k):
        return heapq.nlargest(k, nums)[-1]     

```




