
# problem 500 : KeyboardRow

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/500.KeyboardRow/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string firstLineLower = "qwertyuiop";
        string firstLineUpper = "QWERTYUIOP";
        string secondLineLower = "asdfghjkl";
        string secondLineUpper = "ASDFGHJKL";
        string thirdLineLower = "zxcvbnm";
        string thirdLineUpper = "ZXCVBNM";
        vector<string> r;
        for(auto word : words){
            auto count = 0;
            int flag[3] = {0 ,0 ,0};
            auto length = word.length();
            for(auto letter : word){
                if ((firstLineLower.find(letter) != -1) || 
                    (firstLineUpper.find(letter) != -1)){
                        if (flag[1] + flag[2] >= 1)
                            break;
                        flag[0] = 1;
                        count += 1;
                    }
                if ((secondLineLower.find(letter) != -1) || 
                    (secondLineUpper.find(letter) != -1)){
                        if (flag[0] + flag[2] >= 1)
                            break;
                        flag[1] = 1;
                        count += 1;
                    }
                if ((thirdLineLower.find(letter) != -1) || 
                    (thirdLineUpper.find(letter) != -1)){
                        if (flag[0] + flag[1] >= 1)
                            break;
                        flag[2] = 1;
                        count += 1;
                    }
            }
            if (count == length)
                r.push_back(word);
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    public string[] FindWords(string[] words) 
    {
        string firstLineLower = "qwertyuiop";
        string firstLineUpper = "QWERTYUIOP";
        string secondLineLower = "asdfghjkl";
        string secondLineUpper = "ASDFGHJKL";
        string thirdLineLower = "zxcvbnm";
        string thirdLineUpper = "ZXCVBNM";
        var r = new List<string>();
        foreach(string word in words)
        {
            int count = 0;
            int[] flag = new int[3]{0, 0 ,0};
            int length = word.Length;
            foreach (var letter in word)
            {
                if ((firstLineLower.IndexOf(letter) != -1) || 
                    (firstLineUpper.IndexOf(letter) != -1)){
                        if (flag[1] + flag[2] >= 1)
                            break;
                        flag[0] = 1;
                        count += 1;
                    }
                if ((secondLineLower.IndexOf(letter) != -1) || 
                    (secondLineUpper.IndexOf(letter) != -1)){
                        if (flag[0] + flag[2] >= 1)
                            break;
                        flag[1] = 1;
                        count += 1;
                    }
                if ((thirdLineLower.IndexOf(letter) != -1) || 
                    (thirdLineUpper.IndexOf(letter) != -1)){
                        if (flag[0] + flag[1] >= 1)
                            break;
                        flag[2] = 1;
                        count += 1;
                    }
            }
            if (count == length)
                r.Add(word);
        } 
        return r.ToArray();
    }
}

```

## Java Solution

```java

class Solution {
    public String[] findWords(String[] words) {
        String firstLineLower = "qwertyuiop";
        String firstLineUpper = "QWERTYUIOP";
        String secondLineLower = "asdfghjkl";
        String secondLineUpper = "ASDFGHJKL";
        String thirdLineLower = "zxcvbnm";
        String thirdLineUpper = "ZXCVBNM";
        LinkedList<String> r = new LinkedList<>();
        for(String word : words){
            int count = 0;
            int[] flag = new int[3];
            int length = word.length();
            for(char letter : word.toCharArray()){
                if ((firstLineLower.indexOf(letter) != -1) || 
                    (firstLineUpper.indexOf(letter) != -1)){
                        if (flag[1] + flag[2] >= 1)
                            break;
                        flag[0] = 1;
                        count += 1;
                    }
                if ((secondLineLower.indexOf(letter) != -1) || 
                    (secondLineUpper.indexOf(letter) != -1)){
                        if (flag[0] + flag[2] >= 1)
                            break;
                        flag[1] = 1;
                        count += 1;
                    }
                if ((thirdLineLower.indexOf(letter) != -1) || 
                    (thirdLineUpper.indexOf(letter) != -1)){
                        if (flag[0] + flag[1] >= 1)
                            break;
                        flag[2] = 1;
                        count += 1;
                    }
            }
            if (count == length)
                r.add(word);
        } 
        return r.toArray(new String[r.size()]);
    }
}

```

## Python Solution

```python

class Solution:
    firstLine = set('qwertyuiop')
    secondLine = set('asdfghjkl')
    thirdLine = set('zxcvbnm')
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        r = []
        for word in words:
            lowerWord = word.lower()
            if set(lowerWord).issubset(self.firstLine) or \
                 set(lowerWord).issubset(self.secondLine) or \
                 set(lowerWord).issubset(self.thirdLine):
                 r.append(word)
        return r

```





