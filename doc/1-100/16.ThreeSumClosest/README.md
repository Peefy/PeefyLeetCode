
# Problem 16 : ThreeSumClosest

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/16.ThreeSumClosest/problem.png"/>

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
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int min = 999;
        int res = 0;
        int num = nums.size() - 2;
        for(int i = 0; i < num; i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1;
            int r = num + 1;        
            if (i > 0){
                int s = nums[i] + nums[r-1] + nums[r];
                int temp = fabs(target - s);
                if (temp < min){
                    res = s;
                    min = temp;
                    continue;
                }
            }
            while (l < r){
                int s = nums[i] + nums[l] + nums[r];
                int temp = fabs(target - s);
                if (temp < min){
                    min = temp;
                    res = s;
                }
                if (s > target)
                    r -= 1;
                else if (s < target)
                    l += 1;
                else
                    return s;
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int ThreeSumClosest(int[] nums, int target) {
        Array.Sort(nums);
        int closestNum = 0;
        int diff = int.MaxValue;

        for(int i = 0; i < nums.Length - 2; i++){
            int left = i + 1, right = nums.Length - 1;
            while(left < right){
                int temp_sum = nums[i] + nums[left] + nums[right];
                int temp_diff = Math.Abs(temp_sum - target);
                if(temp_diff < diff){
                    diff = temp_diff;
                    closestNum = temp_sum;
                }

                if(temp_sum < target){
                    left ++;
                }else if(temp_sum > target){
                    right --;
                }else{
                    return temp_sum;
                }

            }
        }
        return closestNum;
    }
}

```

## Java Solution

```java

class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int re = Integer.MAX_VALUE, len = nums.length;
        int left = 0, right = len - 1;
        int num1, now, min_abs = Integer.MAX_VALUE;
        for(int i = 0; i < len; ++i)
        {
            num1 = nums[i];
            for(left = i + 1, right = len - 1; left < right;)
            {
                now = num1 + nums[left] + nums[right];
                if(target == now)
                    return now;
                if(Math.abs(target - now) < min_abs)
                {
                    re = now;
                    min_abs = Math.abs(target - now);
                }
                if(now > target)
                    right--;
                else
                    left++;
            }
        }
        return re;
    }
}

```

## Python Solution

```python

class Solution:
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        res = None
        i = 0
        for i in range(len(nums)):
            if i == 0 or nums[i] > nums[i - 1]:
                l = i + 1
                r = len(nums)-1
                while l < r:
                    s = nums[i] + nums[l] + nums[r]
                    res = s if res == None or abs(s - target) < abs(res - target) else res
                    if s == target:
                        return s
                    elif s > target:
                        r -= 1
                    else:
                        l += 1
        return res

```


