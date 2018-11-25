
# problem 657 : RobotReturnToOrigin

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/657.RobotReturnToOrigin/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool judgeCircle(string moves) {
        int lcount = 0;
        int rcount = 0;
        int ucount = 0;
        int dcount = 0;
        for (char c : moves) {
            if (c == 'L')
                lcount++;
            else if (c == 'R')
                rcount++;
            else if (c == 'U')
                ucount++;
            else if (c == 'D'){
                dcount++;
            }       
        }
        return lcount == rcount && ucount == dcount;
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    public bool JudgeCircle(string moves) 
    {
        int lcount = 0;
        int rcount = 0;
        int ucount = 0;
        int dcount = 0;
        foreach (char c in moves) {
            if (c == 'L')
                lcount++;
            else if (c == 'R')
                rcount++;
            else if (c == 'U')
                ucount++;
            else if (c == 'D'){
                dcount++;
            }       
        }
        return lcount == rcount && ucount == dcount;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean judgeCircle(String moves) {
        int lcount = 0;
        int rcount = 0;
        int ucount = 0;
        int dcount = 0;
        for (char c : moves.toCharArray()) {
            if (c == 'L')
                lcount++;
            else if (c == 'R')
                rcount++;
            else if (c == 'U')
                ucount++;
            else if (c == 'D'){
                dcount++;
            }       
        }
        return lcount == rcount && ucount == dcount;
    }
}

```

## Python Solution

```python


from collections import Counter

class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        counter = Counter(moves)
        return counter['L'] == counter['R'] and counter['U'] == counter['D']

```





