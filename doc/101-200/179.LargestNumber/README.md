
# problem 179 : LargestNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/179.LargestNumber/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            auto aa = to_string(a);
            auto bb = to_string(b);
            return aa + bb > bb + aa;
        });
        
        return accumulate(nums.begin(), nums.end(), string(), [](std::string a, int b) {
            if (a == "0") {
                return to_string(b);
            }
            return std::move(a) + to_string(b);
        });
    }
};

```

## C# Solution

```csharp

public class LargerNumberComparator : IComparer<string> {
        public int Compare(string x, string y)
        {
            string order1 = x + y;
            string order2 = y + x;
            return order2.CompareTo(order1);
        }

        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override string ToString()
        {
            return base.ToString();
        }
    }

public class Solution {
    public string LargestNumber(int[] nums) {
        // Get input integers as strings.
        String[] asStrs = new String[nums.Length];
        for (int i = 0; i < nums.Length; i++) {
            asStrs[i] = nums[i].ToString();
        }

        // Sort strings according to custom comparator.
        Array.Sort(asStrs, new LargerNumberComparator());

        // If, after being sorted, the largest number is `0`, the entire number
        // is zero.
        if (asStrs[0].Equals("0")) {
            return "0";
        }

        // Build largest number from sorted array.
        StringBuilder largestNumberStr = new StringBuilder();
        foreach (var numAsStr in asStrs) {
            largestNumberStr.Append(numAsStr);
        }

        return largestNumberStr.ToString();
    }
}

```

## Java Solution

```java

class Solution {
    private class LargerNumberComparator implements Comparator<String> {
        @Override
        public int compare(String a, String b) {
            String order1 = a + b;
            String order2 = b + a;
           return order2.compareTo(order1);
        }
    }

    public String largestNumber(int[] nums) {
        // Get input integers as strings.
        String[] asStrs = new String[nums.length];
        for (int i = 0; i < nums.length; i++) {
            asStrs[i] = String.valueOf(nums[i]);
        }

        // Sort strings according to custom comparator.
        Arrays.sort(asStrs, new LargerNumberComparator());

        // If, after being sorted, the largest number is `0`, the entire number
        // is zero.
        if (asStrs[0].equals("0")) {
            return "0";
        }

        // Build largest number from sorted array.
        String largestNumberStr = new String();
        for (String numAsStr : asStrs) {
            largestNumberStr += numAsStr;
        }

        return largestNumberStr;
    }
}

```

## Python Solution

```python

import functools

def cmp(a, b):
    return 1 if a + b < b + a else -1

class Solution:
    def largestNumber(self, nums):
        numsstr = list(map(lambda x : str(x), nums))
        numsstr.sort(key=functools.cmp_to_key(cmp))
        if numsstr[0] == '0':
            return '0'
        return ''.join(numsstr)

```


