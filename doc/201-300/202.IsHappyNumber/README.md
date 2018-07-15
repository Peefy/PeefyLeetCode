
# problem 202 : IsHappyNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/202.IsHappyNumber/problem.png"/>

* C++ 双指针法判断是否循环(有环)
* C# 快乐数性质：是快乐数的最终循环到1，不是的循环到4
* Java, Python : 哈希表法

## C++ Solution

```c++

class Solution {
public:
    int getNext(int num){
        int num_r = 0;
        while (num > 0) {
            int c = num % 10;
            num = num / 10;
            num_r += c * c;
        }
        return num_r;
    }

    bool isHappy(int n) {
        int fast = getNext(getNext(n));
        int slow = getNext(n);
        if (fast == 1)
            return true;
        while (fast != slow)
        {
            if (fast == 1)
                return true;
            fast = getNext(getNext(fast));
            slow = getNext(slow);
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsHappy(int n) {
        if (n == 1)
        {
            return true;
        }
        if (n == 4)
        {
            return false;
        }
        int happy = 0;
        while (n > 0) {
            int c = n % 10;
            n = n / 10;
            happy += c * c;
        }
        return IsHappy(happy);
    }
}

```

## Java Solution

```java

class Solution {
    public int getNext(int num){
        int num_r = 0;
        while (num > 0) {
            int c = num % 10;
            num = num / 10;
            num_r += c * c;
        }
        return num_r;
    }

    public boolean isHappy(int n) {
        HashMap<Integer, Integer> d = new HashMap<>();
        int happy = n;
        Integer count = 0;
        while (happy != 1) {
            if (d.containsValue(happy) == true)
                return false;
            d.put(count, happy);
            happy = getNext(happy);
            count += 1;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def getNext(self, num):
        num_r = 0
        while num > 0:
            c = num % 10   
            num = num // 10 
            num_r += c ** 2
        return num_r

    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        d = {}
        happy = n
        count = 0
        while happy != 1:
            if happy in d.values():
                return False
            d[count] = happy
            happy = self.getNext(happy)     
            count += 1   
        return True

```




