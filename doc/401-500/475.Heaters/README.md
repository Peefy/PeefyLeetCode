
# problem 475 : Heaters

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/475.Heaters/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int n = heaters.size();
        int i = 0, length = 0;
        for (int house : houses) {
            while ((i >= n - 1 ? INT32_MAX : abs(heaters[i + 1] - house)) <= abs(heaters[i] - house)) {
                i++;
            }
            length = max(length, abs((i >= n ? INT32_MAX : heaters[i]) - house));
        }
        return length;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindRadius(int[] houses, int[] heaters) {
        Array.Sort(houses);
        Array.Sort(heaters);
        int n = heaters.Length;
        int i = 0, length = 0;
        foreach (var house in houses) {
            while ((i >= n - 1 ? int.MaxValue : Math.Abs(heaters[i + 1] - house)) <= Math.Abs(heaters[i] - house)) {
                i++;
            }
            length = Math.Max(length, Math.Abs((i >= n ? int.MaxValue : heaters[i]) - house));
        }
        return length;
    }
}

```

## Java Solution

```java

class Solution {
    public int findRadius(int[] houses, int[] heaters) {
        Arrays.sort(houses);
        Arrays.sort(heaters);
        int n = heaters.length;
        int i = 0, length = 0;
        for (int house : houses) {
            while ((i >= n - 1 ? Integer.MAX_VALUE : Math.abs(heaters[i + 1] - house)) <= Math.abs(heaters[i] - house)) {
                i++;
            }
            length = Math.max(length, Math.abs((i >= n ? Integer.MAX_VALUE : heaters[i]) - house));
        }
        return length;
    }
}

```

## Python Solution

```python

class Solution:
    def findRadius(self, houses, heaters):
        """
        :type houses: List[int]
        :type heaters: List[int]
        :rtype: int
        """
        houses = sorted(set(houses))
        heaters = sorted(set(heaters))
        m = len(houses)
        n = len(heaters)
        i, j = 0, 0
        length = 0
        while i < m and j < n:
            now = abs(houses[i] - heaters[j])
            half = 10e9 if j == n - 1 else abs(heaters[j + 1] - houses[i])
            if now >= length and now <= half:
                length = now
                i += 1
            elif now <= half:
                i += 1
            else:
                j += 1
        return length

```





