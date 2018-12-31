
# problem 942 : DiStringMatch

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/942.DiStringMatch/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> diStringMatch(string S) {
        int left = 0;
        int right = S.size();
        vector<int> r;
        for (char s : S){
            if (s == 'D'){
                r.push_back(right);
                right -= 1;
            }
            else{
                r.push_back(left);
                left += 1;
            }
        }
        r.push_back(left);
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] DiStringMatch(string S) {
        int left = 0;
        int right = S.Length;
        List<int> r = new List<int>();
        foreach (char s in S){
            if (s == 'D'){
                r.Add(right);
                right -= 1;
            }
            else{
                r.Add(left);
                left += 1;
            }
        }
        r.Add(left);
        return r.ToArray();
    }
}

```

## Java Solution

```java

class Solution {
    public int[] diStringMatch(String S) {
        int left = 0;
        int right = S.length();
        int[] r = new int[right + 1];
        int i = 0;
        for (char s : S.toCharArray()){
            if (s == 'D'){
                r[i++] = right;
                right -= 1;
            }
            else{
                r[i++] = left;
                left += 1;
            }
        }
        r[i] = left;
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def diStringMatch(self, S):
        """
        :type S: str
        :rtype: List[int]
        """
        left = 0
        right = len(S)
        r = []
        for s in S:
            if s == 'D':
                r.append(right)
                right -= 1
            elif s == 'I':
                r.append(left)
                left += 1
        r.append(left)
        return r

```





