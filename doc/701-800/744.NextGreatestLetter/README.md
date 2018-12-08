
# problem 744 : NextGreatestLetter

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/744.NextGreatestLetter/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        if (target >= letters[n - 1]) {
            return letters[0];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target)
                r = mid - 1;
            else if(letters[mid] < target)
                l = mid + 1;
            else{
                while (letters[mid] == target)
                    mid += 1;
                return letters[mid];
            }
        }
        return letters[l];
    }
};

```

## C# Solution

```csharp

public class Solution {
    public char NextGreatestLetter(char[] letters, char target) {
        int n = letters.Length;
        if (target >= letters[n - 1]) {
            return letters[0];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target)
                r = mid - 1;
            else if(letters[mid] < target)
                l = mid + 1;
            else{
                while (letters[mid] == target)
                    mid += 1;
                return letters[mid];
            }
        }
        return letters[l];
    }
}

```

## Java Solution

```java

class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int n = letters.length;
        if (target >= letters[n - 1]) {
            return letters[0];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target)
                r = mid - 1;
            else if(letters[mid] < target)
                l = mid + 1;
            else{
                while (letters[mid] == target)
                    mid += 1;
                return letters[mid];
            }
        }
        return letters[l];
    }
}

```

## Python Solution

```python

class Solution:
    def nextGreatestLetter(self, letters, target):
        """
        :type letters: List[str]
        :type target: str
        :rtype: str
        """
        for l in letters:
            if l > target:
                return l
        return letters[0]

```





