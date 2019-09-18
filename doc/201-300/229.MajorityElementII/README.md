
# problem 229 : MajorityElementII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/229.MajorityElementII/problem.png"/>

摩尔投票法

## C++ Solution

```c++

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int major1 = 0;
        int cnt1 = 0;
        int major2 = 0;
        int cnt2 = 0;
        int n = nums.size();
        for (size_t i = 0; i < n; i++){
            if (cnt1 == 0 && major2 != nums[i]){
                major1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && major1 != nums[i]){
                major2 = nums[i];
                cnt2 = 1;
            }
            else if (major1 == nums[i])
                cnt1 += 1;
            else if (major2 == nums[i])
                cnt2 += 1;
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }           
        cnt1 = 0;
        cnt2 = 0;
        for (size_t i = 0; i < n; i++){
            if (nums[i] == major1)
                cnt1 += 1;
            else if (nums[i] == major2)
                cnt2 += 1;
        }
        vector<int> ans;
        if (cnt1 > n / 3)
            ans.push_back(major1);
        if (cnt2 > n / 3)
            ans.push_back(major2);
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> MajorityElement(int[] nums) {
        int major1 = 0;
        int cnt1 = 0;
        int major2 = 0;
        int cnt2 = 0;
        int n = nums.Length;
        for (int i = 0; i < n; i++){
            if (cnt1 == 0 && major2 != nums[i]){
                major1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && major1 != nums[i]){
                major2 = nums[i];
                cnt2 = 1;
            }
            else if (major1 == nums[i])
                cnt1 += 1;
            else if (major2 == nums[i])
                cnt2 += 1;
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }           
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == major1)
                cnt1 += 1;
            else if (nums[i] == major2)
                cnt2 += 1;
        }
        List<int> ans = new List<int>();
        if (cnt1 > n / 3)
            ans.Add(major1);
        if (cnt2 > n / 3)
            ans.Add(major2);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int major1 = 0;
        int cnt1 = 0;
        int major2 = 0;
        int cnt2 = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++){
            if (cnt1 == 0 && major2 != nums[i]){
                major1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && major1 != nums[i]){
                major2 = nums[i];
                cnt2 = 1;
            }
            else if (major1 == nums[i])
                cnt1 += 1;
            else if (major2 == nums[i])
                cnt2 += 1;
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }           
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == major1)
                cnt1 += 1;
            else if (nums[i] == major2)
                cnt2 += 1;
        }
        List<Integer> ans = new ArrayList<>();
        if (cnt1 > n / 3)
            ans.add(major1);
        if (cnt2 > n / 3)
            ans.add(major2);
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def majorityElement(self, nums):
        major1 = 0
        cnt1 = 0
        major2 = 0
        cnt2 = 0
        n = len(nums)
        for i in range(n):
            if cnt1 == 0 and major2 != nums[i]:
                major1 = nums[i]
                cnt1 = 1
            elif cnt2 == 0 and major1 != nums[i]:
                major2 = nums[i]
                cnt2 = 1
            elif major1 == nums[i]:
                cnt1 += 1
            elif major2 == nums[i]:
                cnt2 += 1
            else:
                cnt1 -= 1
                cnt2 -= 1
        cnt1 = 0
        cnt2 = 0
        for i in range(n):
            if nums[i] == major1:
                cnt1 += 1
            elif nums[i] == major2:
                cnt2 += 1
        ans = []
        if cnt1 > n // 3:
            ans.append(major1)
        if cnt2 > n // 3:
            ans.append(major2)
        return ans   

```




