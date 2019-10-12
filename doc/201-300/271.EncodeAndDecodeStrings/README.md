
# problem 271 : EncodeAndDecodeStrings

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/271.EncodeAndDecodeStrings/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
 
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string result;
        for(auto str: strs) result += to_string((int)str.size())+"$"+str;   
        return result;
    }
 
    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;
        int len = s.size(), pos = 0;
        while(pos < len)
        {
            int k = s.find('$', pos), num = stoi(s.substr(pos, k-pos));
            result.push_back(s.substr(k+1, num));
            pos = k+num+1;
        }
        return result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    // Encodes a list of strings to a single string.
    public string Encode(List<string> strs) {
        var sb = new StringBuilder();
        foreach (var str in strs) {
            foreach (var ch in str) {
                switch (ch) {
                case ',':
                    sb.Append(",!");
                    break;
                case '!':
                    sb.Append("!!");
                    break;
                default:
                    sb.Append(ch);
                    break;
                }
            }
            sb.Append(",");
        }
        return sb.ToString();
    }

    // Decodes a single string to a list of strings.
    public List<string> Decode(string s) {
        var result = new List<string>();
        var sb = new StringBuilder();
        char[] chArr = s.ToCharArray();
        for (int i = 0; i < chArr.Length; i++) {
            if (chArr[i] == ',') {
                int cursor = i + 1;
                while (cursor < chArr.Length && chArr[cursor] == '!') {
                    cursor++;
                }

                if ((cursor - i) % 2 == 1) {
                    result.Add(sb.ToString());
                    sb.Clear();
                } else {
                    sb.Append(',');
                    i++;
                }

                for (int j = i + 1; j < cursor; j += 2) {
                    sb.Append('!');
                }
                i = cursor - 1;
            } else if (chArr[i] == '!') {
                sb.Append('!');
                i++;
            } else {
                sb.Append(chArr[i]);
            }
        }
        return result;
    }
}

```

## Java Solution

```java

class Solution {
    // Encodes a list of strings to a single string.
    public String encode(List<String> strs) {
        StringBuilder sb = new StringBuilder();
        for (String str : strs) {
            char[] chArr = str.toCharArray();
            for (char ch : chArr) {
                switch (ch) {
                case ',':
                    sb.append(",!");
                    break;
                case '!':
                    sb.append("!!");
                    break;
                default:
                    sb.append(ch);
                    break;
                }
            }
            sb.append(",");
        }
        return sb.toString();
    }

    // Decodes a single string to a list of strings.
    public List<String> decode(String s) {
        List<String> result = new LinkedList<String>();
        StringBuilder sb = new StringBuilder();
        char[] chArr = s.toCharArray();
        for (int i = 0; i < chArr.length; i++) {
            if (chArr[i] == ',') {
                int cursor = i + 1;
                while (cursor < chArr.length && chArr[cursor] == '!') {
                    cursor++;
                }

                if ((cursor - i) % 2 == 1) {
                    result.add(sb.toString());
                    sb.delete(0, sb.length());
                } else {
                    sb.append(',');
                    i++;
                }

                for (int j = i + 1; j < cursor; j += 2) {
                    sb.append('!');
                }
                i = cursor - 1;
            } else if (chArr[i] == '!') {
                sb.append('!');
                i++;
            } else {
                sb.append(chArr[i]);
            }
        }
        return result;
    }
}


```

## Python Solution

```python

class Solution:
    def encode(self, strs):
        sb = []
        for s in strs:
            for c in s:
                if c == ',':
                    sb.append(',!')
                elif c == '!':
                    sb.append('!!')
                else:
                    sb.append(c)
            sb.append(',')
        return ''.join(sb)


    def decode(self, s):
        ans = []
        sb = []
        i = 0
        while i < len(s):
            c = s[i]
            if c == ',':
                cursor = i + 1
                while cursor < len(s) and s[cursor] == '!':
                    cursor += 1
                if (cursor - i) % 2 == 1:
                    ans.append(''.join(sb))
                    sb.clear()
                else:
                    sb.append(',')
                    i += 1
                for j in range(i + 1, cursor, 2):
                    sb.append('!')
                i = cursor - i
            elif c == '!':
                sb.append('!')
                i += 1
            else:
                sb.append(c)
            i += 1
        return ans     

```




