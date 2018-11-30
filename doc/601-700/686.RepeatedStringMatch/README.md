
# problem 686 : RepeatedStringMatch

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/686.RepeatedStringMatch/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int lenA = A.length();
        int lenB = B.length();
        int indexA = 0;
        int indexB = 0; 
        while(indexB < lenB) { 
            if(lenA < lenB && indexA >= 2 * lenB) {
                return -1;
            }
            
            if(lenA >= lenB && indexA >= 2 * lenA) {
                return -1;
            }
            
            if(A[indexA % lenA] == B[indexB]) {
                indexA++;
                indexB++;
            } else if(indexB == 0){
                indexA++; 
            } else {
                int i = indexA + 1;
                for(; i < indexA + 1 + lenB; i++) {
                    if(A[i % lenA] == B[indexB]) {
                        break;
                    }
                }
                if(i == indexA +1 + lenB) return -1; 
                indexA = i - indexB;
                indexB = 0;
            } 
        }
        return (indexA - 1) / lenA + 1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int RepeatedStringMatch(string A, string B) {
        int lenA = A.Length;
        int lenB = B.Length;
        int indexA = 0;
        int indexB = 0; 
        while(indexB < lenB) { 
            if(lenA < lenB && indexA >= 2 * lenB) {
                return -1;
            }
            
            if(lenA >= lenB && indexA >= 2 * lenA) {
                return -1;
            }
            
            if(A[indexA % lenA] == B[indexB]) {
                indexA++;
                indexB++;
            } else if(indexB == 0){
                indexA++; 
            } else {
                int i = indexA + 1;
                for(; i < indexA + 1 + lenB; i++) {
                    if(A[i % lenA] == B[indexB]) {
                        break;
                    }
                }
                if(i == indexA +1 + lenB) return -1; 
                indexA = i - indexB;
                indexB = 0;
            } 
        }
        return (indexA - 1) / lenA + 1;
    }
}

```

## Java Solution

```java

class Solution {
    public int repeatedStringMatch(String A, String B) {
        int count = B.length() / A.length();
        StringBuilder strBuilder = new StringBuilder();
        for (int i = 0; i < count; i++) {
            strBuilder.append(A);
        }
        String match = strBuilder.toString();
        if (match.contains(B) == true) 
            return count;
        count += 1;
        match += A;
        if (match.contains(B) == true) 
            return count;
        count += 1;
        match += A;
        if (match.contains(B) == true) 
            return count;
        return -1;
    }
}

```

## Python Solution

```python

class Solution:
    def repeatedStringMatch(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: int
        """
        count = len(B) // len(A)
        m = A * count
        if B in m:
            return count
        m += A
        if B in m:
            return count + 1
        m += A
        if B in m:
            return count + 2
        return -1

```





