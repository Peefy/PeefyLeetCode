
# problem 415 : AddStrings

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/415.AddStrings/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.length();
        int n2 = num2.length();
        int n = n1;
        int c = 0;
        string num = "";
        if (n1 < n2) {
            n = n2;
            for (int i = 0; i < n2 - n1; i++) {
                num1 = "0" + num1;
            }
        } else {
            n = n1;
            for (int i = 0; i < n1 - n2; i++) {
                num2 = "0" + num2;
            }
        }
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
            int bit = num1[j] - '0' + num2[j] - '0' + c;
            if (bit >= 10) {
                c = 1;
                bit -= 10;
            } else {
                c = 0;
            }
            num = (char)(bit + '0') + num;
        }
        if (c == 1) {
            num = (char)(c + '0') + num;
        }
        return num;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string AddStrings(string num1, string num2) {
        var arr1 = num1.ToCharArray();
        var arr2 = num2.ToCharArray();
        var n1 = arr1.Length;
        var n2 = arr2.Length;
        var c = 0;
        var bit = 0;
        if (n1 > n2)
            return AddStrings(num2, num1);
        var sub = n2 - n1;
        char[] num = new char[n2];
        for (int i = 0; i < n1; i++)
        {
            int j = n1 - i - 1;
            bit = arr1[j] - '0' + arr2[j + sub] - '0' + c;
            if (bit >= 10)
            {
                c = 1;
                bit -= 10;
            }
            else
                c = 0;      
            num[n2 - 1 - i] = (char)(bit + '0');
        }
        for (int i = n1; i < n2; i++)
        {
            int j = n2 - i - 1;
            bit = arr2[j] - '0' + 0 + c;
            if (bit >= 10)
            {
                c = 1;
                bit -= 10;
            }
            else
                c = 0;      
            num[j] = (char)(bit + '0');
        }
        if (c == 1)
        {
            return "1" + new string(num);
        }
        return new string(num);
    }
}

```

## Java Solution

```java

class Solution {
    public String addStrings(String num1, String num2) {
        int n1 = num1.length();
        int n2 = num2.length();
        int n = n1;
        int c = 0;
        String num = "";
        if (n1 < n2) {
            n = n2;
            for (int i = 0; i < n2 - n1; i++) {
                num1 = "0" + num1;
            }
        } else {
            n = n1;
            for (int i = 0; i < n1 - n2; i++) {
                num2 = "0" + num2;
            }
        }
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
            int bit = num1.charAt(j) - '0' + num2.charAt(j) - '0' + c;
            if (bit >= 10) {
                c = 1;
                bit -= 10;
            } else {
                c = 0;
            }
            num = (char)(bit + '0') + num;
        }
        if (c == 1) {
            num = (char)(c + '0') + num;
        }
        return num;
    }
}

```

## Python Solution

```python

class Solution:
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        n1 = len(num1)
        n2 = len(num2)
        if n1 < n2:
            num1 = '0' * (n2 - n1) + num1
            n = n2
        else:
            num2 = '0' * (n1 - n2) + num2
            n = n1
        num = []
        c = 0
        for i in range(n):
            j = n - 1 - i
            bit = int(num1[j]) + int(num2[j]) + c       
            if bit >= 10:
                bit -= 10
                c = 1 
            else:
                c = 0
            num.append(str(bit))
        if c == 1:
            num.append('1')
        num = num[::-1]
        return ''.join(num)

```





