
# problem 561 : Array Partition I

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/561.ArrayPartitionI/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int array[20001] = {0}; 
        for(auto num : nums)
        {
            array[num + 10000]++;
        }
        int value = 0;
	    int flag = 1;     
	    for(int i = 0 ; i < 20001 ;i ++){
	        while(array[i] != 0){
	            if(flag % 2 == 1){  
	                value = value + (i - 10000);
	            }
	            flag++;
	            array[i]--;
	        }        
	    }  
	    return value;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int ArrayPairSum(int[] nums) {
        Array.Sort(nums);
        for (int i = 2; i < nums.Length; i += 2) {
            nums[0] += nums[i];
        }
        return nums[0];
    }
}

```

## Java Solution

```java

class Solution {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        for (int i = 2; i < nums.length; i += 2) {
            nums[0] += nums[i];
        }
        return nums[0];
    }
}

```

## Python Solution

```python

class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return sum(sorted(nums)[0::2])

```





