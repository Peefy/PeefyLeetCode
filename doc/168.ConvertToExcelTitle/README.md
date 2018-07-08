
# problem 168 : ConvertToExcelTitle

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/168.ConvertToExcelTitle/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    string convertToTitle(int n)
    {
        auto JINZHI = 26;
        auto alpha = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string r = "";
        while(n > 0){
            int c = n / JINZHI;
            n = n % JINZHI;
            if (n != 0)
            {
                r = alpha[n] + r;
                n = c;
            }
            else
            {
                r = alpha[JINZHI] + r;
                n = c - 1;
            }
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution
    {
        public string ConvertToTitle(int n)
        {
            string r = "";
            while (n != 0)
            {
                --n;
                r = (char)((n % 26) + 'A') + r;
                n /= 26;
            }
            return r;
        }
    }
```

## Java Solution

```java
class Solution {
    public String convertToTitle(int n) {
        String r = "";
        while (n != 0) {
            --n;
            r = (char)((n % 26) + 'A') + r;
            n /= 26;
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def convertToTitle(self, n):
        """
        :type n: int
        :rtype: str
        """
        JINZHI = 26
        alpha = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        r = ""
        while n > 0:
            c = n // JINZHI
            n = n % JINZHI
            if n != 0:
                r = alpha[n] + r
                n = c
            else:
                r = alpha[JINZHI] + r
                n = c - 1
        return r
        

```


