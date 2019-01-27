
# Problem 8 : StringToInteger

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/8.StringToInteger/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int myAtoi(string str) {
        int nonindex = -1;
        uint64_t strNum = 0;
        for(int i = 0; i < str.length(); i++){
            if (str[i] != ' '){
                nonindex = i;
                break;
            }
        }       
        if (nonindex == -1)
            return 0;
        bool positive = true;
        char firstchar = str[nonindex];
        int i = nonindex;
        if (firstchar == '+' || firstchar == '-'){
            if (firstchar == '-')
                positive = false;
            i = 1 + nonindex;
        }
        for (; i < str.length(); i++) {
            char c = str[i];
            if (c >= '0' && c <= '9')
                strNum = strNum * 10 + c - '0';        
            if (c < '0' || c > '9')
                break;       
            if (strNum > 2147483647){
                if (positive == false)
                    return -2147483648;
                else
                    return 2147483647;
            }
        }
        if (positive == false)
            strNum = 0 - strNum;
        return (int)strNum;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int MyAtoi(string str)
        {
            if (string.IsNullOrEmpty(str))
                return 0;
            int sign = 1;
            int bases = 0;
            int i = 0;
            while (str[i] == ' ')
            {
                i++;
                if (i >= str.Length)
                    return 0;
            }
            if (str[i] == '-' || str[i] == '+')
                sign = str[i++] == '-' ? -1 : 1;
            while (i < str.Length && str[i] >= '0' && str[i] <= '9')
            {
                if (bases > int.MaxValue / 10 || (bases == int.MaxValue / 10 && str[i] - '0' > 7))
                {
                    return (sign == 1) ? int.MaxValue : int.MinValue;
                }
                bases = 10 * bases + (str[i++] - '0');
            }
            return bases * sign;
        }
    }

```

## Java Solution

```java

class Solution {
    public int myAtoi(String str) {
        str = str.trim();
        long strNum = 0;
        if (str.length() == 0)
            return 0;
        boolean positive = true;
        char firstchar = str.charAt(0);
        int i = 0;
        if (firstchar == '+' || firstchar == '-'){
            if (firstchar == '-')
                positive = false;
            i = 1;
        }
        for (; i < str.length(); i++) {
            char c = str.charAt(i);
            if (c >= '0' && c <= '9')
                strNum = (long)(strNum * 10) + (long)(c - '0');       
            if (c < '0' || c > '9')
                break;       
            if (strNum > 2147483647){
                if (positive == false)
                    return -2147483648;
                else
                    return 2147483647;
            }
        }

        if (positive == false)
            strNum = 0 - strNum;
        return (int)strNum;
    }
}

```

## Python Solution

```python

class Solution:
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        if str == "":
            return 0
        str += ' '
        int32min = -2147483648
        int32max = +2147483647
        firstindex = 0
        for i in range(len(str)):
            c = str[i]
            if c == '-' or c == '+' or c.isdigit():
                firstindex = i
                break
            elif c != ' ':
                return 0
        secondindex = firstindex
        for i in range(firstindex + 1, len(str)):
            c = str[i]
            if c.isdigit() == False:
                secondindex = i
                break
        numstr = str[firstindex:secondindex]
        if numstr == '' or (len(numstr) == 1 and numstr[0].isdigit() == False):
            return 0
        num = int(numstr)
        if num > int32max:
            num = int32max
        elif num < int32min:
            num = int32min
        return num

```


