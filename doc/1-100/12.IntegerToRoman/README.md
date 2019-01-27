
# Problem 12 : IntegerToRoman

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/12.IntegerToRoman/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        map<int, string> token;
        int tokenkey[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string tokenval[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i = 0;i < 13;++i){
            auto n = tokenkey[i];
            auto t = tokenval[i];
            while (num >= n){
                res += t;
                num -= n;
            }
        }
        return res;
    }
};


```

## C# Solution

```csharp

public class Solution {
    public string IntToRoman(int num) {
        string res = "";
        int[] tokenkey = new int[]{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string[] tokenval = new string[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i = 0;i < 13;++i){
            int n = tokenkey[i];
            String t = tokenval[i];
            while (num >= n){
                res += t;
                num -= n;
            }
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public String intToRoman(int num) {
        String res = "";
        int[] tokenkey = new int[]{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] tokenval = new String[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i = 0;i < 13;++i){
            int n = tokenkey[i];
            String t = tokenval[i];
            while (num >= n){
                res += t;
                num -= n;
            }
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman = 'MDCLXVI'
        romandiv = [1000, 500, 100, 50, 10, 5, 1]
        ans = ''   
        strnum = str(num)
        i = 6 - (len(strnum) - 1) * 2
        for c in strnum:
            if c == '1':
                ans += roman[i]
            elif c == '2':
                ans += roman[i] * 2
            elif c == '3':
                ans += roman[i] * 3
            elif c == '4':
                ans += roman[i] + roman[i - 1]
            elif c == '5':
                ans += roman[i - 1]
            elif c == '6':
                ans += roman[i - 1] + roman[i]
            elif c == '7':
                ans += roman[i - 1] + roman[i] * 2
            elif c == '8':
                ans += roman[i - 1] + roman[i] * 3
            elif c == '9':
                ans += roman[i] + roman[i - 2]
            i += 2
        return ans
        
```


