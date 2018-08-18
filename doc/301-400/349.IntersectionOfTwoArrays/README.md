
# problem 349 : IntersectionOfTwoArrays

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/349.IntersectionOfTwoArrays/problem.png"/>

* 解法一：采用hash集合
* 解法二：采用快速排序或者堆排序等复杂度低的算法预先排序

## C++ Solution

```c++

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s; 
        vector<int> r;
        for(size_t i = 0; i < nums1.size(); i++)
        {
            s.insert(nums1[i]);
        }
        for(size_t i = 0; i < nums2.size(); i++)
        {
            auto now = s.find(nums2[i]);
            if(now != s.end()){
                r.push_back(nums2[i]);
                s.erase(now);
            }
        }
        return r;
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.empty()||nums2.empty())
            return {};
        vector<int> res;
        heapSort(nums1);
        heapSort(nums2);
        sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(find(res.begin(),res.end(),nums1[i])==res.end())
                        res.push_back(nums1[i]);
                    break;   
                }
            }
        }
        return res;
    }
    //这里用sort函数，快排，复杂度也为O(logn)，自写堆排序
    void heapSort(vector<int> &nums)
    {
        int length=nums.size();
        for(int i=length/2-1;i>=0;i--)
            adjustHeap(nums,i,length);
        for(int j=length-1;j>0;j--)
        {
            int temp=nums[j];
            nums[j]=nums[0];
            nums[0]=temp;
            adjustHeap(nums,0,j);
        }
    }
    void adjustHeap(vector<int> &nums,int i,int length)
    {
        int temp=nums[i];
        for(int k=2*i+1;k<length;k=2*k+1)
        {
            if(k+1<length&&nums[k]<nums[k+1])
                k++;
            if(nums[k]>nums[i])
            {
                nums[i]=nums[k];
                i=k;
            }
            else
                break;
        }
        nums[i]=temp;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
                // 元素唯一，考虑使用 Set 的特性
        // 因为可以不考虑输出结果的顺序，所以可以先对数组排序，然后再比较两个数组，遇到已有结果的相同的数据可以跳过，减少不必要的比较
        
        if (nums1 == null || nums2 == null || nums1.Length == 0 || nums2.Length == 0) {
            return new int[0];
        }
    
        // 对数组进行快排
        quickSort(nums1, 0, nums1.Length - 1);
        quickSort(nums2, 0, nums2.Length - 1);
        
        // Arrays.sort(nums1); 
        //  Arrays.sort(nums2);
       
        int[] resultT = new int[nums1.Length < nums2.Length ? nums1.Length : nums2.Length];
        int n = 0;
        int i = 0;
        int j = 0;
        while (i < nums1.Length && j < nums2.Length) {
            if (nums1[i] == nums2[j]) {
                if (n == 0 || resultT[n - 1] != nums1[i]) {
                    resultT[n] = nums1[i];
                    n++;
                }
            
                ++i;
                ++j;
            } else if (nums1[i] < nums2[j]) {
                ++i;
            } else {
                ++j;
            }
        }
        
        int[] result = new int[n];
        while (--n >= 0) {
            result[n] = resultT[n];
        }
        
        return result;
    }
    private static void quickSort(int[] nums, int start, int end) {
        if (nums == null || nums.Length < 2 || start >= end) {
            return;
        }
    
        int i = start, j = end;
        // 选一个基准值，完成一次快排操作后，数组序列在该值可分为左右两个部分，在其左边的序列都比该基准值小，在其右边的序列都比该基准值大
        int pivot = nums[(start + end) / 2];
        while (i <= j) {
            // 夹逼原则，分别从左右开端进行判断
            while(i <= j && nums[i] < pivot) { // 从左边开始，比基准值小的直接跳过
                ++i; 
            }
            
            while(i <= j && nums[j] > pivot) { // 从有边开始，比基准值大的直接跳过
                --j;
            }
            
            if (i < j) { // 此时肯定是出现左边的数了大于或等于基准值或者右边数小于或等于基准值的情况，需要交换两者位置
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++i;
                --j;
            } else if (i == j) {
                // 如果 i = j 说明已经到了数组中间，一次快排结束，i + 1 满足跳出循环的条件
                ++i;
            }
        }
        
        quickSort(nums, start, j);
        quickSort(nums, i, end);
    }
}

```

## Java Solution

```java

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> set = new HashSet<>();
        ArrayList<Integer> r = new ArrayList<>();
        for (int i = 0; i < nums1.length; i++) {
            set.add(nums1[i]);
        }
        for (int i = 0; i < nums2.length; i++) {
            if (set.contains(nums2[i]) == true) {
                r.add(nums2[i]);
                set.remove(nums2[i]);
            }
        }
        int size = r.size();
        int[] nums = new int[size];
        for (int i = 0; i < size; i++) {
            nums[i] = r.get(i);
        }
        return nums;
    }
}

```

## Python Solution

```python

class Solution:
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        return list(set(nums1) & set(nums2))

```





