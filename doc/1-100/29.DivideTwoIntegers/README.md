
# Problem 29 : DivideTwoIntegers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/29.DivideTwoIntegers/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int divide(int dividend, int divisor){
        if (divisor == 0)
            return 0;
        int max = INT32_MAX;
        int min = INT32_MIN;
        long divid = (long)dividend;
        long divi = (long)divisor;
        if (divi == 1)
            return (int)divid;
        if (divi == -1){
            if (divid <= min)
                return max;
            return (int)-divid;
        }
        bool flag = true;
        if (divid < 0){
            divid = -divid;
            if (divi < 0){
                divi = -divi;
            }
            else{
                flag = false;
            }
        }
        else if (divi < 0){
            divi = -divi;
            flag = false;
        }
        long res = 0;
        long tmp = 0;
        long cnt = 1;
        while (divi <= divid){
            cnt = 1;
            tmp = divi;
            //找到第一个大于被除数的2^n次方
            while (tmp <= divid){
                tmp <<= 1;
                cnt <<= 1;
            }
            res += (cnt >> 1);
            //减去基数的前一个数
            divid -= (tmp >> 1);
        }
        return flag ? (int)res : (int)-res;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int Divide(int dividend, int divisor)
        {
            if (divisor == 0)
                return 0;
            int max = int.MaxValue;
            int min = int.MinValue;
            long divid = (long)dividend;
            long divi = (long)divisor;
            if (divi == 1)
                return (int)divid;
            if (divi == -1)
            {
                if (divid <= min)
                    return max;
                return (int)-divid;
            }
            bool flag = true;
            if (divid < 0)
            {
                divid = -divid;
                if (divi < 0)
                {
                    divi = -divi;
                }
                else
                {
                    flag = false;
                }
            }
            else if (divi < 0)
            {
                divi = -divi;
                flag = false;
            }
            long res = 0;
            long tmp = 0;
            long cnt = 1;
            while (divi <= divid)
            {
                cnt = 1;
                tmp = divi;
                while (tmp <= divid)
                {
                    tmp <<= 1;
                    cnt <<= 1;
                }
                res += (cnt >> 1);
                divid -= (tmp >> 1);
            }
            return flag ? (int)res : (int)-res;
        }
    }

```

## Java Solution

```java

class Solution {
    public int divide(int dividend, int divisor) {
        if (divisor == 0)
        return 0;
    int max = Integer.MAX_VALUE;
    int min = Integer.MIN_VALUE;
    long divid = (long)dividend;
    long divi = (long)divisor;
    if (divi == 1)
        return (int)divid;
    if (divi == -1){
        if (divid <= min)
            return max;
        return (int)-divid;
    }
    boolean flag = true;
    if (divid < 0){
        divid = -divid;
        if (divi < 0){
            divi = -divi;
        }
        else{
            flag = false;
        }
    }
    else if (divi < 0){
        divi = -divi;
        flag = false;
    }
    long res = 0;
    long tmp = 0;
    long cnt = 1;
    while (divi <= divid){
        cnt = 1;
        tmp = divi;
        while (tmp <= divid){
            tmp <<= 1;
            cnt <<= 1;
        }
        res += (cnt >> 1);
        divid -= (tmp >> 1);
    }
    return flag ? (int)res : (int)-res;
    }
}


```

## Python Solution

```python

class Solution:
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        positive = (dividend > 0) == (divisor > 0) # 检测是否同为正负
        dividend, divisor = abs(dividend), abs(divisor) 
        rlt = 0
        while dividend >= divisor: # 如果除数太大了，就重新开始
            temp_divisor, i = divisor, 1 # 更新除数和计量单位
            while dividend >= temp_divisor:
                dividend -= temp_divisor
                rlt += i
                i = i<<1
                temp_divisor = temp_divisor << 1
        if not positive:
            rlt = -rlt
        return min(max(rlt, -2**31), 2**31-1) # 返回限制内的数字

```


