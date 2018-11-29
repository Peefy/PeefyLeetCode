
# problem 680 : ValidPalindromeII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/680.ValidPalindromeII/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i <= j && s[i] == s[j]){
            i += 1;
            j -= 1;
        }
        if (i > j)
            return true;
        int ii = i + 1;
        int jj = j;
        while (ii <= jj && s[ii] == s[jj]){
            ii += 1;
            jj -= 1;
        }
        if (ii > jj)
            return true;
        ii = i;
        jj = j - 1;
        while (ii <= jj and s[ii] == s[jj]){
            ii += 1;
            jj -= 1;
        }
        return ii > jj;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        private const int N = 1;

        public bool ValidPalindrome(String s)
        {
            return validate(s, 0, s.Length - 1, 0);
        }
        bool validate(String s, int i, int j, int delCount)
        {
            if (delCount > N)
            {
                return false; // N - times of deletion allowed.
            }
            while (i < j)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    delCount++;
                    return validate(s, i, j - 1, delCount) || validate(s, i + 1, j, delCount);
                }
            }
            return true;
        }
    }

```

## Java Solution

```java

class Solution {
    public boolean validPalindrome(String s) {
        char[] sarr = s.toCharArray();
        int i = 0, j = sarr.length - 1;
        while (i < j) {
            if (sarr[i] != sarr[j]) {
                break;
            }
            i++;
            j--;
        }
        while (i < j) {
            if (sarr[i + 1] != sarr[j] && sarr[i] != sarr[j - 1]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        i, j = 0, len(s) - 1
        while i <= j and s[i] == s[j]:
            i += 1
            j -= 1
        if i > j:
            return True
        ii = i + 1
        jj = j
        while ii <= jj and s[ii] == s[jj]:
            ii += 1
            jj -= 1
        if ii > jj:
            return True
        ii = i 
        jj = j - 1
        while ii <= jj and s[ii] == s[jj]:
            ii += 1
            jj -= 1
        if ii > jj:
            return True
        return False

```





