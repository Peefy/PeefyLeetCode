
# problem 66 : PlusOne

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/66.PlusOne/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> num;
        int n = digits.size();
        int i = n - 1;
        int c = 1;       
        while(i >= 0){
            int digit = digits[i];
            digit += c;
            digits[i] = digit % 10;
            c = digit / 10;
            --i;
            num.insert(num.begin(), digits[i]);
        }
        if (c == 1)
            num.insert(num.begin(), c);
        return num;
    }
};

```

## C# Solution

```csharp

        public class Solution
        {
            public int[] PlusOne(int[] digits)
            {
                int n = digits.Length;
                int i = n - 1;
                int c = 1;
                while (i >= 0)
                {
                    int digit = digits[i];
                    digit += c;
                    digits[i] = digit % 10;
                    c = digit / 10;
                    --i;
                    if (c == 0)
                        break;
                }
                if (c == 1)
                {
                    var list = new List<int>(digits);
                    list.Insert(0, c);
                    return list.ToArray();
                }
                return digits;
            }
        }

```

## Java Solution

```java
    class Solution {
        public int[] plusOne(int[] digits) {
            int n = digits.length;
            int i = n - 1;
            int c = 1;
            while (i >= 0)
            {
                int digit = digits[i];
                digit += c;
                digits[i] = digit % 10;
                c = digit / 10;
                --i;
                if (c == 0)
                    break;
            }
            if (c == 1)
            {
                int[] nums = new int[n + 1];
                nums[0] = c;
                for(int j = 0;j < n;++j){
                    nums[j + 1] = digits[j];
                }
                return nums;
            }
            return digits;
        }
    }

```

## Python Solution

```python

class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        n = len(digits)
        i = n - 1
        c = 1
        while i >= 0:
            digit = digits[i]
            digit = digit + c
            digits[i], c = digit % 10, digit // 10
            i -= 1
            if c == 0:
                break
        if c == 1:
            digits.insert(0, c)
        return digits

```


