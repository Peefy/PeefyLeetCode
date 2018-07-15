
# Problem 13 : Roman to Integer

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/13.RomantoInteger/problem.png"/>

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/13.RomantoInteger/problem1.png"/>

## C++ Solution

```c++

class Solution {
public:

    int indexof(string s, char c){
        for(auto i = 0;i < s.length();++i){
            if(s[i] == c)
                return i;
        }
    }

    int romanToInt(string s) {
        string symbol = "IVXLCDM";
        vector<int> value{1, 5, 10, 50, 100, 500, 1000};
        auto count = s.length();
        auto sum = 0;
        auto j = 0;
        while(j < count - 1){
            auto b_val_index = indexof(symbol, s[j]);
            auto b_val = value[b_val_index];
            auto b_val_next_index = indexof(symbol, s[j + 1]);
            auto b_val_next = value[b_val_next_index];
            if(b_val_next <= b_val){
                sum += b_val;
                j += 1;
            }
            else{
                sum += b_val_next - b_val;
                j += 2;
            }
        }
        if(j >= count){
            return sum;
        }
        else{
            return sum + value[indexof(symbol, s[j])];
        }
    }
};

```

## C# Solution

```csharp
public class Solution 
    {
        public int RomanToInt(string s) 
        {   
            var symbol = "IVXLCDM";
            int[] value = {1, 5, 10, 50, 100, 500, 1000};
            var count = s.Length;
            var sum = 0;
            var j = 0;
            while(j < count - 1)
            {
                var b_val_index = symbol.IndexOf(s[j]);
                var b_val = value[b_val_index];
                var b_val_next_index = symbol.IndexOf(s[j + 1]);
                var b_val_next = value[b_val_next_index];
                if (b_val_next <= b_val)
                {
                    sum += b_val;
                    j += 1;
                }
                else
                {
                    sum += b_val_next - b_val;
                    j += 2;
                }
            }
            if (j >= count)
                return sum;
            else
                return sum + value[symbol.IndexOf(s[j])];
        }
    }

```

## Java Solution

```java
public class Solution {
    public int romanToInt(String s) {
        String symbol = "IVXLCDM";
        int[] value = {1, 5, 10, 50, 100, 500, 1000};
        int count = s.length();
        int sum = 0;
        int j = 0;
        while(j < count - 1)
        {
            int b_val_index = symbol.indexOf(s.charAt(j));
            int b_val = value[b_val_index];
            int b_val_next_index = symbol.indexOf(s.charAt(j + 1));
            int b_val_next = value[b_val_next_index];
            if (b_val_next <= b_val)
            {
                sum += b_val;
                j += 1;
            }
            else
            {
                sum += b_val_next - b_val;
                j += 2;
            }
        }
        if (j >= count)
            return sum;
        else
            return sum + value[symbol.indexOf(s.charAt(j))];
    }
}
```

## Python Solution

```python
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        symbol = 'IVXLCDM'
        value = [1, 5, 10, 50, 100, 500, 1000]
        count = len(s)
        sum = 0
        j = 0
        while j < count - 1:
            b_val_index = symbol.index(s[j])
            b_val = value[b_val_index]
            b_val_next_index = symbol.index(s[j + 1])
            b_val_next = value[b_val_next_index]
            if b_val_next <= b_val:
                sum += b_val
                j += 1
            else:
                sum += b_val_next - b_val
                j += 2
        if j >= count:
            return sum
        else:
            return sum + value[symbol.index(s[j])]
```


