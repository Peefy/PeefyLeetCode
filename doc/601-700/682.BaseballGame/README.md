
# problem 682 : BaseballGame

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/682.BaseballGame/problem.png"/>

c++代码为最优解

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> stack;
        for (string i : ops)
            if (i == "+")
                stack.push_back(stack[stack.size() - 1] + stack[stack.size() - 2]);
            else if (i == "C")
                stack.pop_back();
            else if (i == "D")
                stack.push_back(2 * stack[stack.size() - 1]);
            else
                stack.push_back(atoi(i.c_str()));
        return accumulate(stack.begin(), stack.end(), 0);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CalPoints(string[] ops) {
        var stack = new Stack<int>();
        foreach (var i in ops)
            if (i == "+")
                stack.Push(stack.ElementAt(stack.Count - 1) + stack.ElementAt(stack.Count - 2));     
            else if (i == "C")
                stack.Pop();
            else if (i == "D")
                stack.Push(2 * stack.ElementAt(stack.Count - 1));
            else
                stack.Push(int.Parse(i));
        return stack.Sum();
    }
}

```

## Java Solution

```java

class Solution {
    public int calPoints(String[] ops) {
        LinkedList<Integer> stack = new LinkedList<>();
        for (String i : ops)
            if (i == "+")
                stack.add(stack.getLast() + stack.get(stack.size() - 2));
            else if (i == "C")
                stack.removeLast();
            else if (i == "D")
                stack.add(2 * stack.getLast());
            else
                stack.add(Integer.parseInt(i));
        int sum = 0;
        for (int var : stack) {
            sum += var;
        }
        return sum;
    }
}

```

## Python Solution

```python

class Solution:
    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        opsstack = []
        point = 0
        for o in ops:
            p = 0
            if o == '+':
                p = opsstack[-1] + opsstack[-2]
                point += p
                opsstack.append(p)
            elif o == 'C':
                p = opsstack[-1]
                opsstack.pop()
                point -= p
            elif o == 'D':
                p = opsstack[-1] * 2
                point += p
                opsstack.append(p)
            else:
                p = int(o)
                point += p
                opsstack.append(p)
        return point

```





