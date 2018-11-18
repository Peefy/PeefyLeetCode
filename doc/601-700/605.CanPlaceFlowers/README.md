
# problem 605 : CanPlaceFlowers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/605.CanPlaceFlowers/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int length = flowerbed.size();
        flowerbed.push_back(0);
        int i = 0;
        while (i < length){         
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {              
                count += 1;
                i += 1;            
            }
            else if (flowerbed[i] == 1){
                i += 1;
            }
            i += 1;
        }
        return count >= n;
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public bool CanPlaceFlowers(int[] flowerbed, int n)
    {
        int count = 0;
        int length = flowerbed.Length;
        int i = 0;
        while (i < length)
        {
            if (flowerbed[i] == 0)
            {
                if (i == length - 1)
                {
                    count += 1;
                    i += 1;
                }
                else if (flowerbed[i + 1] == 0)
                {
                    count += 1;
                    i += 1;
                }
            }
            else if (flowerbed[i] == 1)
            {
                i += 1;
            }
            if (count >= n)
                return true;
            i += 1;
        }
        return count >= n;
    }
}

```

## Java Solution

```java

public class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int i = 0, count = 0;
        while (i < flowerbed.length) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.length - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i++] = 1;
                count++;
            }
             if(count>=n)
                return true;
            i++;
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        count = 0
        length = len(flowerbed)
        i = 0
        while i < length:
            if flowerbed[i] == 0:
                if i == length - 1:
                    count += 1
                    i += 1
                elif flowerbed[i + 1] == 0:
                    count += 1
                    i += 1
            elif flowerbed[i] == 1:
                i += 1
            i += 1
        return count >= n

```





