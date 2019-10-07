
# problem 255 : VerifyPreorderSequenceInBinarySearchTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/255.VerifyPreorderSequenceInBinarySearchTree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool verifyPreorde(vector<int> nums) {
        int min = INT64_MIN;
        stack <int> stack;
        for (int num : nums) {
            if (num < min) {
                return false;
            }
            while(!stack.empty() && num > stack.top(){
                min = stack.top();
                stack.pop();
            }
            stack.push(num);
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public bool VerifyPreorde(int [] nums)
    {
        var min = int.MinValue;
        var stack = new Stack<int>();
        foreach (var num in nums)
        {
            if (num < min)
                return false;
            while (stack.Count > 0 && num > stack.Peek())
            {
                min = stack.Pop();
            }
            stack.Push(num);
        }
        return true;
    }
}

```

## Java Solution

```java

public class Solution {
    public boolean verifyPreorde(int[] nums){
        int min = Integer.MIN_VALUE;
        Stack<Integer> stack = new Stack<>();
        for (int num : nums){
            if (num < min)
                return false;
            while (!stack.isEmpty() && num > stack.peek()) {
                min = stack.pop();
            }
            stack.push(num);
        }
        return true;
    } 
}

```

## Python Solution

```python

class Solution:
    def verifyPreorde(self, nums):
        minnum = -99999999
        stack = []
        for num in nums:
            if num < minnum:
                return False
            while len(stack) > 0 and num > stack[-1]:
                minnum = stack.pop()
            stack.append(num)
        return True     

```




