
# problem 717 : IsOneBitCharacter

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/717.IsOneBitCharacter/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        while (i < n - 1) 
            i += bits[i] == 1 ? 2 : 1;
        return i != n;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsOneBitCharacter(int[] bits) {
        int size = bits.Length;
        int i = 0;
        for(; i < size - 1; ++i){
            if (bits[i] == 1)
                ++i;
        }
        return i == size - 1;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int size = bits.length;
        int i = 0;
        for(; i < size - 1; ++i){
            if (bits[i] == 1)
                ++i;
        }
        return i == size - 1;
    }
}

```

## Python Solution

```python

class Solution:
    def isOneBitCharacter(self, bits):
        """
        :type bits: List[int]
        :rtype: bool
        """
        i = 0
        n = len(bits)
        while i < n - 1:
            if bits[i] == 1:
                i += 2
            else:
                i += 1
        return i != n

```





