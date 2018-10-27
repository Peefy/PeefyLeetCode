
# problem 496 : NextGreaterElementI

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/496.NextGreaterElementI/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> r;
        unordered_map<int, int> dmap;
        std::stack<int> s;
        for(auto n : nums){      
            while(s.size() > 0 && s.top() < n){
                dmap[s.top()] = n;
                s.pop();
            }      
            s.push(n);   
        }
        for(auto n : findNums){
            r.push_back(dmap.find(n) != dmap.end() ? dmap[n] : -1);
        }  
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] NextGreaterElement(int[] findNums, int[] nums) {
        int m = findNums.Length;
        int n = nums.Length;
        int[] r = new int[m];
        Dictionary<int, int> store = new Dictionary<int, int>();
        Stack<int> s = new Stack<int>();
        foreach (int max in nums) {
            while (s.Count > 0 && s.Peek() < max) {
                store.Add(s.Pop(), max);
            }
            s.Push(max);
        }
        for (int i = 0; i < m; i++) {
            r[i] = store.GetValueOrDefault(findNums[i], -1);
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int[] r = new int[m];
        HashMap<Integer, Integer> store = new HashMap<>();
        LinkedList<Integer> s = new LinkedList<>();
        for (int max : nums2) {
            while (s.size() > 0 && s.getLast() < max) {
                store.put(s.getLast(), max);
                s.removeLast();
            }
            s.add(max);
        }
        for (int i = 0; i < m; i++) {
            r[i] = store.getOrDefault(nums1[i], -1);
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        m = len(nums1)
        n = len(nums2)
        r = [-1] * m
        for j in range(m):
            num = nums1[j]
            index = nums2.index(num)
            for i in range(index + 1, n):
                if nums2[i] > num:
                    r[j] = nums2[i]
                    break
        return r

```





