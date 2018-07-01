
# problem 122 : MaxProfit II

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/122.MaxProfitII/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        auto profit = 0;  
        for(int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];
        }
        return profit;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int MaxProfit(int[] prices)
        {
            int profit = 0;
            for (int i = 1; i < prices.Length; ++i)
            {
                if (prices[i] > prices[i - 1])
                {
                    profit += prices[i] - prices[i - 1];
                }
            }
            return profit;
        }
    }
```

## Java Solution

```java
class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        for (int i = 1;i < prices.length;++i){
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }      
        }
        return profit;
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
        maxprofit = 0
        minprice = prices[0]
        r_maxprofit = 0
        for i in range(n):
            if prices[i] < minprice:
                minprice = prices[i]                      
            if prices[i] - minprice > maxprofit:
                maxprofit = prices[i] - minprice
                r_maxprofit += maxprofit
                maxprofit = 0
                minprice = prices[i]
        return r_maxprofit

```


