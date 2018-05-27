
# problem 20 : Valid Parentheses

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/20.ValidParentheses/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    public:
    bool isValid(string s) {
        stack<char> cstack;
        for(auto c : s){
            if(c == '(' || c == '[' || c == '{'){
                cstack.push(c);
            }
            else{
                if(cstack.empty()){
                    return false;
                }
                else{
                    auto last = cstack.top();
                    if((last == '(' && c == ')') || 
                        (last == '[' && c == ']') ||
                        (last == '{' && c == '}')){
                            cstack.pop();
                        }
                    else{
                        return false;
                    }
                }
            }
        }
        return cstack.empty();
    }
};

```

## C# Solution

```csharp

public class Solution
    {
        public bool IsValid(string s)
        {
            var n = s.Length;
            // 开辟一个数组充当stack
            char[] a = new char[n / 2 + 1];
            var top = 0;
            for (var i = 0; i < n; ++i)
            {
                var c = s[i];
                switch (c)
                {
                    case '(':
                    case '{':
                    case '[':
                        a[top++] = c;
                        if (top >= n / 2 + 1)
                            return false;
                        break;
                    case ')':
                        if (top > 0)
                            if (a[top - 1] == '(')
                            {
                                top--;
                                break;
                            }
                        return false;
                    case '}':
                        if (top > 0)
                            if (a[top - 1] == '{')
                            {
                                top--;
                                break;
                            }
                        return false;
                    case ']':
                        if (top > 0)
                            if (a[top - 1] == '[')
                            {
                                top--;
                                break;
                            }
                        return false;

                    default:
                        return false;
                }
            }
            return !(top > 0);
        }

    }

```

## Java Solution

```java

public class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        int n = s.length();
        if(n % 2 == 1){
            return false;
        }
        for(int i = 0;i < n; ++i){
            Character c = s.charAt(i);
            if(c == '(' || c == '[' || c == '{'){
                stack.push(c);
            }
            else{
                if(c == ')' || c == ']' || c == '}'){
                    if(stack.empty() == true)
                        return false;
                    Character last = stack.pop();
                    if(last == '(' && c == ')'){
                        continue;
                    }
                    if(last == '[' && c == ']'){
                        continue;
                    }
                    if(last == '{' && c == '}'){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return stack.empty();
    }
}

```

## Python Solution

```python
class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        brakets = "()[]{}"
        index = []
        n = len(s)
        if n % 2 == 1:
            return False 
        for i in range(n):
            c = s[i]
            index.append(brakets.index(c))
        i = 0
        while i < len(index) - 1:
            one = index[i]
            two = index[i + 1]
            if one + 1 == two:
                index.pop(i)
                index.pop(i)
                i = 0
            else:
                i += 1
        if len(index) == 0:
            return True
        return False

```


