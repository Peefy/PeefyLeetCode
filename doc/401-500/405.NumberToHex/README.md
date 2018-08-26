
# problem 405 : NumberToHex

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/405.NumberToHex/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        string result;
        string s="0123456789abcdef";
        int cnt=0;
        while(num!=0&&cnt<8){
            result=s[num&0xf]+result;
            num>>=4;
            cnt++;
        }
        return result;   
    }
};

```

## C# Solution

```csharp

public class Solution {
    string mod16(long x){
        long ans = x % 16;
        if (ans == 10)
            return "a";
        else if (ans == 11)
            return "b";
        else if (ans == 12)
            return "c";
        else if (ans == 13)
            return "d";
        else if (ans == 14)
            return "e";
        else if (ans == 15)
            return "f";
        else
            return ans.ToString();
    }

	public string ToHex(int num) {
        long long_num = num; 
        String result = "";
        if (long_num == 0)
            return "0";
        if (long_num < 0)
            long_num += (long)Math.Pow(2, 32);
        while (long_num > 0){
            result = mod16(long_num) + result;
            long_num /= 16;
        }
        return result;
	}
}

```

## Java Solution

```java

class Solution {
    String mod16(long x){
        Long ans = x % 16;
        if (ans == 10)
            return "a";
        else if (ans == 11)
            return "b";
        else if (ans == 12)
            return "c";
        else if (ans == 13)
            return "d";
        else if (ans == 14)
            return "e";
        else if (ans == 15)
            return "f";
        else
            return ans.toString();
    }

    public String toHex(int num) {
        long long_num = num; 
        String result = "";
        if (long_num == 0)
            return "0";
        if (long_num < 0)
            long_num += (long)Math.pow(2, 32);
        while (long_num > 0){
            result = mod16(long_num) + result;
            long_num /= 16;
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def toHex(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return '0'
        hexnums = "0123456789abcdef"
        hexstr = []
        for i in range(7, -1, -1):
            hexstr.append(hexnums[(num >> (i * 4) & 0x0f)])
        k = 0
        for i in range(8):
            if hexstr[i] == '0':
                k += 1
            else:
                break
        return ''.join(hexstr[k::])

```





