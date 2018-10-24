
# problem 482 : LicenseKeyFormatting

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/482.LicenseKeyFormatting/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        auto n = S.length();
        auto count = 0;
        vector<char> chars;
        for(int i = 0; i < n; i++)
        {
            auto j = n - i - 1;
            if (S[j] == '-')
                continue;
            if (S[j] >= 'a' && S[j] <= 'z')
                chars.push_back(S[j] - 'a' + 'A');
            else
                chars.push_back(S[j]);
            count++;
            if (count % K == 0)
                chars.push_back('-');
        }
        auto size = chars.size();
        if (size > 0 && chars.back() == '-')
            chars.pop_back();
        return string(chars.rbegin(), chars.rend());
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string LicenseKeyFormatting(string S, int K) {
        var n = S.Length;
        var count = 0;
        var chars = new List<char>();
        for(int i = 0; i < n; i++)
        {
            var j = n - i - 1;
            if (S[j] == '-')
                continue;
            if (S[j] >= 'a' && S[j] <= 'z')
                chars.Add((char)(S[j] - 'a' + 'A'));
            else
                chars.Add(S[j]);
            count++;
            if (count % K == 0)
                chars.Add('-');
        }
        var size = chars.Count;
        if (size > 0 && chars.Last() == '-')
            chars.RemoveAt(size - 1);
        chars.Reverse();
        return new string(chars.ToArray());
    }
}

```

## Java Solution

```java

class Solution {
    public String licenseKeyFormatting(String S, int K) {
        char[] Sarr = S.toCharArray();
        int n = Sarr.length;
        int count = 0;
        int size = 0;
        LinkedList<Character> chars = new LinkedList<>();
        for(int i = 0; i < n; i++)
        {
            int j = n - i - 1;
            if (Sarr[j] == '-')
                continue;
            if (Sarr[j] >= 'a' && Sarr[j] <= 'z')
                chars.add((char)(Sarr[j] - 'a' + 'A'));
            else
                chars.add(Sarr[j]);
            count++;
            size++;
            if (count % K == 0){
                chars.add('-');
                size++;
            }
        }
        
        if (size > 0 && chars.getLast() == '-')
            chars.removeLast();
        Character[] charsarr = new Character[size];
        Collections.reverse(chars);
        chars.toArray(charsarr);
        return chars.stream()
                     .map(String::valueOf)
                     .collect(Collectors.joining());
    }
}

```

## Python Solution

```python

class Solution:
    def licenseKeyFormatting(self, S, K):
        """
        :type S: str
        :type K: int
        :rtype: str
        """
        r_list = []
        n = len(S)
        count = 0
        orda = ord('a')
        ordz = ord('z')
        ordA = ord('A')
        for i in range(-1, -(n + 1), -1):
            if S[i] == '-':
                continue
            if ord(S[i]) >= orda and ord(S[i]) <= ordz:
                r_list.append(chr(ord(S[i]) - orda + ordA))
            else:
                r_list.append(S[i])
            count += 1
            if count % K == 0:
                r_list.append('-')
        if len(r_list) > 0 and r_list[-1] == '-':
            r_list.pop()
        return ''.join(r_list[::-1])

```





