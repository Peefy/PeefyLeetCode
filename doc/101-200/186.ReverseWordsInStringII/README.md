
# problem 186 : ReverseWordsInStringII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/186.ReverseWordsInStringII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void reverseWords(string &s) {
        int length = s.length();
        if (length == 0) {
            return;
        }
        reverseWords(s, 0, length - 1);
        int start = 0, end = 0;
        while (start < length) {
            end = start;
            while (end + 1 < length && s[end + 1] != ' ') {
                ++end;
            }
            reverseWords(s, start, end);
            start = end + 2;
        }
    }
private:
    void reverseWords(string &s, int start, int end) {
        while (start < end) {
            char c = s[start];
            s[start] = s[end];
            s[end] = c;
            ++start, --end;
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ReverseWords(String s) {
        return string.Join(' ', s.Split(' ').Reverse());
    }
}

```

## Java Solution

```java

public class Solution {
    public String reverseWords(String s) {
        List<String> words = Arrays.asList(s.split(" "));
        Collections.reverse(words);
        return String.join(" ", words);
    }
}

```

## Python Solution

```python

class Solution:
    def reverseWords(self, s):
        return ' '.join(s.split()[::-1])

```


