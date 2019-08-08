
# problem 166 : FractionToDecimal

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/166.FractionToDecimal/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string result;
        if(denominator == 0)
            return result;
        long long num = static_cast<long long>(numerator);
        long long denom = static_cast<long long>(denominator);
        //处理符号
        if((num < 0 && denom > 0) || (num > 0 && denom < 0))
            result += "-";
        num = abs(num);
        denom = abs(denom);
        //处理整数部分
        result += to_string(num / denom);
        num %= denom;
        //处理小数部分
        if(num)
            result += ".";
        //利用hash表记录出现过的除数从而定位循环
        unordered_map<long long, int> map;
        int index = 0;//当前index - map[num]可以定位循环的长度
        while(num && map.find(num) == map.end()) {
            map[num] = index++;
            num *= 10;
            result += to_string(num / denom);
            num %= denom;
        }
        //如果是出现了循环小数
        if(map.find(num) != map.end()) {
            result += "()";
            int cur = result.size() - 2;
            while(index-- > map[num]) {
                swap(result[cur], result[cur - 1]);
                --cur;
            }
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string FractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) {
            return "0";
        }
        StringBuilder fraction = new StringBuilder();
        // If either one is negative (not both)
        if (numerator < 0 ^ denominator < 0) {
            fraction.Append("-");
        }
        // Convert to Long or else abs(-2147483648) overflows
        long dividend = Math.Abs((long)(numerator));
        long divisor = Math.Abs((long)(denominator));
        fraction.Append((dividend / divisor).ToString());
        long remainder = dividend % divisor;
        if (remainder == 0) {
            return fraction.ToString();
        }
        fraction.Append(".");
        Dictionary<long, int> map = new Dictionary<long, int>();
        while (remainder != 0) {
            if (map.ContainsKey(remainder)) {
                fraction.Insert(map[remainder], "(");
                fraction.Append(")");
                break;
            }
            map.Add(remainder, fraction.Length);
            remainder *= 10;
            fraction.Append((remainder / divisor).ToString());
            remainder %= divisor;
        }
        return fraction.ToString();
    }
}

```

## Java Solution

```java

class Solution {
    public String fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) {
            return "0";
        }
        StringBuilder fraction = new StringBuilder();
        // If either one is negative (not both)
        if (numerator < 0 ^ denominator < 0) {
            fraction.append("-");
        }
        // Convert to Long or else abs(-2147483648) overflows
        long dividend = Math.abs(Long.valueOf(numerator));
        long divisor = Math.abs(Long.valueOf(denominator));
        fraction.append(String.valueOf(dividend / divisor));
        long remainder = dividend % divisor;
        if (remainder == 0) {
            return fraction.toString();
        }
        fraction.append(".");
        HashMap<Long, Integer> map = new HashMap<>();
        while (remainder != 0) {
            if (map.containsKey(remainder)) {
                fraction.insert(map.get(remainder), "(");
                fraction.append(")");
                break;
            }
            map.put(remainder, fraction.length());
            remainder *= 10;
            fraction.append(String.valueOf(remainder / divisor));
            remainder %= divisor;
        }
        return fraction.toString();
    }
}


```

## Python Solution

```python

class Solution:
    def fractionToDecimal(self, a: int, b: int) -> str:
        if a % b == 0: return str(a // b)  #整除
        if a * b > 0: t = ''  #处理符号
        elif a * b < 0: t = '-'
        else: return '0'
        a = abs(a)
        b = abs(b)
        c = str(a // b)  #整数部分
        d = a % b
        z = {}  #余数字典
        s = ''  #小数部分
        k = 0  #小数位置计数
        flag = False  #循环小数标记
        while True:
            d *= 10  #长除补0
            if d not in z:
                z[d] = k  #记录第一次出现该余数的位置
                k += 1
            else:  #余数重复了
                flag = True
                break
            i = d // b
            d %= b
            s += str(i)
            if d == 0:  #除尽
                break
        if flag:  #出现循环时
            s = s[:z[d]] + '(' + s[z[d]:] + ')'  #以重复余数为界分离小数部分
        return t + c + '.' + s

```


