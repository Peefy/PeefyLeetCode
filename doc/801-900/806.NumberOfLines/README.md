
# problem 806 : NumberOfLines

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/806.NumberOfLines/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> result(2);
        int sum = 0;
        int line = 1;
        for (char c : S) {
            sum = sum + widths[c - 97];
            if (sum > 100) {
                line++;
                sum = widths[c - 97];
            }

        }
        result[0] = line;
        result[1] = sum;
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] NumberOfLines(int[] widths, string S) {
        int[] result = new int[2];
        char[] charArr = S.ToCharArray();
        int sum = 0;
        int line = 1;
        foreach (char c in charArr) {
            sum = sum + widths[c - 97];
            if (sum > 100) {
                line++;
                sum = widths[c - 97];
            }

        }
        result[0] = line;
        result[1] = sum;
        return result;
    }
}

```

## Java Solution

```java

class Solution {
    public int[] numberOfLines(int[] widths, String S) {
        int[] result = new int[2];
        char[] charArr = S.toCharArray();
        int sum = 0;
        int line = 1;
        for (char c : charArr) {
            sum = sum + widths[c - 97];
            if (sum > 100) {
                line++;
                sum = widths[c - 97];
            }

        }
        result[0] = line;
        result[1] = sum;
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def numberOfLines(self, widths, S):
        """
        :type widths: List[int]
        :type S: str
        :rtype: List[int]
        """
        LINE = 100
        line = 0
        lines = 1 
        for s in S:
            width = widths[ord(s) - ord('a')]
            line += width
            if line > LINE:
                line = width
                lines += 1
        return [lines, line]

```





