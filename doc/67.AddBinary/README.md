
# problem 67 : AddBinary

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/67.AddBinary/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    string addBinary(string a, string b)
    {
        int jinzhi = 2;
        int n1 = a.length();
        int n2 = b.length();
        int i = 0;
        string sum = "";
        int n = n1 > n2 ? n1 : n2;
        int c = 0;
        while (i < n - n1)
        {
            a = "0" + a;
            i += 1;
        }
        while (i < n - n2)
        {
            b = "0" + b;
            i += 1;
        }
        i = n - 1;
        while (i >= 0)
        {
            int r = (a[i] - '0') + (b[i] - '0') + c;
            c = r / jinzhi;
            r = r % jinzhi;
            sum = (char)(r + '0') + sum;
            i -= 1;
        }
        if (c == 1)
            sum = "1" + sum;
        return sum;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public string AddBinary(string a, string b)
        {
            var jinzhi = 2;
            var n1 = a.Length;
            var n2 = b.Length;
            var i = 0;
            var sum = "";
            var n = n1 > n2 ? n1 : n2;
            var c = 0;
            while (i < n - n1)
            {
                a = "0" + a;
                i += 1;
            }
            while (i < n - n2)
            {
                b = "0" + b;
                i += 1;
            }
            i = n - 1;
            while (i >= 0)
            {
                var r = (a[i] - '0') + (b[i] - '0') + c;
                c = r / jinzhi;
                r = r % jinzhi;
                sum = r.ToString() + sum;
                i -= 1;
            }
            if (c == 1)
                sum = "1" + sum;
            return sum;
        }
    }

```

## Java Solution

```java

class Solution {
    public String addBinary(String a, String b) {
        int jinzhi = 2;
        int n1 = a.length();
        int n2 = b.length();
        int i = 0;
        String sum = "";
        int n = n1 > n2 ? n1 : n2;
        int c = 0;
        while (i < n - n1) {
            a = "0" + a;
            i += 1;
        }
        while (i < n - n2) {
            b = "0" + b;
            i += 1;
        }
        i = n - 1;
        while (i >= 0) {
            Integer r = (a.charAt(i) - '0') + (b.charAt(i) - '0') + c;
            c = r / jinzhi;
            r = r % jinzhi;
            sum = r.toString() + sum;
            i -= 1;
        }
        if (c == 1)
            sum = "1" + sum;
        return sum;
    }
}

```

## Python Solution

```python

class Solution:
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        JINZHI = 2
        n1 = len(a)
        n2 = len(b)
        n = max(n1, n2)
        i = 0
        sum = ""
        while i < n - n1:
            a = "0" + a
            i += 1
        i = 0
        while i < n - n2:
            b = "0" + b
            i += 1
        i = n - 1
        c = 0
        while i >= 0:
            r = int(a[i]) + int(b[i]) + c
            c = r // JINZHI
            r = r % JINZHI
            sum = str(r) + sum
            i -= 1
        if c == 1:
            sum = "1" + sum
        return sum

```


