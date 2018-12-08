
# problem 746 : MinCostClimbingStairs

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/746.MinCostClimbingStairs/problem.png"/>

DP 动态规划

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        if(len == 2){
            return min(cost[0], cost[1]);
        }
        for(int i = 2; i < cost.size(); i++){
            cost[i] = min(cost[i - 1], cost[i - 2]) + cost[i];
        }
        return min(cost[len - 1], cost[len - 2]);   
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MinCostClimbingStairs(int[] cost) {
        int len = cost.Length;
        if(len == 2){
            return Math.Min(cost[0], cost[1]);
        }
        for(int i = 2; i < cost.Length; i++){
            cost[i] = Math.Min(cost[i - 1], cost[i - 2]) + cost[i];
        }
        return Math.Min(cost[len - 1], cost[len - 2]);   
    }
}

```

## Java Solution

```java

class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int length = cost.length;
        if (length == 1)
            return cost[0];
        int i = 2;
        for (; i < length; i++) {
            cost[i] = cost[i] + Math.min(cost[i - 1], cost[i - 2]);
        }   	
        return Math.min(cost[i - 1], cost[i - 2]);
    }
}

```

## Python Solution

```python

class Solution:
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        p_2, p_1 = cost[0], cost[1] 
        for c in cost[2:]: 
            p_2, p_1 = p_1, min(p_1 + c, p_2 + c) 
        return min(p_2, p_1)

```





