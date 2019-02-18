
# Problem 24 : ListSwapPairs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/24.ListSwapPairs/problem.png"/>

回溯算法+括号匹配

## C++ Solution

```c++

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        recursive(n, 0, 0, res, "");
        return res;
    }

    void recursive(int n, int count1, int count2, vector<string>& res, string ans){
        if (count1 > n || count2 > n) 
            return;
        if (count1 == n && count2 == n)  
            res.push_back(ans);
        if (count1 >= count2){
            auto ans1 = ans;
            recursive(n, count1+1, count2, res, ans+"(");
            recursive(n, count1, count2+1, res, ans1+")");
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<string> GenerateParenthesis(int n) {
        List<string> res = new List<string>();
        recursive(n, 0, 0, res, "");
        return res;
    }

    
    void recursive(int n, int count1, int count2, List<string> res, string ans){
        if (count1 > n || count2 > n) 
            return;
        if (count1 == n && count2 == n)  
            res.Add(ans);
        if (count1 >= count2){
            string ans1 = ans;
            recursive(n, count1+1, count2, res, ans+"(");
            recursive(n, count1, count2+1, res, ans1+")");
        }
    }
}

```

## Java Solution

```java

class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new LinkedList<>();
        recursive(n, 0, 0, res, "");
        return res;
    }

    void recursive(int n, int count1, int count2, List<String> res, String ans){
        if (count1 > n || count2 > n) 
            return;
        if (count1 == n && count2 == n)  
            res.add(ans);
        if (count1 >= count2){
            String ans1 = ans;
            recursive(n, count1+1, count2, res, ans+"(");
            recursive(n, count1, count2+1, res, ans1+")");
        }
    }
}

```

## Python Solution

```python

class Solution:
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []
        def recursive(n, count1, count2, res, ans):
            if count1 > n or count2 > n: 
                return
            if count1 == n and count2 == n:  
                res.append(ans)
            if count1 >= count2:
                ans1 = ans
                recursive(n, count1+1, count2, res, ans+"(")
                recursive(n, count1, count2+1, res, ans1+")")
        recursive(n, 0, 0, res, "")
        return res

```


