
# problem 557 : Reverse String III

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/557.ReverseStringIII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != ' ')
            {
                int j = i;
                while (j + 1 < n && s[j + 1] != ' ') { j++; } 
                reverse(s, i, j);
                i = j;
            }
        }
        return s;
    }

    void reverse(string& w, int l, int r){
        while(l < r){
            char t = w[l];
            w[l] = w[r];
            w[r] = t;
            l++;
            r--;
        }
    }

};

```

## C# Solution

```csharp

public class Solution {
    public String ReverseWords(String s) {
        char[] res = s.ToCharArray();
        int start = 0, end = 0;
        while(start < res.Length){
            end = s.IndexOf(' ', start);
            if(end == -1){
                Reverse(res, start, res.Length - 1);
                break;
            }
            Reverse(res, start, end - 1);
            start = end + 1;
        }
        return new String(res);
    }
    
    public void Reverse(char[] w, int l, int r){
        while(l < r){
            char t = w[l];
            w[l] = w[r];
            w[r] = t;
            l++;
            r--;
        }
    }
}

```

## Java Solution

```java

class Solution {
    public String reverseWords(String s) {
        String[] strs = s.split(" ");
        for (int i = 0; i < strs.length; ++i){
            strs[i] = new StringBuilder(strs[i]).reverse().toString();  
        }
        return String.join(" ", strs);
    }
}

```

## Python Solution

```python

class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        return ' '.join(map(lambda c : c[::-1], s.split(' ')))

```





