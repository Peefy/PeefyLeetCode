
# problem 28 : StrStr

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/28.StrStr/problem.png"/>

## C/C++ Solution

```c

int strStr(char* s1, char* s2) {
    if(!s2[0] || s2 == NULL)
        return 0;
    int  i,j,k;
    for(i=0; s1[i]; i++)
         for(j=i,k=0; s1[j]==s2[k]; j++,k++)
                 if(!s2[k+1])
                       return i;
    return(-1);
}

```

```c++

class Solution
{
  public:
    int strStr(string haystack, string needle)
    {
        if (needle.length() == 0)
            return 0;
        return haystack.find(needle.c_str(), 0);
    }
};
```

## C# Solution

```csharp


    public class Solution
    {
        public int StrStr(string haystack, string needle)
        {
            if(string.IsNullOrEmpty(needle) == true)
                return 0;
            var n1 = haystack.Length;
            var n2 = needle.Length;
            var max = n1 - n2;
            var first = needle[0];
            for(var i = 0; i < n1 ;++i)
            {
                if (haystack[i] != first)
                {
                    while (++i <= max && haystack[i] != first) ;
                }
                if (i <= max)
                {
                    int j = i + 1;
                    int end = j + n2 - 1;
                    for (int k = 1; j < end && haystack[j]
                            == needle[k]; j++, k++) ;
                    if (j == end)
                    {
                        return i;
                    }
                }
            }
            return -1;
        }
    }   

```

## Java Solution

```java

class Solution {
    public int strStr(String haystack, String needle) {
        if (needle == null || needle.length() == 0)
            return 0;
        int n1 = haystack.length();
        int n2 = needle.length();
        int max = n1 - n2;
        int first = needle.charAt(0);
        for (int i = 0; i < n1; ++i) {
            if (haystack.charAt(i) != first) {
                while (++i <= max && haystack.charAt(i) != first)
                    ;
            }
            if (i <= max) {
                int j = i + 1;
                int end = j + n2 - 1;
                for (int k = 1; j < end && 
                    haystack.charAt(j) == needle.charAt(k); j++, k++)
                    ;
                if (j == end) {
                    return i;
                }
            }
        }
        return -1;
    }
}

```

## Python Solution

```python

class Solution:
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if len(needle) == "":
            return 0
        hl = len(haystack)
        nl = len(needle)
        i = 0
        j = 0
        while i < hl:
            if j == nl:
                return i - j
            if haystack[i] == needle[j]:
                i += 1
                j += 1
            else:
                i = i - j + 1
                j = 0
        if i == hl and j == nl:
            return i - j
        return -1

```


