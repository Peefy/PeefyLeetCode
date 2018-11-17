
# problem 599 : MinimumIndexSumOfTwoLists

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/599.MinimumIndexSumOfTwoLists/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int m = list1.size();
        int n = list2.size();
        int min = m + n;
        unordered_map<string, int> hash;
        vector<string> res;
        for (int i = 0; i < n; i++) {
            hash[list2[i]] = i;
        }
        for (int i = 0; i < m; i++) {
            if (hash.find(list1[i]) != hash.end()) {
                if (min > i + hash[list1[i]]) {
                    res.clear();
                    res.push_back(list1[i]);
                    min = i + hash[list1[i]];
                }
                else if(min == i + hash[list1[i]]){
                    res.push_back(list1[i]);
                }
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public string[] FindRestaurant(string[] list1, string[] list2)
    {
        int m = list1.Length;
        int n = list2.Length;
        int min = m + n;
        var hash = new Dictionary<string, int>();
        var res = new List<string>();
        for (int i = 0; i < n; i++)
        {
            hash.Add(list2[i], i);
        }
        for (int i = 0; i < m; i++)
        {
            if (hash.ContainsKey(list1[i]))
            {
                if (min > i + hash[list1[i]])
                {
                    res.Clear();
                    res.Add(list1[i]);
                    min = i + hash[list1[i]];
                }
                else if (min == i + hash[list1[i]])
                {
                    res.Add(list1[i]);
                }
            }
        }
        return res.ToArray();
    }
}

```

## Java Solution

```java

class Solution {
    public String[] findRestaurant(String[] list1, String[] list2) {
        int m = list1.length;
        int n = list2.length;
        int min = m + n;
        HashMap<String, Integer> hash = new HashMap<>();
        LinkedList<String> res = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            hash.put(list2[i], i);
        }
        for (int i = 0; i < m; i++) {
            if (hash.containsKey(list1[i])) {
                if (min > i + hash.get(list1[i])) {
                    res.clear();
                    res.add(list1[i]);
                    min = i + hash.get(list1[i]);
                }
                else if(min == i + hash.get(list1[i])){
                    res.add(list1[i]);
                }
            }
        }
        return res.toArray(new String[res.size()]);
    }
}


```

## Python Solution

```python

class Solution:
    def findRestaurant(self, list1, list2):
        """
        :type list1: List[str]
        :type list2: List[str]
        :rtype: List[str]
        """
        import math
        d = {}
        r = []
        minv = math.inf
        for i in range(len(list1)):
            d[list1[i]] = i
        for i in range(len(list2)):
            if list2[i] in d.keys():
                if minv > d[list2[i]] + i:
                    minv = d[list2[i]] + i
                    r.clear()
                    r.append(list2[i])
                elif d[list2[i]] + i == minv:
                    r.append(list2[i])        
        return r

```





