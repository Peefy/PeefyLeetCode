
# problem 134 : GasStation

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/134.GasStation/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int nowsum = 0;
        int start = 0;
        for (int i = 0; i < gas.size(); i++) {
            total += (gas[i] - cost[i]);
            if (nowsum < 0){
                nowsum = gas[i] - cost[i];
                start = i;
            }
            else
                nowsum += (gas[i] - cost[i]);
        }
        return total >= 0 ? start : -1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CanCompleteCircuit(int[] gas, int[] cost) {
        int total = 0;
        int nowsum = 0;
        int start = 0;
        for (int i = 0; i < gas.Length; i++) {
            total += (gas[i] - cost[i]);
            if (nowsum < 0){
                nowsum = gas[i] - cost[i];
                start = i;
            }
            else
                nowsum += (gas[i] - cost[i]);
        }
        return total >= 0 ? start : -1;
    }
}

```

## Java Solution

```java

class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int total = 0;
        int nowsum = 0;
        int start = 0;
        for (int i = 0; i < gas.length; i++) {
            total += (gas[i] - cost[i]);
            if (nowsum < 0){
                nowsum = gas[i] - cost[i];
                start = i;
            }
            else
                nowsum += (gas[i] - cost[i]);
        }
        return total >= 0 ? start : -1;
    }
}

```

## Python Solution

```python

class Solution:
    def canCompleteCircuit(self, gas, cost):
        sum = 0
        total = 0
        start = 0
        for i in range(len(gas)):
            total += (gas[i] - cost[i])
            if sum < 0:
                sum = gas[i] - cost[i]
                start = i
            else:
                sum += (gas[i] - cost[i])
        return start if total >= 0 else -1 

```


