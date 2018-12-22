
# problem 868 : BinaryGap

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/868.BinaryGap/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int binaryGap(int N) {
        int dis = 0;
        int last = 0;
        int now = 1;
        while (N > 0){
            int bit = N & 0x01;
            if (bit == 1 && last == 0)
                last = now;
            else if (bit == 1){
                dis = max(dis, now - last);
                last = now;
            }
            N >>= 1;
            now += 1;
        }
        return dis;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int BinaryGap(int N) {
        int longest = 0, cur = -10000;
        while (N != 0) {
            if (N % 2 == 1) {
                ++cur;
                if (cur > longest)
                    longest = cur;
                cur = 0;
            } else {
                ++cur;
            }
            N >>= 1;
        }
        return longest;
    }
}

```

## Java Solution

```java

class Solution {
    public int binaryGap(int N) {
        int longest = 0, cur = -10000;
        while (N != 0) {
            if (N % 2 == 1) {
                ++cur;
                if (cur > longest)
                    longest = cur;
                cur = 0;
            } else {
                ++cur;
            }
            N >>>= 1;
        }
        return longest;
    }
}

```

## Python Solution

```python

class Solution:
    def binaryGap(self, N):
        """
        :type N: int
        :rtype: int
        """
        dis = 0
        last = 0
        now = 1
        while N > 0:
            bit = N & 0x01
            if bit == 1 and last == 0:
                last = now 
            elif bit == 1:
                dis = max(dis, now - last)
                last = now
            N >>= 1
            now += 1
        return dis

```





