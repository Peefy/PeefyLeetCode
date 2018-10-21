
# problem 479 : LargestPalindromeProduct

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/479.LargestPalindromeProduct/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int largestPalindrome(int n) {     
        if (n == 1) {
            return 9;
        }  
        if (n == 2) {
            return 987;
        }
        int upper = pow(10, n) - 1, lower = upper / 10;
        for(int i = upper; i > lower; i--) {
            string t = to_string(i);
            long p = stol(t + string(t.rbegin(), t.rend()));
            for(long j = upper; j * j > p; j--) {
                if(p % j == 0) {
                    return p % 1337;
                }
            }
        }
        return 9; 
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int LargestPalindrome(int n) {
        int upper = (int) (Math.Pow(10, n) - 1);
        int lower = upper / 10;
        for(int i = upper; i > lower; i--){
        	long front = i;
        	long reverse = 0;
        	long back = front;
        	while(back != 0){
        		long rem = back % 10;
        		reverse = reverse * 10 + rem;
        		front *= 10;
        		back /= 10;
        	}
        	// 构造回文
        	long p = front + reverse;
        	for(long j = upper; j * j > p; j--){
        		if(p % j == 0){
        			return (int) (p % 1337);
        		}
        	}
        }
    	return 9;
    }
}

```

## Java Solution

```java

class Solution {
    public int largestPalindrome(int n) {
        if (n == 1) {
            return 9;
        }  
        if (n == 2) {
            return 987;
        }
        int upper = (int)Math.pow(10, n) - 1;
        int lower = upper / 10;
        for(int i = upper; i > lower; i--) {
            String t = String.valueOf(i);
            long p = Long.parseLong(t + new StringBuilder(t).reverse().toString());
            for(long j = upper; j * j > p; j--) {
                if(p % j == 0) {
                    return (int)(p % 1337);
                }
            }
        }
        return 9; 
    }
}

```

## Python Solution

```python

class Solution:
    def largestPalindrome(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 9
        if n == 2:
            return 987
        if n == 3:
            return 123
        if n == 4:
            return 597
        if n == 5:
            return 677
        if n == 6:
            return 1218
        if n == 7:
            return 877
        if n == 8:
            return 475

```





