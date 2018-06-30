
# problem 121 : MaxProfit

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/121.MaxProfit/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        auto n = prices.size();
        if (n == 0)
            return 0;
        auto minprice = prices[0];
        auto maxprofit = 0;  
        for(int i = 0; i < n; i++)
        {
            minprice = min(minprice, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int MaxProfit(int[] prices)
        {
            int n = prices.Length;
            if (n == 0)
                return 0;
            int minprice = prices[0];
            int maxprofit = 0;
            for (int i = 0; i < n; i++)
            {
                minprice = Math.Min(minprice, prices[i]);
                maxprofit = Math.Max(maxprofit, prices[i] - minprice);
            }
            return maxprofit;
        }
    }

```

## Java Solution

```java

class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        if (n == 0)
            return 0;
        int minprice = prices[0];
        int maxprofit = 0;
        for (int i = 0; i < n; i++) {
            minprice = Math.min(minprice, prices[i]);
            maxprofit = Math.max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
}

```

## Python Solution

```python

class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if prices is None:
            return 0
        n = len(prices)
        if n == 0:
            return 0
        minprice = prices[0]
        maxprofit = 0
        for i in range(n):
            if prices[i] < minprice:
                minprice = prices[i]
            maxprofit = max(prices[i] - minprice, maxprofit)
        return maxprofit

```


