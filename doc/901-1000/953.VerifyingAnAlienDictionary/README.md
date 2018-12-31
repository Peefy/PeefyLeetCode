
# problem 953 : VerifyingAnAlienDictionary

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/953.VerifyingAnAlienDictionary/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int reOrder[26] = {0};

    bool compareto(string a, string b){
        for(int i = 0; i < a.length(); ++i)
        {
            if(i >= b.length())
                return false;
            if(reOrder[a[i]-'a'] > reOrder[b[i] - 'a'])
                return false;
            else if (reOrder[a[i]-'a'] < reOrder[b[i]-'a'])
                return true;
            else 
                continue;
        }
        return true;
    }
   
    bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 0;i < 26;++i){
            reOrder[order[i] - 'a'] = i; 
        } 
        for (int i = 0; i < words.size() - 1; ++i){
            if (compareto(words[i], words[i + 1]) == false)
                return false;
        }           
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    int[] reOrder;

    bool compareto(char[] a, char[] b){
        for(int i = 0; i < a.Length; ++i)
        {
            if(i >= b.Length)
                return false;
            if(reOrder[a[i]-'a'] > reOrder[b[i] - 'a'])
                return false;
            else if (reOrder[a[i]-'a'] < reOrder[b[i]-'a'])
                return true;
            else 
                continue;
        }
        return true;
    }
    public bool IsAlienSorted(string[] words, string order) {
        reOrder = new int[26];
        for (int i = 0;i < 26;++i){
            reOrder[order[i] - 'a'] = i; 
        } 
        for (int i = 0; i < words.Length - 1; ++i){
            if (compareto(words[i].ToCharArray(), words[i + 1].ToCharArray()) == false)
                return false;
        }           
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    int[] reOrder;

    boolean compareto(char[] a, char[] b){
        for(int i = 0; i < a.length; ++i)
        {
            if(i >= b.length)
                return false;
            if(reOrder[a[i]-'a'] > reOrder[b[i] - 'a'])
                return false;
            else if (reOrder[a[i]-'a'] < reOrder[b[i]-'a'])
                return true;
            else 
                continue;
        }
        return true;
    }

    public boolean isAlienSorted(String[] words, String order) {
        reOrder = new int[26];
        for (int i = 0;i < 26;++i){
            reOrder[order.charAt(i) - 'a'] = i; 
        } 
        for (int i = 0; i < words.length - 1; ++i){
            if (compareto(words[i].toCharArray(), words[i + 1].toCharArray()) == false)
                return false;
        }           
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def compareto(self, one, two, myorder):
        m = len(one)
        n = len(two)
        if m < n:
            return not self.compareto(two, one, myorder)
        for i in range(n):
            if myorder[ord(one[i]) - ord('a')] < myorder[ord(two[i]) - ord('a')]:
                return False
            elif myorder[ord(one[i]) - ord('a')] > myorder[ord(two[i]) - ord('a')]:
                return True
        return True

    def isAlienSorted(self, words, order):
        """
        :type words: List[str]
        :type order: str
        :rtype: bool
        """
        myorder = [0] * 26
        for i, o in enumerate(order):
            myorder[ord(o) - ord('a')] = i 
        for i in range(len(words) - 1):
            if self.compareto(words[i], words[i + 1], myorder) == True:
                return False
        return True

```





