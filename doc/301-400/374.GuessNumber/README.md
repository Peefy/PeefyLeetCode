
# problem 374 : GuessNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/374.GuessNumber/problem.png"/>

## C++ Solution

```c++

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right){
            int middle = left + (right - left) / 2;
            int num = middle;
            if (guess(num) == 0)
                return num;
            if (guess(num) == 1)
                left = middle + 1;
            if (guess(num) == -1)
                right = middle - 1;
        }
        return left;
    }
};

```

## C# Solution

```csharp

public class Solution : GuessGame {
    public int GuessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right){
            int middle = left + (right - left) / 2;
            int num = middle;
            if (Guess(num) == 0)
                return num;
            if (Guess(num) == 1)
                left = middle + 1;
            if (Guess(num) == -1)
                right = middle - 1;
        }
        return left;
    }
}

```

## Java Solution

```java

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right){
            int middle = left + (right - left) / 2;
            int num = middle;
            if (guess(num) == 0)
                return num;
            if (guess(num) == 1)
                left = middle + 1;
            if (guess(num) == -1)
                right = middle - 1;
        }
        return left;
    }
}

```

## Python Solution

```python

class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        left = 1
        right = n
        while left <= right:
            middle = left + (right - left) // 2
            num = middle
            if guess(num) == 0:
                return num
            if guess(num) == 1:
                left = middle + 1
            if guess(num) == -1:
                right = middle - 1
        return left

```





