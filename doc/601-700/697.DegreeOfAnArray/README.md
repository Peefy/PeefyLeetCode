
# problem 697 : DegreeOfAnArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/696.CountBinarySubstrings/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = vector<int>{1, i, i}; 
            }
            else{
                hash[nums[i]][0] += 1;
                hash[nums[i]][2] = i;
            }
        }
        int maxcount = 0;
        int minlength = 50000;
        for (auto h : hash){
            auto counts = h.second;
            int dis = counts[2] - counts[1] + 1;
            if (counts[0] > maxcount){
                maxcount = counts[0];
                minlength = dis;
            }
            else if (counts[0] == maxcount && dis < minlength)
                minlength = dis;
        }
        return minlength;
    }
};

```

## C# Solution

```csharp

public class Solution {
    
    public class Statistics {
        public int Count { get; set; }

        public int StartIndex { get; set; }

        public int EndIndex { get; set; }
    }
    
    public int FindShortestSubArray(int[] nums) {
        var dic = new Dictionary<int, Statistics>();

        for(int i = 0; i < nums.Length; i++) {
            if(dic.ContainsKey(nums[i])) {
                dic[nums[i]].Count++;
                dic[nums[i]].EndIndex = i;
            } else {
                dic.Add(nums[i], new Statistics {
                    Count = 1,
                    StartIndex = i,
                    EndIndex = i
                });
            }
        }

        var order = dic.OrderByDescending(n => n.Value.Count).ToList();

        int maxCount = order[0].Value.Count;

        int minLength = int.MaxValue;

        order.Where(n => n.Value.Count == maxCount)
             .ToList()
             .ForEach(n => minLength = Math.Min(minLength, n.Value.EndIndex - n.Value.StartIndex + 1));

        return minLength;
    }
}

```

## Java Solution

```java

class Solution {
    public int findShortestSubArray(int[] nums) {
        HashMap<Integer, Integer[]> hash = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (hash.containsKey(nums[i]) == false){
                hash.put(nums[i], new Integer[]{1, i, i});
            }
            else{
                Integer[] counts = hash.get(nums[i]);
                counts[0] += 1;
                counts[2] = i;
            }
        }
        int maxcount = 0;
        int minlength = 50000;
        for (Integer[] counts : hash.values()){
            int dis = counts[2] - counts[1] + 1;
            if (counts[0] > maxcount){
                maxcount = counts[0];
                minlength = dis;
            }
            else if (counts[0] == maxcount && dis < minlength)
                minlength = dis;
        }
        return minlength;
    }
}

```

## Python Solution

```python

class Solution:
    def findShortestSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d = {}
        for i in range(len(nums)):
            if nums[i] not in d:
                d[nums[i]] = (1, i, i)
            else:
                count, start, end = d[nums[i]]
                d[nums[i]] = (count + 1, start, i)
        maxcount = 0
        minlength = 50000
        for counts in d.values():
            count, start, end = counts
            if count > maxcount:
                maxcount = count
                minlength = end - start + 1
            elif count == maxcount:
                minlength = min(minlength, end - start + 1)
        return minlength

```





