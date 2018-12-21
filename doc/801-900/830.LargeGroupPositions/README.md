
# problem 830 : LargeGroupPositions

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/830.LargeGroupPositions/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> r;
        S += ' ';
        int ISBIG = 3;
        int lastindex = 0;
        int count = 0;
        for (int i = 0; i < S.length() - 1; i++) {
            if (S[i] != S[i + 1]){
                if (count >= ISBIG - 1){
                    r.push_back(vector<int>{lastindex, lastindex + count});
                }
                count = 0;
                lastindex = i + 1;
            }
            else
                count += 1;
        }           
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<int>> LargeGroupPositions(string S) {
        List<IList<int>> r = new List<IList<int>>();
        S += ' ';
        int ISBIG = 3;
        int lastindex = 0;
        int count = 0;
        for (int i = 0; i < S.Length - 1; i++) {
            if (S[i] != S[i + 1]){
                if (count >= ISBIG - 1){
                    r.Add(new List<int>{lastindex, lastindex + count});
                }
                count = 0;
                lastindex = i + 1;
            }
            else
                count += 1;
        }           
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<Integer>> largeGroupPositions(String S) {
        LinkedList<List<Integer>> r = new LinkedList<>();
        S += ' ';
        int ISBIG = 3;
        int lastindex = 0;
        int count = 0;
        for (int i = 0; i < S.length() - 1; i++) {
            if (S.charAt(i) != S.charAt(i + 1)){
                if (count >= ISBIG - 1){
                    LinkedList<Integer> res = new LinkedList<>();
                    res.add(lastindex);
                    res.add(lastindex + count);
                    r.add(res);
                }
                count = 0;
                lastindex = i + 1;
            }
            else
                count += 1;
        }           
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def largeGroupPositions(self, S):
        """
        :type S: str
        :rtype: List[List[int]]
        """
        r = []
        S += ' '
        ISBIG = 3
        lastindex = 0
        count = 0
        for i in range(len(S) - 1):
            if S[i] != S[i + 1]:
                if count >= ISBIG - 1:
                    r.append([lastindex, lastindex + count])
                count = 0
                lastindex = i + 1
            else:
                count += 1
        return r

```





