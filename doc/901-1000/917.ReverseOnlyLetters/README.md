
# problem 917 : ReverseOnlyLetters

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/917.ReverseOnlyLetters/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string reverseOnlyLetters(string S) {
        int left = 0;
        int right = S.length() - 1;
        while (left < right){
            while (left < right && isalpha(S[left]) == false)
                left += 1;
            while (left < right && isalpha(S[right]) == false) 
                right -= 1;
            if (left < right){
                swap(S[left], S[right]);
                left += 1;
                right -= 1;
            }
        }
        return S;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ReverseOnlyLetters(string S) {
        Stack<char> res = new Stack<char>();
        string s = "";
        foreach (char i in S){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
                res.Push(i);
        }    
        foreach (char i in S){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z')){
                s += res.Pop();
            }
            else
                s += i;
        }
        return s;
    }
}

```

## Java Solution

```java

class Solution {
    public String reverseOnlyLetters(String S) {
        LinkedList<Character> res = new LinkedList<>();
        String s = "";
        for (char i : S.toCharArray()){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
                res.add(i);
        }    
        for (char i : S.toCharArray()){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z')){
                s += res.removeLast();
            }
            else
                s += i;
        }
        return s;
    }
}

```

## Python Solution

```python

class Solution:
    def reverseOnlyLetters(self, S):
        """
        :type S: str
        :rtype: str
        """
        S = list(S)
        left = 0
        right = len(S) - 1
        while left < right:
            while left <= len(S) - 1 and S[left].isalpha() == False: 
                left += 1
            while right >= 0 and S[right].isalpha() == False: 
                right -= 1
            if left < right:
                S[left], S[right] = S[right], S[left]
                left += 1
                right -= 1
        return ''.join(S)

```





