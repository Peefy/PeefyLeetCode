
# problem 844 : BackspaceCompare

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/844.BackspaceCompare/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<char> build(string str){
        vector<char> stack;
        for (char s : str){
            if (s == '#'){
                if (stack.size() > 0)
                    stack.pop_back();
            }
            else
                stack.push_back(s);
        }
        return stack;
    }

    bool backspaceCompare(string S, string T) {
        vector<char> s_stack = build(S);
        vector<char> t_stack = build(T);
        if (s_stack.size() != t_stack.size())
            return false;
        for (int i = 0; i < s_stack.size(); i++) {
            if (s_stack[i] != t_stack[i])
                return false;
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    private Stack<char> build(String str){
        Stack<char> stack = new Stack<char>();
        foreach (char s in str){
            if (s == '#'){
                if (stack.Count > 0)
                    stack.Pop();
            }
            else
                stack.Push(s);
        }
        return stack;
    }
    public bool BackspaceCompare(string S, string T) {
        Stack<char> s_stack = build(S);
        Stack<char> t_stack = build(T);
        if (s_stack.Count != t_stack.Count)
            return false;
        for (int i = 0; i < s_stack.Count; i++) {
            if (s_stack.ElementAt(i) != t_stack.ElementAt(i))
                return false;
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    private LinkedList<Character> build(String str){
        LinkedList<Character> stack = new LinkedList<>();
        for (char s : str.toCharArray()){
            if (s == '#'){
                if (stack.size() > 0)
                    stack.removeLast();
            }
            else
                stack.add(s);
        }
        return stack;
    }

    public boolean backspaceCompare(String S, String T) {
        return build(S).equals(build(T));
    }
}

```

## Python Solution

```python

class Solution:
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        s_stack = []
        t_stack = []
        for s in S:
            if s == '#':
                if len(s_stack) > 0:
                    s_stack.pop()
            else:
                s_stack.append(s)
        for t in T:
            if t == '#':
                if len(t_stack) > 0:
                    t_stack.pop()
            else:
                t_stack.append(t)
        return s_stack == t_stack

```





