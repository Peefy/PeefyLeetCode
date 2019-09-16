
# problem 227 : BasicCalculatorII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/227.BasicCalculatorII/problem.png"/>

## C++ Solution

```c++

class Solution{
public:
    int calculate(string s){
        stack<int> st;
        int n = s.size(), num = 0, res = 0;
        char op = '+';
        for (int i = 0; i < n; ++i){
            if (s[i] >= '0')
                num = num * 10 + (s[i] - '0');
            if ((s[i] < '0' && s[i] != ' ') || i == n - 1){
                if (op == '+')
                    st.push(num);
                if (op == '-')
                    st.push(-num);
                if (op == '*' || op == '/'){
                    int temp = (op == '*') ? st.top() * num : st.top() / num;
                    st.pop();
                    st.push(temp);
                }
                op = s[i];
                num = 0;
            }
        }
        while (!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int Calculate(string s) {
        Stack<int> st = new Stack<int>();
        int n = s.Length, num = 0, res = 0;
        char op = '+';
        for (int i = 0; i < n; ++i){
            if (s[i] >= '0')
                num = num * 10 + (s[i] - '0');
            if ((s[i] < '0' && s[i] != ' ') || i == n - 1){
                if (op == '+')
                    st.Push(num);
                if (op == '-')
                    st.Push(-num);
                if (op == '*' || op == '/'){
                    int temp = (op == '*') ? st.Peek() * num : st.Peek() / num;
                    st.Pop();
                    st.Push(temp);
                }
                op = s[i];
                num = 0;
            }
        }
        while (st.Count > 0){
            res += st.Pop();
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public int calculate(String s) {
        LinkedList<Integer> st = new LinkedList<>();
        int n = s.length(), num = 0, res = 0;
        char op = '+';
        for (int i = 0; i < n; ++i){
            if (s.charAt(i) >= '0')
                num = num * 10 + (s.charAt(i) - '0');
            if ((s.charAt(i) < '0' && s.charAt(i) != ' ') || i == n - 1){
                if (op == '+')
                    st.add(num);
                if (op == '-')
                    st.add(-num);
                if (op == '*' || op == '/'){
                    int temp = (op == '*') ? st.peekLast() * num : st.peekLast() / num;
                    st.removeLast();
                    st.add(temp);
                }
                op = s.charAt(i);
                num = 0;
            }
        }
        while (!st.isEmpty()){
            res += st.peekLast();
            st.removeLast();
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def calculate(self, s):
        s += "+0"
        stack = []
        num = 0
        sign = "+"
        for c in s:
            if c.isdigit():
                num = num * 10 + int(c)
            elif c in {"+", "-", "*", "/"}:
                if sign == "+":
                    stack.append(num)
                elif sign == "-":
                    stack.append(-num)
                elif sign == "*":
                    stack[-1] = stack[-1] * num
                elif sign == "/":
                    if stack[-1] < 0:
                        stack[-1] = -(-stack[-1] // num)
                    else:
                        stack[-1] = stack[-1] // num
                sign, num = c, 0
        return sum(stack)    

```




