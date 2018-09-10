
# problem 434 : StringCountSegments

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/434.StringCountSegments/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int countSegments(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ' && (i == 0 || (s[i - 1] == ' '))){
                ++res;
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CountSegments(string s) {
        int count = 0;
        char[] s_arr = s.ToCharArray();
        int n = s_arr.Length;
        bool lastischar = false;
        for (int i = 0; i < n; i++) { 
            if (s_arr[i] != ' ' && lastischar == false){
                count += 1;
                lastischar = true;
            }              
            else if (s_arr[i] == ' ' && lastischar == true)
                lastischar = false;
        }
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    public int countSegments(String s) {
        int count = 0;
        char[] s_arr = s.toCharArray();
        int n = s_arr.length;
        boolean lastischar = false;
        for (int i = 0; i < n; i++) { 
            if (s_arr[i] != ' ' && lastischar == false){
                count += 1;
                lastischar = true;
            }              
            else if (s_arr[i] == ' ' && lastischar == true)
                lastischar = false;
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0
        n = len(s)
        lastischar = False
        for i in range(n):    
            o = ord(s[i])   
            if (o >= 33 and o <= 122) == True and lastischar == False:
                count += 1
                lastischar = True
            elif (o >= 33 and o <= 122)  == False and lastischar == True:
                lastischar = False
        return count

```





