
# problem 245 : ShortestWordDistanceIII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/245.ShortestWordDistanceIII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int shortestWordDistance(vector<string> words, string word1, string word2) {
        int res = words.size();
        int a = -1;
        int b = -1;
        for(int i = 0; i < words.size(); i++){
            if(words[i] == word1){
                a = i;
            }
            if(words[i] == word2){
                if(word1 == word2){
                    a = b;
                }
                b = i;
            }
            if(a != -1 && b != -1){
                res = min(res, abs(a - b));
            }
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int shortestWordDistance(string[] words, string word1, string word2) {
        int res = words.Length;
        int a = -1;
        int b = -1;
        for(int i = 0 ; i < words.Length; i++){
            if(words[i].Equals(word1)){
                a = i;
            }
            if(words[i].Equals(word2)){
                if(word1.Equals(word2)){
                    a = b;
                }
                b = i;
            }
            if(a != -1 && b != -1){
                res = Math.Min(res, Math.Abs(a - b));
            }
        }
        return res;
    }
}  

```

## Java Solution

```java

class Solution {
    public int shortestWordDistance(String[] words, String word1, String word2) {
        int res = words.length;
        int a = -1;
        int b = -1;
        for(int i=0 ; i<words.length ; i++){
            if(words[i].equals(word1)){
                a = i;
            }
            if(words[i].equals(word2)){
                if(word1.equals(word2)){
                    a = b;
                }
                b = i;
            }
            if(a != -1 && b != -1){
                res = Math.min(res, Math.abs(a - b));
            }
        }
        return res;
    }
}   

```

## Python Solution

```python

class Solution:
    def shortestWordDistance(self, words, word1, word2):
        res = len(words)
        a = -1
        b = -1
        for i in range(len(words)):
            if words[i] == word1:
                a = i
            if words[i] == word2:
                if word1 == word2:
                    a = b
                b = i
            if a != -1 and b != -1:
                res = min(res, abs(a - b))
        return res     

```




