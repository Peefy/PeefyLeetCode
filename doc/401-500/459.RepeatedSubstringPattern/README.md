
# problem 459 : RepeatedSubstringPattern

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/459.RepeatedSubstringPattern/problem.png"/>

最优答案为python

## C++ Solution

```c++

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        auto length = s.length() - 1;
        char * sss = (char*)malloc(length * 2 + 1);
        sss[length * 2] = '\0';
        memcpy(sss, s.c_str() + 1, length);
        memcpy(sss + length, s.c_str(), length);
        string sss_str = string(sss);
        return (int)sss_str.find(s) != -1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool RepeatedSubstringPattern(string s) {
        if (s == null || s.Length <= 1) {
            return false;
        }
        int n = s.Length;
        char[] chars = s.ToCharArray();
        int[] prims = new int[]{
                2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
        };

        for (int i = 0; i < prims.Length; i++) {
            int p = prims[i];
            if (n % p != 0) {
                continue;
            }
            bool flag = true;
            string sub = s.Substring(0, n / p);
            for (int j = 1; j < p; j++) {
                if (!sub.Equals(s.Substring(n / p * j, n / p * (j + 1)))) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return true;
            }
        }
        return false;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean repeatedSubstringPattern(String s) {
        char[] s_arr = s.toCharArray();
        int size = s.length();
		if (size == 0)
			return false;
		for (int steps = 1; steps <= size / 2; steps++) {
			if (size%steps != 0)
				continue;
            int i = 0;
			for (; i + steps < size; i++) {
				if (s_arr[i] != s_arr[i + steps])
					break;
			}
			if (i + steps == size)
				return true;
		}
		return false;
    }
}

```

## Python Solution

```python

class Solution:
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        return s in (s[1:] + s[:-1])

```





