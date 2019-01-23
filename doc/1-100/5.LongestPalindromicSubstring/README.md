
# Problem 5 : LongestPalindromicSubstring

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/5.LongestPalindromicSubstring/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int len, start = 0, max = 0;
    string longestPalindrome(string s) {
        if ((len = s.length()) <= 1) return s;
        for (int i = 0; i < len; i++) {
            i = helper(s, i);
        }
        return s.substr(start, max);
    }
    int helper(string s, int k) {
        int i = k - 1, j = k;
        while (j < len - 1 && s[j] == s[j + 1]) j++;
        int nextCenter = j++;
        while (i >= 0 && j < len && s[i] == s[j]) {
            i--;
            j++;
        }
        if (j - i - 1 > max) {
            max = j - i - 1;
            start = i + 1;
        }
        return nextCenter;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public static String Reverse(String str){  
        char[] arr = str.ToCharArray();
        Array.Reverse(arr);
        return new string(arr);
    }
    public string LongestPalindrome(string s) {
        int length = s.Length;
        int max_len = 0;
        int begin = 0;
        for (int i = 0; i < length; i++) {
            if (i - max_len >= 1 && s.Substring(i - max_len - 1, i + 1 - (i - max_len - 1)) == Reverse(s.Substring(i - max_len - 1, i + 1 - (i - max_len - 1)))){
                begin = i - max_len - 1;
                max_len += 2;
                continue;
            }
            if (i - max_len >= 0 && s.Substring(i - max_len, i + 1 - (i - max_len)) == Reverse(s.Substring(i - max_len, i + 1 - (i - max_len)))){
                begin = i - max_len;
                max_len += 1;
            }
        }
        return s.Substring(begin, max_len);
    }
}

```

## Java Solution

```java

class Solution {
    public static String reverse(String str){  
        return new StringBuilder(str).reverse().toString();  
    }

    public String longestPalindrome(String s) {
        int length = s.length();
        int max_len = 0;
        int begin = 0;
        for (int i = 0; i < length; i++) {
            if (i - max_len >= 1 && s.substring(i - max_len - 1, i + 1).equals(reverse(s.substring(i - max_len - 1, i + 1)))){
                begin = i - max_len - 1;
                max_len += 2;
                continue;
            }
            if (i - max_len >= 0 && s.substring(i - max_len, i + 1).equals(reverse(s.substring(i - max_len, i + 1)))){
                begin = i - max_len;
                max_len += 1;
            }
        }
        return s.substring(begin, begin + max_len);
    }
}

```

## Python Solution

```python

class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        slist = list(s)
        for i in range(len(s) - 1):
            slist.insert(2 * i + 1, '#')
        maxstrlist = []
        maxlength = 0
        for i in range(len(slist)):
            left = i - 1
            right = i + 1
            now = 1 if slist[i] != '#' else 0
            while left >= 0 and right <= len(slist) - 1 and slist[left] == slist[right]:
                if slist[left] != '#':
                    now += 2
                left -= 1
                right += 1
            if now > maxlength:
                maxlength = now
                maxstrlist = slist[left + 1:right:]
        return ''.join(maxstrlist).replace('#', '')

```


