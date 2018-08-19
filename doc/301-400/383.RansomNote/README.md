
# problem 383 : RansomNote

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/301-400/383.RansomNote/problem.png"/>

* c++解答为完美解答，建立字母统计表int record[26],可将时间复杂度减少为O(1),不需要for循环遍历

## C++ Solution

```c++

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] = {0};
		for(auto c : magazine){
			record[c - 'a']++;
		}
		for(auto c : ransomNote){
			if(--record[c - 'a'] < 0) return false;
		}
		return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        int[] record = new int[26];
		foreach(var c in magazine.ToCharArray()){
			record[c - 'a']++;
		}
		foreach(var c in ransomNote.ToCharArray()){
			if(--record[c - 'a'] < 0) return false;
		}
		return true;
    }
}

```

## Java Solution

```java

class Solution {
    public int arraysCount(char[] arr, char element){
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == element)
                ++count;
        }
        return count;
    }

    public boolean canConstruct(String ransomNote, String magazine) {
        char[] r_arr = ransomNote.toCharArray();
        char[] m_arr = magazine.toCharArray();
        HashSet<Character> s = new HashSet<>();
        for (int i = 0; i < r_arr.length; i++) {
            s.add(r_arr[i]);
        }
        for (Character c: s) {
            if(arraysCount(r_arr, c) > arraysCount(m_arr, c))
                return false;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        ransomNote = list(ransomNote)
        magazine = list(magazine)
        r_len = len(ransomNote)
        m_len = len(magazine)
        if r_len > m_len:
            return False
        if r_len == 0:
            return True
        i = 0
        k = 0
        while i < r_len and k < m_len:
            if ransomNote[i] == magazine[k]:
                magazine.pop(k)
                m_len -= 1
                k = 0
                i += 1
            else:
                k += 1
        return i == r_len

```





