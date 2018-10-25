
# problem 492 : ConstructRectangle

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/492.ConstructRectangle/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> constructRectangle(int area) {
        for (int i = (int)sqrt(area); i > 0; i--) {
            if (area % i == 0)
                return vector<int>{area / i, i};
        }
        return vector<int>{area, 1};
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    public int[] ConstructRectangle(int area) 
    {
        for (int i = (int)Math.Sqrt(area); i > 0; i--) 
        {
            if (area % i == 0)
                return new int[]{area / i, i};
        }
        return new int[]{area, 1};
    }
}

```

## Java Solution

```java

class Solution {
    public int[] constructRectangle(int area) {
        int sqrt = (int)Math.sqrt(area) + 1;
        for (int i = 0; i < sqrt; i++) {
            int j = sqrt - i - 1;
            if (area % j == 0){
                return new int[]{area / j, j};
            }
        }
        return new int[]{1, 1};
    }
}

```

## Python Solution

```python

class Solution:
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        primes = 1
        n = area
        index = int(n ** 0.5)
        while index >= 1:
            if area % index == 0:
                factor = area // index 
                if factor >= index:
                    return [factor, index]
            index -= 1
        return [1, 1]

```





