
# problem 836 : RectangleOverlap

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/836.RectangleOverlap/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return ((int64_t)rec2[0] - (int64_t)rec1[2]) * ((int64_t)rec2[2] - (int64_t)rec1[0]) < 0 && (
            (int64_t)rec2[1] - (int64_t)rec1[3]) * ((int64_t)rec2[3] - (int64_t)rec1[1]) < 0;   
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsRectangleOverlap(int[] rec1, int[] rec2) {
        return ((long)rec2[0] - (long)rec1[2]) * ((long)rec2[2] - (long)rec1[0]) < 0 && (
            (long)rec2[1] - (long)rec1[3]) * ((long)rec2[3] - (long)rec1[1]) < 0;    
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
        return ((long)rec2[0] - (long)rec1[2]) * ((long)rec2[2] - (long)rec1[0]) < 0 && (
            (long)rec2[1] - (long)rec1[3]) * ((long)rec2[3] - (long)rec1[1]) < 0;    
    }
}

```

## Python Solution

```python

class Solution:
    def isRectangleOverlap(self, rec1, rec2):
        """
        :type rec1: List[int]
        :type rec2: List[int]
        :rtype: bool
        """
        return (rec2[0] - rec1[2]) * (rec2[2] - rec1[0]) < 0 and (
            rec2[1] - rec1[3]) * (rec2[3] - rec1[1]) < 0    

```





