
# problem 541 : ReverseStringII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/541.ReverseStringII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        int n = s.length();
        while(i < n){
            i + k > n - 1 ? reverse(s.begin() + i, s.end()) : reverse(s.begin() + i, s.begin() + i + k);
            i = i + 2 * k;
        }
        return s;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ReverseStr(string s, int k) {
        char[] strlist = s.ToCharArray();
        int n = strlist.Length;
        int i = 0;
        while (i < n){
            if (i + k > n - 1){
                for (int j = i; j < (i + n) / 2; j++) {
                    int m = n - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            else{
                for (int j = i; j < (i + i + k) / 2; j++) {
                    int m = i + k - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            i += 2 * k;
        }
        return new string(strlist);
    }
}

```

## Java Solution

```java

class Solution {
    public String reverseStr(String s, int k) {
        char[] strlist = s.toCharArray();
        int n = strlist.length;
        int i = 0;
        while (i < n){
            if (i + k > n - 1){
                for (int j = i; j < (i + n) / 2; j++) {
                    int m = n - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            else{
                for (int j = i; j < (i + i + k) / 2; j++) {
                    int m = i + k - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            i += 2 * k;
        }
        return String.valueOf(strlist);
    }
}

```

## Python Solution

```python

class Solution:
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        strlist = list(s)
        n = len(strlist)
        i = 0
        while i < n:
            if i + k > n - 1:
                for j in range(i, (i + n) // 2):
                    m = n - 1 - j + i
                    strlist[j], strlist[m] = strlist[m], strlist[j] 
            else:
                for j in range(i, (i + i + k) // 2):
                    m = i + k - 1 - j + i
                    strlist[j], strlist[m] = strlist[m], strlist[j] 
            i += 2 * k
        return ''.join(strlist)

```





