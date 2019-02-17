
# Problem 18 : FourSum

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/18.FourSum/problem.png"/>

双指针，注意去重

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());    
        int n = nums.size();
        for (int i = 0;i < n - 3;++i){
            int x = nums[i];
            int target1 = target - x;
            int sum4 = nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3];
            int lastsum4 = nums[n - 1] + nums[n - 2] + nums[n - 3];
            if (sum4 > target)
                break;
            else if (lastsum4 < target1 || (i > 0 && x == nums[i - 1]))
                continue;
            for (int j = i + 1;j < n - 2;j++){
                int target2 = target1 - nums[j];
                if (nums[j + 1] + nums[j + 2] > target2)
                    break;
                else if (nums[n-2] + nums[n-1] < target2 || (j > i + 1 && nums[j] == nums[j - 1]))
                    continue;
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    int temp = nums[k] + nums[l];
                    if (temp > target2)
                        l -= 1;
                    else if (temp < target2)
                        k += 1;
                    else{
                        res.push_back(vector<int>{x, nums[j], nums[k], nums[l]});
                        while (k < l && nums[k] == nums[k + 1])
                            k += 1;
                        while (k < l && nums[l] == nums[l - 1])
                            l -= 1;
                        k += 1;
                        l -= 1; 
                    }
                }           
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<int>> FourSum(int[] nums, int target) {
        List<IList<int>> res = new List<IList<int>>();
        int n = nums.Length;
        if(n < 4) return res;
        Array.Sort(nums);
        for(int i = 0; i < n - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
            {
                break;
            }
            if(nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target)
            {
                continue;
            }
            for(int j = i + 1; j < n - 2; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                if(nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
                {
                    break;
                }
                if(nums[i] + nums[j] + nums[n - 2] + nums[n - 1] < target)
                {
                    continue;
                }
                int left = j + 1;
                int right = n - 1;
                while(left < right)
                {
                    if(nums[i] + nums[j] + nums[left] + nums[right] < target)
                    {
                        left++;
                    }
                    else if(nums[i] + nums[j] + nums[left] + nums[right] > target)
                    {
                        right--;
                    }
                    else{
                        res.Add(new List<int>{nums[i], nums[j], nums[left], nums[right]});
                        do{
                            left++;
                        }while(left < right && nums[left] == nums[left-1]);
                        do{
                            right--;
                        }while(left < right && nums[right] == nums[right + 1]);
                    }
                }
            }
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> res = new LinkedList<>();
        int n = nums.length;
        if(n < 4) return res;
        Arrays.sort(nums);
        for(int i = 0; i < n - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
            {
                break;
            }
            if(nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target)
            {
                continue;
            }
            for(int j = i + 1; j < n - 2; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                if(nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
                {
                    break;
                }
                if(nums[i] + nums[j] + nums[n - 2] + nums[n - 1] < target)
                {
                    continue;
                }
                int left = j + 1;
                int right = n - 1;
                while(left < right)
                {
                    if(nums[i] + nums[j] + nums[left] + nums[right] < target)
                    {
                        left++;
                    }
                    else if(nums[i] + nums[j] + nums[left] + nums[right] > target)
                    {
                        right--;
                    }
                    else{
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(nums[i]);
                        tmp.add(nums[j]);
                        tmp.add(nums[left]);
                        tmp.add(nums[right]);
                        res.add(tmp);
                        do{
                            left++;
                        }while(left < right && nums[left] == nums[left-1]);
                        do{
                            right--;
                        }while(left < right && nums[right] == nums[right + 1]);
                    }
                }
            }
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        ans = []
        nums.sort()
        n = len(nums)
        for i in range(n - 1):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            for j in range(i + 1, n):
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue
                l = j + 1
                r = n - 1
                while l < r:
                    if l > j + 1 and nums[l] == nums[l - 1]:
                        l += 1
                    elif nums[i]+nums[j]+nums[l]+nums[r]<target:
                        l += 1
                    elif nums[i]+nums[j]+nums[l]+nums[r]>target:
                        r -= 1
                    else:
                        ans.append([nums[i], nums[j], nums[l], nums[r]])
                        l += 1
                        r -= 1
        return ans

```


