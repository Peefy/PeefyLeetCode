
# problem 821 : ShortestToChar

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/821.ShortestToChar/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        deque<int> indexlist;
        vector<int> r;   
        int j = 1;
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S[i])
                indexlist.push_back(i);
        }
        indexlist.push_front(-10000);
        indexlist.push_back(10000); 
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S[i]){
                r.push_back(0);
                ++j;
            }
            else
                r.push_back(min(i - indexlist[j - 1], indexlist[j] - i));
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] ShortestToChar(string S, char C) {
        var indexlist = new List<int>();
        int[] r = new int[S.Length];   
        int j = 1;
        for (int i = 0; i < S.Length; i++)
        {
            if (C == S[i])
                indexlist.Add(i);
        }
        indexlist.Insert(0, -10000);
        indexlist.Add(10000); 
        for (int i = 0; i < S.Length; i++)
        {
            if (C == S[i]){
                ++j;
            }
            else
                r[i] = Math.Min(i - indexlist[j - 1], indexlist[j] - i);
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public int[] shortestToChar(String S, char C) {
        LinkedList<Integer> indexlist = new LinkedList<>();
        int[] r = new int[S.length()];   
        int j = 1;
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S.charAt(i))
                indexlist.addLast(i);
        }
        indexlist.addFirst(-10000);
        indexlist.addLast(10000); 
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S.charAt(i)){
                ++j;
            }
            else
                r[i] = Math.min(i - indexlist.get(j - 1), indexlist.get(j) - i);
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def shortestToChar(self, S, C):
        """
        :type S: str
        :type C: str
        :rtype: List[int]
        """
        indexlist = []
        r = []
        for i, s in enumerate(S):
            if C == s:
                indexlist.append(i)
        indexlist = [-10000] + indexlist + [10000]
        j = 1
        for i, s in enumerate(S):
            if C == s:
                r.append(0)
                j += 1
            else:           
                r.append(min(i - indexlist[j - 1], indexlist[j] - i))   
        return r

```





