
# problem 171 : ExcelConvertToNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/171.ExcelConvertToNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int titleToNumber(string s) {
        auto n = s.size();   
        int sum = 0;   
        for(int i = 0; i < n; i++)
        {
            auto j = n - i - 1;
            sum += (s[j] - 'A' + 1) * pow(26, i);
        }
        return sum;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int TitleToNumber(string s)
        {
            double sum = 0;
            int n = s.Length;
            for (int i = 0; i < n; i++)
            {
                int j = n - i - 1;
                sum += (s[j] - 'A' + 1) * Math.Pow(26, i);
            }
            return (int)sum;
        }
    }

```

## Java Solution

```java

class Solution {
    public int titleToNumber(String s) {
        char[] arr = s.toCharArray();
        int sum = 0;
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            int j = n - i - 1;
            sum += (arr[j] - 'A' + 1) * Math.pow(26, i);
        }
        return sum;
    }
}

```

## Python Solution

```python

class Solution:
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        sum = 0
        for i in range(n):
            j = n - i - 1
            code = (ord(s[j]) - ord('A') + 1)
            sum += code * 26 ** i
        return sum

```


