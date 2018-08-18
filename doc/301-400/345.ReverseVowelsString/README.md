
# problem 345 : ReverseVowelsString

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/345.ReverseVowelsString/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || \
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    string reverseVowels(string s) {   
        string chars = s;   
        stack<char> stack;
        auto n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]) == true)
            {
                stack.push(chars[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]) == true)
            {
                chars[i] = stack.top();
                stack.pop();
            }
        }
        return chars;
    }
};


```

## C# Solution

```csharp

public class Solution {
    public string ReverseVowels(string s) {
        var chars = s.ToCharArray();
        var vowels = "aeiouAEIOU";
        var stack = new Stack<char>();
        var n = s.Length;
        for (int i = 0; i < n; i++)
        {
            if (vowels.IndexOf(s[i]) != -1)
            {
                stack.Push(chars[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vowels.IndexOf(s[i]) != -1)
            {
                chars[i] = stack.Pop();
            }
        }
        return new string(chars);
    }
}

```

## Java Solution

```java

class Solution {
    public String reverseVowels(String s) {
        char[] list1 = s.toCharArray();
        String vowels = "aeiouAEIOU";
        int j = list1.length - 1;
        int i = 0;
        while (i < j) {
            if (vowels.indexOf(s.charAt(j)) == -1)
                j -= 1;
            else if (vowels.indexOf(s.charAt(i)) == -1)
                i += 1;
            else{
                char tmp = list1[i];
                list1[i] = list1[j];
                list1[j] = tmp;
                i += 1;
                j -= 1;
            }
        }
        return new String(list1);
    }
}

```

## Python Solution

```python

class Solution:
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = 'aeiouAEIOU'
        stack = []
        n = len(s)
        r = ''
        for i in range(n):
            if s[i] in vowels:
                stack.append(s[i])
        for i in range(n):
            if s[i] in vowels:
                r = r + stack.pop()
            else:
                r = r + s[i]
        return r

```





