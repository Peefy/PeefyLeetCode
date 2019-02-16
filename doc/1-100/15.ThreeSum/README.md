
# Problem 15 : ThreeSum

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/15.ThreeSum/problem.png"/>

双指针

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > list;
        for(int i=0;i<nums.size()-2;i++){
            if(i!=0&&(nums[i]==nums[i-1]))continue;
             int j=i+1;
             int k=nums.size()-1;
            while(j<k){
                 int sum=nums[j]+nums[k]+nums[i];
                  if(sum<0){
                      j++;
                  }
                  else if(sum>0){
                      k--;
                  }
                  else{
                    while(j<k&&nums[j]==nums[j+1])j++;   
                    while(j<k&&nums[k]==nums[k-1])k--;
                     vector<int> temp;
                     temp.push_back(nums[i]);
                     temp.push_back(nums[j]);
                     temp.push_back(nums[k]);
                     list.push_back(temp);
                     j++;
                     k--; 
                  }
                }     
        }
        return list;  
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        Array.Sort(nums);
        List<IList<int>> list = new List<IList<int>>();
        for(int i=0;i<nums.Length-2;i++){
            if(i!=0&&(nums[i]==nums[i-1]))continue;
             int j=i+1;
             int k=nums.Length-1;
            while(j<k){
                 int sum=nums[j]+nums[k]+nums[i];
                  if(sum<0){
                      j++;
                  }
                  else if(sum>0){
                      k--;
                  }
                  else{
                    while(j<k&&nums[j]==nums[j+1])j++;   
                    while(j<k&&nums[k]==nums[k-1])k--;
                     List<int> temp = new List<int>();
                     temp.Add(nums[i]);
                     temp.Add(nums[j]);
                     temp.Add(nums[k]);
                     list.Add(temp);
                     j++;
                     k--; 
                  }
                }     
        }
        return list;  
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        HashMap<Integer, Integer> dic = new HashMap<>();
        LinkedList<List<Integer>> rst = new LinkedList<>();
        for (int ele : nums) {
            dic.put(ele, dic.getOrDefault(ele, 0) + 1);
        }
        if (dic.containsKey(0) == true && dic.get(0) > 2){
            LinkedList<Integer> tmp = new LinkedList<>();
            tmp.add(0);tmp.add(0);tmp.add(0);
            rst.add(tmp);
        }
        LinkedList<Integer> pos = new LinkedList<>();
        LinkedList<Integer> neg = new LinkedList<>();
        for(Integer key : dic.keySet()){
            if (key > 0){
                pos.add(key);
            }
            else if(key < 0){
                neg.add(key);
            }
        }
        for (int p : pos){
            for (int n : neg){
                int inverse = -(p + n);
                if (dic.containsKey(inverse) == true){
                    if (inverse == p && dic.get(p) > 1){
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(n);tmp.add(p);tmp.add(p);
                        rst.add(tmp);
                    }
                    else if (inverse == n && dic.get(n) > 1){
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(n);tmp.add(n);tmp.add(p);
                        rst.add(tmp);
                    }
                    else if (inverse < n || inverse > p || inverse == 0){
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(n);tmp.add(inverse);tmp.add(p);
                        rst.add(tmp);
                    }
                }
            }
        }
        return rst;     
    }
}

```

## Python Solution

```python

class Solution:
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        res = []
        i = 0
        for i in range(len(nums)):
            if i == 0 or nums[i] > nums[i - 1]:
                l = i + 1
                r = len(nums) - 1
                while l < r:
                    s = nums[i] + nums[l] + nums[r]
                    if s == 0:
                        res.append([nums[i], nums[l], nums[r]])
                        l += 1
                        r -= 1
                        while l < r and nums[l] == nums[l - 1]:
                            l += 1
                        while r > l and nums[r] == nums[r + 1]:
                            r -= 1
                    elif s > 0:
                        r -= 1
                    else:
                        l += 1
        return res

```


