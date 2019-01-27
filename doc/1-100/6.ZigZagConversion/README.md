
# Problem 6 : ZigZagConversion

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/6.ZigZagConversion/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) 
            return s;
        string ret = "";
        int n = s.length();
        int cycleLen = 2 * numRows - 2;
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < n; j += cycleLen) {
                ret.push_back(s[j + i]);
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < n)
                    ret.push_back(s[j + cycleLen - i]);
            }
        }
        return ret;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string Convert(string s, int numRows) {
        if (numRows == 1) 
            return s;
        List<string> rows = new List<string>();
        for (int i = 0; i < Math.Min(numRows, s.Length); i++)
        {
            rows.Add("");
        }
        int curRow = 0;
        bool goingDown = false;
        foreach (char c in s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }
        string ret = "";
        foreach (string row in rows) {
            ret += row;
        }           
        return ret;
    }
}

```

## Java Solution

```java

class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;
        String[] L = new String[numRows];
        for (int i = 0; i < numRows; i++) {
            L[i] = "";
        }
        int index = 0;
        int step = 0;
        for (char x : s.toCharArray()){
            L[index] += x;
            if (index == 0)
                step = 1;
            else if (index == numRows - 1)
                step = -1;
            index += step;
        }
        return String.join("", L);
    }
}

```

## Python Solution

```python

class Solution:
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1:
            return s
        ans = ""
        store = {}
        for i in range(numRows):
            store[i] = ""
        count = 0
        isRow = True
        for c in s:
            if isRow == True:
                store[count] += c
                count += 1
                if count == numRows:
                    count = numRows - 2
                    isRow = False
                    if count <= 0:
                        count = 0
                        isRow = True
            else:
                store[count] += c
                count -= 1
                if count == 0:
                    isRow = True
        for i in range(numRows):
            ans += store[i]
        return ans

```


