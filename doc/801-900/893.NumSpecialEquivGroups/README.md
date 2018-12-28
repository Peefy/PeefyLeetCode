
# problem 893 : NumSpecialEquivGroups

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/893.NumSpecialEquivGroups/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> hash;
		for (int i = 0; i < A.size(); i++) {
			string ch = A[i];
		    int len2 = ch.length() / 2;
		    int len1 = ch.length() - len2;
		    vector<char> ch1(len1);
            vector<char> ch2(len2);
		    for (int i = 0; i + i < ch.length(); i++)
			    ch1[i] = ch[i + i];
		    for (int i = 0; i + i + 1 < ch.length(); i++)
			    ch2[i] = ch[i + i + 1];
		    sort(ch1.begin(), ch1.end());
		    sort(ch2.begin(), ch2.end());
			hash.insert(string(ch1.begin(), ch1.end()) + string(ch2.begin(), ch2.end()));
		}
		return hash.size();
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int NumSpecialEquivGroups(string[] A) {
        HashSet<string> hash = new HashSet<string>();
		foreach(var ch in A){
		    int len2 = ch.Length / 2;
		    int len1 = ch.Length - len2;
            char[] ch1 = new char[len1];
            char[] ch2 = new char[len2];
		    for (int i = 0; i + i < ch.Length; i++)
			    ch1[i] = ch[i + i];
		    for (int i = 0; i + i + 1 < ch.Length; i++)
			    ch2[i] = ch[i + i + 1];
		    Array.Sort(ch1);
            Array.Sort(ch2);
		    hash.Add(new string(ch1) + new string(ch2));
		}
		return hash.Count;
    }
}

```

## Java Solution

```java

class Solution {
    public int numSpecialEquivGroups(String[] A) {
        HashSet<String> hash = new HashSet<>();
        for (String a : A){
            char[] builder1;
            char[] builder2;
            if (a.length() % 2 == 0){
                builder1 = new char[a.length() / 2];
                builder2 = new char[a.length() / 2];
            }
            else{
                builder1 = new char[a.length() / 2 + 1];
                builder2 = new char[a.length() / 2];
            }
            for (int i = 0; i < a.length(); i+=2) {
                builder1[i / 2] = a.charAt(i);
            }
            for (int i = 1; i < a.length(); i+=2) {
                builder2[i / 2] = a.charAt(i);
            }
            Arrays.sort(builder1);
            Arrays.sort(builder2);
            hash.add(String.valueOf(builder1) + String.valueOf(builder2));
        }
        return hash.size();
    }
}

```

## Python Solution

```python

class Solution:
    def numSpecialEquivGroups(self, A):
        """
        :type A: List[str]
        :rtype: int
        """
        return len({''.join(sorted(a[::2])) + ''.join(sorted(a[1::2])) for a in A})

```





