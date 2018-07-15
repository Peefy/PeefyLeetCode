
# problem 38 : CountAndSay

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/38.CountAndSay/problem.png"/>

## C++ Solution

```c++

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    string countAndSay(int n)
    {
        string result = "1";
        while (n-- > 1)
        {
            string newResult = "";
            for (int i = 0; i < result.size(); i++)
            {
                int count = 0;
                char c = result[i];

                while (i < result.size() && result[i] == c)
                {
                    i++;
                    count++;
                }
                i--;
                char num[10] = "";
                sprintf(num, "%d", count);
                newResult = newResult + num + c;
            }
            result = newResult;
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution
    {
        public string CountAndSay(int n)
        {
            string s = "";
            if (n <= 1)
            {
                return "1";
            }
            else
            {
                s = CountAndSay(n - 1);
                if (s == "1")
                {
                    return "11";
                }
                var len = s.Length;
                var count = 0;
                var first = s[0];
                var i = 0;
                var returnStr = "";
                while (i < len)
                {
                    if (first == s[i])
                        count += 1;
                    else
                    {
                        returnStr += $"{count}{first}";
                        first = s[i];
                        count = 1;
                    }        
                    i += 1;
                }
                returnStr += $"{count}{first}";
                return returnStr;
            }
        }
    }

```

## Java Solution

```java

public class CountAndSay {
    public String countAndSay(int n) {
        if (n <= 1){
            return "1";
        }          
        String s = countAndSay(n - 1);
        if (s == "1"){
            return "11";
        }
        char[] arr = s.toCharArray();
        char prev = arr[0];
        Integer count = 0;
        String temp = "";
        for (int i = 1;i < arr.length;++i){
            if (prev != arr[i]){
                temp = temp + count.toString() + prev;
                prev = arr[i];
                count = 1;
            }
            else
                count += 1;
        }
        temp = temp + count.toString() + prev;
        return temp;
    }  
}

```

## Python Solution

```python

class Solution:
    def nextcountAndSay(self, str):
        n = len(str)
        count = 0
        first = str[0]
        i = 0
        returnStr = ''
        while i < n:
            if first == str[i]:
                count += 1
            else:
                returnStr += '{}{}'.format(count, first)
                first = str[i]
                count = 1         
            i += 1
        returnStr += '{}{}'.format(count, first)
        return returnStr

    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        str = '1'
        if n == 1:
            return '1'
        else:
            for i in range(n - 1):
                returnStr = self.nextcountAndSay(str)
                str = returnStr
        return str

```


