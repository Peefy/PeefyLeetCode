
# problem 665 : NonDecreasingArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/665.NonDecreasingArray/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    bool checkPossibility(vector<int> &nums){
        if (nums.size() <= 2)
            return true;
        int count = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] < nums[i - 1]){
                if (count == 0)
                    return false;
                if (i == 1 || nums[i] >= nums[i - 2])
                    nums[i - 1] = nums[i];
                else
                    nums[i] = nums[i - 1];
                count--;
            }
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool CheckPossibility(int[] nums) {
        if (nums.Length <= 2)
            return true;
        int count = 1;
        for (int i = 1; i < nums.Length; i++){
            if (nums[i] < nums[i - 1]){
                if (count == 0)
                    return false;
                if (i == 1 || nums[i] >= nums[i - 2])
                    nums[i - 1] = nums[i];
                else
                    nums[i] = nums[i - 1];
                count--;
            }
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean checkPossibility(int[] nums) {
        if (nums.length <= 2) 
            return true;
        int count = nums[0] <= nums[1] ? 0 : 1;
        for (int i = 2; i < nums.length; i++) {
            if (nums[i - 1] > nums[i]){
                count += 1;
                if (count > 1)
                    return false;
                if (nums[i - 2] > nums[i]) 
                    nums[i] = nums[i - 1];  
                else
                    nums[i - 1] = nums[i - 2]; 
            }
        }      
        return count <= 1;
    }
}

```

## Python Solution

```python

class Solution:
    def checkPossibility(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if len(nums) <= 2: 
            return True
        count = 0 if nums[0] <= nums[1] else 1 
        for i in range(2, len(nums)):
            if nums[i - 1] > nums[i]:
                count += 1
                if count > 1:
                    return False
                if nums[i - 2] > nums[i]: 
                    nums[i] = nums[i - 1]  
                else:
                    nums[i - 1] = nums[i - 2] 
        return count <= 1

```





