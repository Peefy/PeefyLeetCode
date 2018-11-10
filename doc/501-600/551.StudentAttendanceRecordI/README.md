
# problem 551 : Student Attendance Record I

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/551.StudentAttendanceRecordI/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool checkRecord(string s) {
        int Acount = 0;
        int Lcount = 0;
        for (char c : s){
            Acount += c == 'A' ? 1 : 0;
            if (Acount >= 2)
                return false;
            Lcount = c == 'L' ? Lcount + 1 : 0; 
            if (Lcount >= 3)
                return false;
        }           
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool CheckRecord(string s) {
        int Acount = 0;
        int Lcount = 0;
        foreach (char c in s){
            Acount += c == 'A' ? 1 : 0;
            if (Acount >= 2)
                return false;
            Lcount = c == 'L' ? Lcount + 1 : 0; 
            if (Lcount >= 3)
                return false;
        }           
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean checkRecord(String s) {
        int Acount = 0;
        int Lcount = 0;
        for (char c : s.toCharArray()){
            Acount += c == 'A' ? 1 : 0;
            if (Acount >= 2)
                return false;
            Lcount = c == 'L' ? Lcount + 1 : 0; 
            if (Lcount >= 3)
                return false;
        }           
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        Acount = 0
        Lcount = 0
        for c in s:
            Acount += 1 if c == 'A' else 0
            if Acount >= 2:
                return False
            Lcount = Lcount + 1 if c == 'L' else 0 
            if Lcount >= 3:
                return False
        return True

```





