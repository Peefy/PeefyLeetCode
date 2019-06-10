
# Problem 80 : RemoveDuplicatesFromSortedArrayII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/80.RemoveDuplicatesFromSortedArrayII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int k = 2;
        for (int n : nums) {
            if (i < k || n != nums[i - k]){
                nums[i] = n;
                i += 1;
            }
        }
        return i;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int i = 0;
        int k = 2;
        foreach (int n in nums) {
            if (i < k || n != nums[i - k]){
                nums[i] = n;
                i += 1;
            }
        }
        return i;
    }
}

```

## Java Solution

```java

class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0;
        int k = 2;
        for (int n : nums) {
            if (i < k || n != nums[i - k]){
                nums[i] = n;
                i += 1;
            }
        }
        return i;
    }
}

```

## Python Solution

```python

class Solution:
    def removeDuplicates(self, nums : list) -> int:
        i = 0
        k = 2
        for n in nums:
            if i < k or n != nums[i - k]:
                nums[i] = n
                i += 1
        return i 

```


