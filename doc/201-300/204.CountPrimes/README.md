
# problem 204 : CountPrimes

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/204.CountPrimes/problem.png"/>

埃式筛选法和欧拉筛选法:如果一个数是素数，则它的倍数都不是素数

## C++ Solution

```c++

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
    const bool exist = true;
    const bool not_exist = false;

    unsigned  count = n - 1;      //假设全部是素数
    

    bool*A = new bool[n + 1];   
    memset(A, exist, sizeof(bool)*(n + 1));

    for (int p = 2; p * p <= n; p++)
    {
        if (A[p] == exist)
        {
            int j = p*p;
            while (j <= n)
            {
                if (A[j] == exist)     //只有没被去除，才做去除操作。避免重复统计
                {
                    A[j] = not_exist;
                    count--;           //减少1个
                }
                j += p;
            }
        }
    }


    delete[] A;

        int div = n / 2;
        for(int i = 2;i <= div;++i)
            if (n % i == 0)
                return count;
        
    return count - 1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CountPrimes(int n) {
        if (n <= 2)
            return 0;
        bool[] visit = new bool[n + 1];
        for (int k = 0; k < n + 1; k++) {
            visit[k] = true;
        }
        int count = n - 1;
        int i = 2;
        while (i * i <= n) {
            if (visit[i] == true)
            {
                int j = i * i;
                while (j <= n) {
                    if (visit[j] == true)
                    {
                        visit[j] = false;
                        count -= 1;
                    }
                    j += i;
                }
            }
            i += 1;
        }
        int div = (int)Math.Sqrt(n);
        for(int k = 2;k <= div;++k)
            if (n % k == 0)
                return count;
        return count - 1;
    }
}

```

## Java Solution

```java
class Solution {
    public int countPrimes(int n) {
        if (n <= 2)
            return 0;
        boolean visit[] = new boolean[n + 1];
        for (int i = 0; i < n + 1; i++) {
            visit[i] = true;
        }
        int count = n - 1;
        int i = 2;
        while (i * i <= n) {
            if (visit[i] == true)
            {
                int j = i * i;
                while (j <= n) {
                    if (visit[j] == true)
                    {
                        visit[j] = false;
                        count -= 1;
                    }
                    j += i;
                }
            }
            i += 1;
        }
        int div = (int)Math.sqrt(n);
        for(int k = 2;k <= div;++k)
            if (n % k == 0)
                return count;
        return count - 1;
    }
}

```

## Python Solution

```python


import math

class Solution:
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        if n <= 2:
            return count
        if n == 2:
            return 1
        exist = True
        not_exist = False
        count = n - 1
        visit = [True] * (n + 1)
        i = 2
        while i * i <= n:
            if visit[i] == exist:
                j = i * i
                while j <= n:
                    if visit[j] == exist:
                        visit[j] = not_exist
                        count -= 1
                    j += i
            i += 1
        div = int(math.sqrt(n))
        for i in range(div, 1, -1):
            if n % i == 0:
                return count
        return count - 1

```




