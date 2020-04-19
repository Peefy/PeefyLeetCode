
# problem 299 : BullsAndCows

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/299.BullsAndCows/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    string getHint(string secret, string guess) {
		int a = 0, b = 0;
		int s[10] = {0};
		int g[10] = {0};
		for (int i = 0; i < secret.length(); i++) {
			s[secret[i] - '0']++;
			g[guess[i] - '0']++;
			a += secret[i] == guess[i] ? 1 : 0;
		}
		for (int i = 0; i < 10; i++) 
			b += min(s[i], g[i]);
		return to_string(a) + "A" + to_string(b - a) + "B";
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string GetHint(string secret, string guess) {
        StringBuilder sb = new StringBuilder();
		int a = 0, b = 0;
		int[] s = new int[10];
		int[] g = new int[10];
		for (int i = 0; i < secret.Length; i++) {
			s[secret[i] - '0']++;
			g[guess[i] - '0']++;
			a += secret[i] == guess[i] ? 1 : 0;
		}
		for (int i = 0; i < s.Length; i++) 
			b += Math.Min(s[i], g[i]);
		return sb.Append(a).Append("A").Append(b - a).Append("B").ToString();
    }
}

```

## Java Solution

```java

public class Solution {
    public String getHint(String secret, String guess) {
        StringBuilder sb = new StringBuilder();
		int a = 0, b = 0;
		int[] s = new int[10];
		int[] g = new int[10];
		for (int i = 0; i < secret.length(); i++) {
			s[secret.charAt(i) - '0']++;
			g[guess.charAt(i) - '0']++;
			a += secret.charAt(i) == guess.charAt(i) ? 1 : 0;
		}
		for (int i = 0; i < s.length; i++) 
			b += Math.min(s[i], g[i]);
		return sb.append(a).append("A").append(b - a).append("B").toString();
    }
}

```

## Python Solution

```python

class Solution:
    def getHint(self, secret, guess):
        n = len(secret)
        acount = 0
        bcount = 0
        shash = {}
        ghash = {}
        for i in range(n):
            if secret[i] == guess[i]:
                acount += 1
            if secret[i] not in shash:
                shash[secret[i]] = 1
            else:
                shash[secret[i]] += 1
            if guess[i] not in ghash:
                ghash[guess[i]] = 1
            else:
                ghash[guess[i]] += 1
        for k in shash.keys():
            if k in ghash:
                bcount += min(ghash[k], shash[k])
        bcount = bcount - acount
        return str(acount) + 'A' + str(bcount) + 'B'     

```




