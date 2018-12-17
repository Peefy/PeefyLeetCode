
# problem 804 : UniqueMorseRepresentations

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/804.UniqueMorseRepresentations/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> morsewords;
        for(string word : words){
            string l = "";
            for (char c : word)
                l += morse[c - 'a'];
            morsewords.insert(l);
        }
        return morsewords.size();
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int UniqueMorseRepresentations(string[] words) {
        string[] morse = new string[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        HashSet<String> morsewords = new HashSet<string>();
        foreach (var word in words){
            string l = "";
            foreach (char c in word)
                l += morse[c - 'a'];
            if (morsewords.Contains(l) == false)
            {
                morsewords.Add(l);
            }        
        }
        return morsewords.Count;
    }
}

```

## Java Solution

```java

class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] morse = new String[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        HashSet<String> morsewords = new HashSet<>();  
        for(String word : words){
            String l = "";
            for (char c : word.toCharArray())
                l += morse[c - 'a'];
            morsewords.add(l);
        }
        return morsewords.size();
    }
}

```

## Python Solution

```python

class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        morsewords = set()
        for word in words:
            l = ""
            for c in word:
                l += morse[ord(c) - ord('a')]
            morsewords.add(l)
        return len(morsewords)

```





