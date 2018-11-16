
# problem 575 : Distribute Candies

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/575.DistributeCandies/problem.png"/>

## C++ Solution

```c++

static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int hash[200001] = {0};    
        int hashsize = 0;
        for (auto c : candies)
        {
            if (hash[c + 100000] == 0){
                hash[c + 100000] = 1;
                hashsize++;
            }
        }
        return min(hashsize, (int)candies.size() / 2);
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int DistributeCandies(int[] candies)
        {
            int[] hash = new int[200001];
            int hashsize = 0;
            foreach (var c in candies)
            {
                if (hash[c + 100000] == 0)
                {
                    hash[c + 100000] = 1;
                    hashsize++;
                }
            }
            return Math.Min(hashsize, candies.Length / 2);
        }
    }

```

## Java Solution

```java

class Solution {
    public int distributeCandies(int[] candies) {
        HashSet<Integer> hash = new HashSet<>();
        for (int candie : candies) {
            hash.add(candie);
        }
        return Math.min(hash.size(), candies.length / 2);
    }
}

```

## Python Solution

```python

class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        return min(len(set(candies)), len(candies) // 2)

```





