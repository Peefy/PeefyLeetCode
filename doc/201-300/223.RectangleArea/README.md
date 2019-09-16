
# problem 223 : RectangleArea

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/223.RectangleArea/problem.png"/>

## C++ Solution

```c++

class Solution{
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H){
        int area1 = abs(C - A) * abs(D - B);
        int area2 = abs(G - E) * abs(H - F);
        int x1 = max(A, E), x2 = min(C, G);
        int y1 = max(B, F), y2 = min(D, H);
        if (x2 <= x1 || y2 <= y1)
            return area1 + area2;
        else
            return area1 - (x2 - x1) * (y2 - y1) + area2;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if (E > C || A > G)
            return (C - A) * (D - B) + (G - E) * (H - F);
        if (F > D || H < B)
            return (C - A) * (D - B) + (G - E) * (H - F);
        int length = Math.Min(C, G) - Math.Max(A, E);
        int width = Math.Min(D, H) - Math.Max(B, F);
        return (C - A) * (D - B) + (G - E) * (H - F) - length * width;
    }
}

```

## Java Solution

```java

class Solution {
    public int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if (E > C || A > G)
            return (C - A) * (D - B) + (G - E) * (H - F);
        if (F > D || H < B)
            return (C - A) * (D - B) + (G - E) * (H - F);
        int length = Math.min(C, G) - Math.max(A, E);
        int width = Math.min(D, H) - Math.max(B, F);
        return (C - A) * (D - B) + (G - E) * (H - F) - length * width;
    }
}

```

## Python Solution

```python

class Solution:
    def computeArea(self, A, B, C, D, E, F, G, H):
        if E > C or A > G: 
            return (C - A) * (D - B) + (G - E) * (H - F)
        if F > D or H < B: 
            return (C - A) * (D - B) + (G - E) * (H - F)
        length = min(C, G) - max(A, E)
        width = min(D, H) - max(B, F)
        return (C - A) * (D - B) + (G - E) * (H - F) - length * width    

```




