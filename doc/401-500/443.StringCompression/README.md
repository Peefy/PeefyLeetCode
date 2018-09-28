
# problem 443 : StringCompression

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/443.StringCompression/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
int compress(vector<char>& chars) {
    int i = 0, j = 0, n = chars.size();
	while (j < n) {
		if (j == n - 1 || chars[j] != chars[j + 1]) {
			chars[i++] = chars[j++];
		} else {
			chars[i++] = chars[j];
            int k = j;
        	while (j < n && chars[j] == chars[k]) j++;
            	string s = to_string(j - k);
            for (char c : s) chars[i++] = c;
        }
    }
    return i;
}
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int Compress(char[] chars)
        {
            int n = chars.Length;
            int i = 0;
            int cnt = 0;
            int insert_pos = 0;
            char char_match = chars[0];
            while (i < n)
            {
                if (chars[i] == char_match)
                    ++cnt;
                else
                {
                    chars[insert_pos] = char_match;
                    ++insert_pos;
                    if (cnt > 1)
                    {
                        foreach (var cc in cnt.ToString())
                        {
                            chars[insert_pos] = cc;
                            ++insert_pos;
                        }
                    }
                    char_match = chars[i];
                    cnt = 1;
                }
                ++i;
            }
            chars[insert_pos] = char_match;
            ++insert_pos;
            if (cnt > 1)
            {
                foreach (var cc in cnt.ToString())
                {
                    chars[insert_pos] = cc;
                    ++insert_pos;
                }
            }
            return insert_pos;
        }
    }

```

## Java Solution

```java

class Solution {
    public int compress(char[] chars) {
        int n = chars.length;
        int i = 0;
        Integer cnt = 0;
        int insert_pos = 0;
        char char_match = chars[0];
        while (i < n) {
            if (chars[i] == char_match)
                ++cnt;
            else{
                chars[insert_pos] = char_match;
                ++insert_pos;
                if(cnt > 1){
                    for (char cc : cnt.toString().toCharArray()) {
                        chars[insert_pos] = cc;
                        ++insert_pos;
                    }
                } 
                char_match = chars[i];
                cnt = 1;
            }
            ++i;
        }
        chars[insert_pos] = char_match;
        ++insert_pos;
        if(cnt > 1){
            for (char cc : cnt.toString().toCharArray()) {
                chars[insert_pos] = cc;
                ++insert_pos;
            }
        }
        return insert_pos; 
    }
}

```

## Python Solution

```python

class Solution:
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        n = len(chars)
        k = 1
        count = 1
        for i in range(1, n):
            char = chars[i]
            char_before = chars[i - 1]
            if char != char_before:
                if count != 1:
                    countstr = str(count)
                    for j in range(len(countstr)):
                        chars[k] = countstr[j]
                        k += 1
                count = 1
                chars[k] = char
                k += 1
            else:
                count += 1
        if count != 1:
            countstr = str(count)
            for j in range(len(countstr)):
                chars[k] = countstr[j]
                k += 1
        return k

```





