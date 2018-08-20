
# problem 387 : FirstUniqChar

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/387.FirstUniqChar/problem.png"/>

* 统计字符串字符的题目采用记录表int record[26]
* python 可以使用collections.Counter

## C++ Solution

```c++

class Solution {
public:
    int firstUniqChar(string s) {
        int record[26] = {0};
        for (int i = 0;i < s.length();++i){
            record[s[i] - 'a']++;
        }
        for (int i = 0;i < s.length();++i){
            if(record[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};

```

## C# Solution

```csharp

class Solution {
    public int FirstUniqChar(String s) {
     int result = -1;
	        for(char c = 'a';c<='z';c++){
	            int index = s.IndexOf(c);
	            if(index != -1 && index == s.LastIndexOf(c)){
	                result = result != -1?Math.Min(result,index):index;
	            }
	        }
	        return result;
    }
}

```

## Java Solution

```java

class Solution {

    public int find(char[] arr, char c){
        int index = -1;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == c)
                return i;
        }
        return -1;
    }

    public int rfind(char[] arr, char c){
        int index = -1;
        for (int i = arr.length - 1; i >= 0; i--) {
            if (arr[i] == c)
                return i;
        }
        return -1;
    }

    public int firstUniqChar(String s) {
        char[] arr = s.toCharArray();
        HashSet<Character> hash = new HashSet<>();
        int ans = arr.length;
        for (int i = 0; i < ans; i++) {
            hash.add(arr[i]);
        }
        for(Character c : hash){
            int c_s = find(arr, c);
            int c_r = rfind(arr, c);
            if (c_s == c_r && c_s != -1){
                ans = Math.min(ans, c_s);
            }
        }
        return ans < arr.length ? ans : -1;
    }
}

```

## Python Solution

```python

from collections import Counter

class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        counter = Counter(s)
        index = len(s)
        for k in counter.keys():
            if counter.get(k) == 1:
                index = min(index, s.index(k))
        return index if index < len(s) else -1

```





