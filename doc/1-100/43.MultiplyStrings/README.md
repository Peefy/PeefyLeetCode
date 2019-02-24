
# Problem 43 : MultiplyStrings

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/43.MultiplyStrings/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string strnumadd(string num1, string num2){
        int len1 = num1.length();
        int len2 = num2.length();
        for(int i = 0; i < len1 - len2; i++){
            num2 = '0' + num2;
        }   
        int c = 0;
        string rstr = "";
        for(int i = 0; i < len1; i++){
            int j = len1 - 1 - i;
            int r = num1[j] - '0' + num2[j] - '0' + c;
            c = r / 10;
            rstr = (char)(r % 10 + '0') + rstr;
        }   
        if (c != 0)
            rstr = '1' + rstr;
        return rstr;
    }

    string multiply(string num1, string num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        if (len1 < len2)
            return multiply(num2, num1);
        for(int i = 0; i < len1 - len2; i++){
            num2 = '0' + num2;
        }   
        int c = 0;
        string result = "0";
        for(int i = 0; i < len1; i++){
            int j = len1 - i - 1;
            int bit = num2[j] - '0';
            if (bit == 0)
                continue;
            int c = 0;
            string rstr = "";
            for(int k = 0; k < len1; k++){
                int q = len1 - k - 1;
                int r = (num1[q] - '0') * bit + c;
                c = r / 10;
                rstr = (char)(r % 10 + '0') + rstr;
            }
            if (c != 0)
                rstr = (char)(c + '0') + rstr;
            for (int ii = 0;ii < i;++ii)
                rstr += '0';
            result = strnumadd(rstr, result);
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string Multiply(string num1, string num2) {
        int len1 = num1.Length;
        int len2 = num2.Length;
        int k = len1 + len2 - 1;
        int cur=0, carry = 0;
        int[] tmp = new int[len1 + len2];
        StringBuilder res = new StringBuilder();
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                tmp[k - i - j - 1] += (num1[i] - '0') * (num2[j] - '0'); 
            }
        }
        for(int i=0; i<k+1; i++){
            cur = (tmp[i] + carry)%10;
            carry = (tmp[i] + carry)/10;
            tmp[i] = cur;
        }
        int ii = k;
        while(ii >= 0 && tmp[ii] == 0) 
            ii--;
        if(ii<0) return "0";
        while(ii>=0) res.Append((char)(tmp[ii--]+'0'));
        return res.ToString();
    }
}

```

## Java Solution

```java

class Solution {
    public String multiply(String num1, String num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        int k = len1 + len2 - 1;
        int cur=0, carry = 0;
        int[] tmp = new int[len1 + len2];
        StringBuffer res = new StringBuffer();
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                tmp[k - i - j - 1] += (num1.charAt(i) - '0') * (num2.charAt(j) - '0'); 
            }
        }
        for(int i=0; i<k+1; i++){
            cur = (tmp[i] + carry)%10;
            carry = (tmp[i] + carry)/10;
            tmp[i] = cur;
        }
        int i = k;
        while(i >= 0 && tmp[i] == 0) 
            i--;
        if(i<0) return "0";
        while(i>=0) res.append((char)(tmp[i--]+'0'));
        return res.toString();
    }
}


```

## Python Solution

```python

class Solution:
    def strnumadd(self, num1, num2):
        num2 = '0' * (len(num1) - len(num2)) + num2
        c = 0
        rstr = ''
        for i in range(len(num1)):
            j = len(num1) - 1 - i
            r = int(num1[j]) + int(num2[j]) + c
            c = r // 10
            rstr = str(r % 10) + rstr
        if c != 0:
            rstr = str(c) + rstr
        return rstr

    def multiply(self, num1: 'str', num2: 'str') -> 'str':
        len1 = len(num1)
        len2 = len(num2)
        if len1 < len2:
            return self.multiply(num2, num1)
        num2 = '0' * (len1 - len2) + num2
        c = 0
        result = '0'
        for i in range(len1):
            j = len1 - i - 1
            bit = int(num2[j])
            if bit == 0:
                continue
            c = 0
            rstr = ''
            for k in range(len1):
                q = len1 - k - 1
                r = int(num1[q]) * bit + c
                c = r // 10
                rstr = str(r % 10) + rstr
            if c != 0:
                rstr = str(c) + rstr
            rstr += '0' * i
            result = self.strnumadd(rstr, result)
        return result

```


