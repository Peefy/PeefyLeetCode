
# problem 400 : FindNthDigit

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/400.FindNthDigit/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int findNthDigit(int n) {
        long x = 9;
		int start = 1;
		int xN = 1;
		while (n > x * xN) {
			n -= x * xN;
			x *= 10;
			start *= 10;
			xN++;
		}
		if (start == 1) {
			return n;
		} else {
			int index = n % xN;
			int theInt = start + n / xN + (index == 0 ? -1 : 0);
			index = index == 0 ? xN - 1 : index-1;
			return to_string(theInt)[index] - '0';
		}
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int FindNthDigit(int n)  {
        long start = 1,sz = 1,bace = 9;
        while(sz * bace<n){
            n -= (int)(sz * bace);
            bace *= 10;
            ++sz;
            start*=10;
        }
        int target = (int)(start + ( n - 1) / sz);
        return target.ToString()[(n - 1) % (int)sz] -'0';
    }
}

```

## Java Solution

```java


class Solution {
    public int findNthDigit(int n) {
        if (n < 10)
            return n;
        long sum = 0;
        int k = 0;
        for (int i = 0; i < 1000; i++) {
            sum += 9 * Math.pow(10, i) * (i + 1);       
            if (sum > n){
                sum -= 9 * Math.pow(10, i) * (i + 1);
                break;
            }
            ++k;
        }
        int after = (int)(n - sum);
        int num_index = (after - 1) / (k + 1);
        int num_bit = (after - 1) % (k + 1);
        int low = (int)Math.pow(10, k);
        int num = low + num_index;
        if (num_bit >= 0)
            return new Integer(num).toString().charAt(num_bit) - '0';
        else
            return new Integer(num).toString().charAt(k + num_bit) - '0';
    }
}

```

## Python Solution

```python


import math

class Solution:
    def findNthDigit(self, n):
        """
        :type n: int
        :rtype: int
        """
        k = int(math.log10(n)) + 1
        sum = 0
        for i in range(k):
            sum += 9 * 10 ** i * (i + 1)
            if sum > n:
                sum -= 9 * 10 ** i * (i + 1)
                break
        after = n - sum
        num_index = (after - 1) // (i + 1)
        num_bit = (after - 1) % (i + 1)
        low = 10 ** i
        num = low + num_index
        return int(str(num)[num_bit])

```





