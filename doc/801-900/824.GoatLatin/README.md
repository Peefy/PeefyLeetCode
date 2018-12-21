
# problem 824 : GoatLatin

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/824.GoatLatin/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string toGoatLatin(string S) {
        set<char> yuanyin = {'a', 'e', 'i', 'o', 'u', 'I', 'E', 'A', 'O', 'U'};
        S.push_back(' ');
        int lastwordindex = 0;
        int nowwordfirstindex = 0;
        int length = S.length();
        for (int i = 0; i < length; ++i){
            if (S[i] == ' '){
                if (yuanyin.find(S[nowwordfirstindex]) == yuanyin.end()){
                    char first = S[nowwordfirstindex];
                    S.insert(S.begin() + i, first);
                    S.erase(S.begin() + nowwordfirstindex);
                } 
                S.insert(S.begin() + i, 'm');
                ++length;
                S.insert(S.begin() + i + 1, 'a');
                ++length;
                for (int j = 0;j <= lastwordindex; ++j){
                    S.insert(S.begin() + i + 1 + j, 'a');
                    ++length;
                }      
                lastwordindex++;
                i += (2 + lastwordindex);
                nowwordfirstindex = i + 1;
            }
        }
        S.pop_back();
        return S;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string ToGoatLatin(string S) {
        HashSet<char> yuanyin = new HashSet<char> {'a', 'e', 'i', 'o', 'u', 'I', 'E', 'A', 'O', 'U'};
        string[] words = S.Split(' ');
        for (int i = 0; i < words.Length; i++)
        {
            if (yuanyin.Contains(words[i][0]) == false){
                words[i] = words[i].Substring(1) + words[i][0];
            }
            words[i] += "ma";
            for (int j = 0; j <= i; j++)
            {
                words[i] += 'a';
            }
        }
        return string.Join(" ", words);
    }
}

```

## Java Solution

```java

class Solution {

    public boolean isYuanYin(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    public String toGoatLatin(String S) {
        String[] words = S.split(" ");
        for (int i = 0; i < words.length; i++)
        {
            if (isYuanYin(words[i].charAt(0)) == false){
                words[i] = words[i].substring(1) + words[i].charAt(0);
            }
            words[i] += "ma";
            for (int j = 0; j <= i; j++)
            {
                words[i] += 'a';
            }
        }
        return String.join(" ", words);
    }
}

```

## Python Solution

```python

class Solution:
    def toGoatLatin(self, S):
        """
        :type S: str
        :rtype: str
        """
        yuanyin = {'a', 'e', 'i', 'o', 'u', 'I', 'E', 'A', 'O', 'U'}
        words = S.split(' ')
        for i in range(len(words)):
            if words[i][0] in yuanyin:
                words[i] += "ma" + "a" * (i + 1)
            else:
                words[i] = words[i][1:] + words[i][0] + "ma" + "a" * (i + 1)
        return ' '.join(words)

```





