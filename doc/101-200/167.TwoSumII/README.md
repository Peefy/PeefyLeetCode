
# problem 167 : TwoSumII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/167.TwoSumII/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;
        while(left < right){
            if (numbers[left] + numbers[right] == target)
            {
                return vector<int>{left + 1, right + 1};
            }
            else if(numbers[left] + numbers[right] > target)
            {
                right -= 1;
            }
            else if (numbers[left] + numbers[right] < target)
            {
                left += 1;
            }
        }
        return vector<int>{};
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int[] TwoSum(int[] numbers, int target)
        {
            var left = 0;
            var right = numbers.Length;
            while (left < right)
            {
                if (numbers[left] + numbers[right] == target)
                    return new int[]{left + 1, right + 1};
                else if(numbers[left] + numbers[right] < target)
                    ++left;
                else if (numbers[left] + numbers[right] > target)
                    --right;
            }
            return null;
        }
    }

```

## Java Solution

```java

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        int[] r = new int[2];
        for (int i = 0; i < numbers.length; i++) {
            int sub = target - numbers[i];
            if(hash.containsKey(sub) == true)
            {
                r[0] = hash.get(sub) + 1;
                r[1] = i + 1;
                return r;
            }
            else
            {
                hash.put(numbers[i], i);
            }
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(numbers)
        d = {}
        index = []
        if n < 2:
            return None
        d[numbers[0]] = 0
        for i in range(1, n):
            sub = target - numbers[i]
            if sub in d.keys():
                index.append(d[sub] + 1)
                index.append(i + 1)
                return index
            else:
                d[numbers[i]] = i
        return None

```


