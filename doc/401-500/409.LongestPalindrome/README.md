
# problem 409 : LongestPalindrome

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/409.LongestPalindrome/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int longestPalindrome(string s) {
        string cs = s;
        int counts[58] = {0};  
        for (auto c : cs) {
            counts[c - 'A'] ++;
        }   
        int res = 0;
        int add = 0;
        for (auto i : counts) {      
            res += i / 2 * 2;          
            if (i % 2 != 0) {
                add = 1;
            }
        }       
        return res + add;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int LongestPalindrome(string s) {
        char[] cs = s.ToCharArray();
        int[] counts = new int[58];  
        foreach (var c in cs) {
            counts[c - 'A'] ++;
        }   
        int res = 0;
        int add = 0;
        foreach (var i in counts) {      
            res += i / 2 * 2;          
            if (i % 2 != 0) {
                add = 1;
            }
        }       
        return res + add;
    }
}

```

## Java Solution

```java

class Solution {
    public int longestPalindrome(String s) {
        int[] lower = new int[26];
        int[] upper = new int[26];
        char[] s_arr = s.toCharArray();
        int n = s_arr.length;
        int num = 0;
        int hassingle = 0;
        for (int i = 0; i < n; i++) {
            char c = s_arr[i];
            if (((c)>='a')&&((c)<='z')){
                lower[c - 'a']++;
            }
            else{
                upper[c - 'A']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            int e = lower[i];
            if (e % 2 != 0){
                hassingle = 1;
                e -= 1;
            }
            num += e;    
            e = upper[i];
            if (e % 2 != 0){
                hassingle = 1;
                e -= 1;
            }
            num += e;   
        }
        return num + hassingle;
    }
}


```

## Python Solution

```python

from collections import Counter

class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        counter = Counter(s)
        num = 0
        hassingle = 0
        for e in counter.values():
            if e % 2 != 0:
                hassingle = 1
                e -= 1
            num += e      
        return num + hassingle

```





