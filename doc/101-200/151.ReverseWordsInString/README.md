
# problem 151 : ReverseWordsInString

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/151.ReverseWordsInString/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int pos = 0;
        while (true) {
            pos = s.find_first_not_of(' ', pos);    
            if (pos == string::npos)
                break;
            st.push(s.substr(pos, s.find(' ', pos) - pos));    
            pos = s.find(' ', pos);   
        }
        string out;
        while (!st.empty()) {
            out += st.top() + " ";
            st.pop();
        }
        out.pop_back();   
        return out;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ReverseWords(string s) {
        String result;
        s = s + " ";
        int length = s.Length;
        StringBuilder sb = new StringBuilder();
        Stack<char> stack = new Stack<char>();
        for (int i = length - 1; i >= 0; i--) {
            while (s[i] == ' ') {
                while (stack.Count != 0) {
                    sb.Append(stack.Pop());
                }
                if (i == 0)
                    break;
                i--;
            }
            if (s[i] != ' ') {
                if (i != length - 1 && s[i + 1] == ' ') {
                    stack.Push(' ');
                }
                stack.Push(s[i]);
                if (i == 0) {
                    while (stack.Count != 0) {
                        sb.Append(stack.Pop());
                    }
                    break;
                }
            }
        }
        int sblength = sb.Length;
        if (sblength != 0) {
            result = sb.ToString().Substring(0, sblength - 1);
        } else {
            result = "";
        }
        return result;
    }
}

```

## Java Solution

```java

class Solution {
    public String reverseWords(String s) {
        String result;
        s = s.concat(" ");
        int length = s.length();
        StringBuffer sb = new StringBuffer();
        Stack stack = new Stack();
        for (int i = length - 1; i >= 0; i--) {
            while (s.charAt(i) == ' ') {
                while (stack.empty() != true) {
                    sb.append(stack.pop());
                }
                if (i == 0)
                    break;
                i--;
            }
            if (s.charAt(i) != ' ') {
                if (i != length - 1 && s.charAt(i + 1) == ' ') {
                    stack.push(' ');
                }
                stack.push(s.charAt(i));
                if (i == 0) {
                    while (stack.empty() != true) {
                        sb.append(stack.pop());
                    }
                    break;
                }
            }
        }
        int sblength = sb.length();
        if (sblength != 0) {
            result = sb.substring(0, sblength - 1);
        } else {
            result = "";
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def reverseWords(self, set):
        return ' '.join(set.split()[::-1])

```


