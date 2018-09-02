
# problem 412 : FizzBuzz

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/412.FizzBuzz/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> r;
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                r.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                r.push_back("Fizz");
            } else if (i % 5 == 0) {
                r.push_back("Buzz");
            } else {
                r.push_back(to_string(i));
            }
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<string> FizzBuzz(int n) {
        var r = new List<string>();
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                r.Add("FizzBuzz");
            } else if (i % 3 == 0) {
                r.Add("Fizz");
            } else if (i % 5 == 0) {
                r.Add("Buzz");
            } else {
                r.Add(i.ToString());
            }
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public List<String> fizzBuzz(int n) {
        LinkedList<String> r = new LinkedList<>();
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                r.add("FizzBuzz");
            } else if (i % 3 == 0) {
                r.add("Fizz");
            } else if (i % 5 == 0) {
                r.add("Buzz");
            } else {
                r.add(new Integer(i).toString());
            }
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        r = []
        for i in range(1, n + 1):
            s = ''
            if i % 3 == 0:
                s = 'Fizz' 
            if i % 5 == 0:
                s += 'Buzz'
            r.append(str(i) if s == '' else s)
        return r

```





