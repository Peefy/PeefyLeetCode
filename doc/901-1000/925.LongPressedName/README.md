
# problem 925 : LongPressedName

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/925.LongPressedName/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        for(int j = 0; j < typed.length(); j++){
            if (i < name.length() && name[i] == typed[j])
                i += 1;
            else if (j == 0 || typed[j] != typed[j - 1])
                return false;
        }
        return i == name.length();
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsLongPressedName(string name, string typed) {
        int i = 0;
        for(int j = 0; j < typed.Length; j++){
            if (i < name.Length && name[i] == typed[j])
                i += 1;
            else if (j == 0 || typed[j] != typed[j - 1])
                return false;
        }
        return i == name.Length;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int i = 0;
        for(int j = 0; j < typed.length(); j++){
            if (i < name.length() && name.charAt(i) == typed.charAt(j))
                i += 1;
            else if (j == 0 || typed.charAt(j) != typed.charAt(j - 1))
                return false;
        }
        return i == name.length();
    }
}

```

## Python Solution

```python

class Solution:
    def isLongPressedName(self, name, typed):
        """
        :type name: str
        :type typed: str
        :rtype: bool
        """
        i = 0
        for j in range(len(typed)):
            if i < len(name) and name[i] == typed[j]:
                i += 1
            elif j == 0 or typed[j] != typed[j - 1]:
                return False
        return i == len(name)

```





