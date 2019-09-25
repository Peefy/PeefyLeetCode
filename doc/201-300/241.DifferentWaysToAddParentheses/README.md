
# problem 241 : DifferentWaysToAddParentheses

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/241.DifferentWaysToAddParentheses/problem.png"/>

## C++ Solution

```c++

class Solution {
private:
    vector<int> solve(string s){
        vector<int> ans;
        for (size_t i = 0; i < s.length(); i++){
            if (!isdigit(s[i])){
                auto left = solve(s.substr(0, i));
                auto right = solve(s.substr(i + 1));
                for(auto ita = left.begin(); ita != left.end(); ita++){
                    for(auto itb = right.begin(); itb != right.end(); itb++){
                        if (s[i] == '+') ans.push_back(*ita + *itb);
                        else if (s[i] == '-') ans.push_back(*ita - *itb);
                        else ans.push_back(*ita**itb);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(s));
            return ans;
    }
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> ans;
        if (input.empty()) 
            return ans;
        ans = solve(input);
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public List<int> partition(String input) {
        List<int> result = new List<int>();
        if (!input.Contains("+") && !input.Contains("-") && !input.Contains("*")) {
            result.Add(int.Parse(input));
            return result;
        }
        for(int i = 0; i < input.Length; i++) {
            if (input[i] == '+' || input[i] == '-' || input[i] == '*') {
                foreach (var left in partition(input.Substring(0, i))) {
                    foreach (var right in partition(input.Substring(i + 1))) {
                        if (input[i] == '+') {
                            result.Add(left + right);
                        } else if (input[i] == '-') {
                            result.Add(left - right);
                        } else if (input[i] == '*') {
                            result.Add(left * right);
                        }
                    }
                }
            }
        }
        return result;
    }
    public IList<int> DiffWaysToCompute(string input) {
        return partition(input);
    }
}

```

## Java Solution

```java

class Solution {
    
    public List<Integer> diffWaysToCompute(String input) {
        return partition(input);
    }
    
    public List<Integer> partition(String input) {
        List<Integer> result = new ArrayList<>();
        if (!input.contains("+") && !input.contains("-") && !input.contains("*")) {
            result.add(Integer.valueOf(input));
            return result;
        }
        for(int i = 0; i < input.length(); i++) {
            if (input.charAt(i) == '+' || input.charAt(i) == '-' || input.charAt(i) == '*') {
                for(Integer left : partition(input.substring(0, i))) {
                    for (Integer right : partition(input.substring(i + 1))) {
                        if (input.charAt(i) == '+') {
                            result.add(left + right);
                        } else if (input.charAt(i) == '-') {
                            result.add(left - right);
                        } else if (input.charAt(i) == '*') {
                            result.add(left * right);
                        }
                    }
                }
            }
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def partition(self, input):
        result = []
        if '+' not in input and '-' not in input and '*' not in input:
            result.append(int(input))
            return result
        for i in range(len(input)):
            c = input[i]
            if c == '+' or c == '-' or c == '*':
                for left in self.partition(input[0:i]):
                    for right in self.partition(input[i+1:]):
                        if c == '+':
                            result.append(left + right)
                        elif c == '-':
                            result.append(left - right)
                        elif c == '*':
                            result.append(left * right)
        return result


    def diffWaysToCompute(self, input):
        return self.partition(input)  

```




