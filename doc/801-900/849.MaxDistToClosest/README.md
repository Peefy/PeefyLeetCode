
# problem 849 : MaxDistToClosest

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/849.MaxDistToClosest/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int count = 0;
        int maxcount = 0;
        int firstindex = 0;   
        for(size_t i = 0; i < seats.size(); i++){
            if (seats[i] == 1){
                firstindex = i;
                break;
            }    
        }
        for(size_t i = 0; i < seats.size(); i++){
            if (seats[i] == 1){
                if (count > maxcount)
                    maxcount = count;
                count = 0;
            }
            else
                ++count;
        }
        return max((maxcount + 1) / 2, max(count, firstindex));
    }
};


```

## C# Solution

```csharp

public class Solution {
    public int MaxDistToClosest(int[] seats) {
        int count = 0;
        int maxcount = 0;
        int firstindex = 0;   
        for(int i = 0; i < seats.Length; i++){
            if (seats[i] == 1){
                firstindex = i;
                break;
            }    
        }
        for(int i = 0; i < seats.Length; i++){
            if (seats[i] == 1){
                if (count > maxcount)
                    maxcount = count;
                count = 0;
            }
            else
                ++count;
        }
        return Math.Max((maxcount + 1) / 2, Math.Max(count, firstindex));
    }
}

```

## Java Solution

```java

class Solution {
    public int maxDistToClosest(int[] seats) {
        int count = 0;
        int maxcount = 0;
        int firstindex = 0;   
        for(int i = 0; i < seats.length; i++){
            if (seats[i] == 1){
                firstindex = i;
                break;
            }    
        }
        for(int i = 0; i < seats.length; i++){
            if (seats[i] == 1){
                if (count > maxcount)
                    maxcount = count;
                count = 0;
            }
            else
                ++count;
        }
        return Math.max((maxcount + 1) / 2, Math.max(count, firstindex));
    }
}

```

## Python Solution

```python

class Solution:
    def maxDistToClosest(self, seats):
        """
        :type seats: List[int]
        :rtype: int
        """
        count = 0
        maxcount = 0
        for i, seat in enumerate(seats):
            if seat == 1:
                if count > maxcount:
                    maxcount = count
                count = 0
            else:
                count += 1
        return max((maxcount + 1) // 2, count, seats.index(1))

```





