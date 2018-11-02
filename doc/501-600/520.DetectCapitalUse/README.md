
# problem 520 : DetectCapitalUse

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/520.DetectCapitalUse/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int count = 0;
        for (auto c : word)
        {
            if (c >= 'A' && c <= 'Z')
                count++;
        }      
        if (count == 0 || count == n)
            return true;
        if (count == 1 && (word[0] >= 'A' && word[0] < 'Z'))
            return true;
        return false;    
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool DetectCapitalUse(string word) {
        int n = word.Length;
        int count = 0;
        foreach (var c in word)
        {
            if (c >= 'A' && c <= 'Z')
                count++;
        }      
        if (count == 0 || count == n)
            return true;
        if (count == 1 && (word[0] >= 'A' && word[0] < 'Z'))
            return true;
        return false;
    }
}

```

## Java Solution

```java


class Solution {
    public boolean detectCapitalUse(String word) {
        char[] list = word.toCharArray();
        int n = list.length;
        if (n <= 1) {
            return true;
        }
        char first = list[0];
        char second = list[1];
        int mode = 0;
        if (first >= 'a' && first <= 'z')
            mode = 2;
        else
            mode = (second >= 'A' && second <= 'Z') ? 1 : 3;
        for (int i = 1; i < n; i++) {
            if (mode == 1 && (list[i] >= 'a' && list[i] <= 'z'))
                return false;
            if (mode == 2 && (list[i] >= 'A' && list[i] <= 'Z'))
                return false;
            if (mode == 3 && (list[i] >= 'A' && list[i] <= 'Z'))
                return false;
        }
        return true; 
    }
}


```

## Python Solution

```python

class Solution:
    def detectCapitalUse(self, word):
        """
        :type word: str
        :rtype: bool
        """
        return if word.islower() or word.isupper() or (len(word)>1 and word.title() == word)

```





