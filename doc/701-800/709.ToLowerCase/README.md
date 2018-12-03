
# problem 709 : ToLowerCase

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/709.ToLowerCase/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string toLowerCase(string str) {
        int n = str.length();
        for(int i = 0; i < n; i++)
        {
             if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
        return str;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ToLowerCase(string str) {
        return str.ToLower();
    }
}

```

## Java Solution

```java

class Solution {
    public String toLowerCase(String str) {
        return str.toLowerCase();
    }
}

```

## Python Solution

```python

class Solution:
    def toLowerCase(self, str):
        """
        :type str: str
        :rtype: str
        """
        return str.lower()
        

```





