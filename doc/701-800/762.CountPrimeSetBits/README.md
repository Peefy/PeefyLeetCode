
# problem 762 ：CountPrimeSetBits

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/762.CountPrimeSetBits/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int _primes[21] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
        int count = 0;
        for (int i = L; i <= R; i++) {
            int bits = 0;
            for (int n = i; n > 0; n >>= 1)
                bits += n & 1;
            if (_primes[bits] == 1)
                count += 1;
        }
        return count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CountPrimeSetBits(int L, int R) {
        int[] _primes = new int[]{0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
        int count = 0;
        for (int i = L; i <= R; i++) {
            int bits = 0;
            int n = i;
            while (n > 0){
                n &= (n - 1);
                bits++;
            }
            if (_primes[bits] == 1)
                count += 1;
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int countPrimeSetBits(int L, int R) {
        int[] _primes = new int[]{0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
        int count = 0;
        for (int i = L; i <= R; i++) {
            int bits = 0;
            for (int n = i; n > 0; n >>= 1)
                bits += n & 1;
            if (_primes[bits] == 1)
                count += 1;
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def countPrimeSetBits(self, L, R):
        """
        :type L: int
        :type R: int
        :rtype: int
        """
        primes = {2, 3, 5, 7, 11, 13, 17, 19}
        count = 0
        for i in range(L, R + 1):
            if bin(i).count('1') in primes:
                count += 1
        return count

```





