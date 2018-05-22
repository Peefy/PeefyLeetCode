
# Problem 9 : Palindrome Number

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/9.PalindromeNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        vector<int> bit;
        auto pre = x;
        while(x > 0)
        {
            auto cur = x % 10;
            bit.push_back(cur);
            x = x / 10;
        }
        auto sum = 0;
        for(auto b : bit)
        {
            sum = sum * 10 + b; 
        }
        if(sum == pre)
        {
            return true;
        }
        return false;
    }
};

```

## C# Solution

```csharp
class Solution
    {
        public bool IsPalindrome(int x) 
        {
            if(x < 0)
                return false;
            var bit = new List<int>();
            int pre = x;
            while(x > 0)
            {
                int cur = x % 10;
                bit.Add(cur);
                x = x / 10;
            }
            int sum = 0;
            foreach(var b in bit)
            {
                sum = sum * 10 + b; 
            }
            if(sum == pre)
            {
                return true;
            }
            return false;  
        }
    }

```

## Java Solution

```java
public class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0)
            return false;
        ArrayList<Integer> bit = new ArrayList<>();
        int pre = x;
        while(x > 0)
        {
            int cur = x % 10;
            bit.add(cur);
            x = x / 10;
        }
        int sum = 0;
        for(int b : bit)
        {
            sum = sum * 10 + b; 
        }
        if(sum == pre)
        {
            return true;
        }
        return false;
    }
}
```

## Python Solution

```python
class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """ 
        if x < 0:
            return False
        bit = []
        pre = x
        while x > 0:
            cur = x % 10
            bit.append(cur)
            x = x // 10
        sum = 0
        for b in bit:
            sum = sum * 10 + b 
        if sum == pre:
            return True
        return False
```


