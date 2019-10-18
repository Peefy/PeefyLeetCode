
# problem 282 : ExpressionAddOperators

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/282.ExpressionAddOperators/problem.png"/>

## C++ Solution

```c++

class Solution {
vector<vector<string> > output;
public:
    void solve(long long target, long long n, int sign, string num, vector<string>&cal)
    {
        if (!num.size())
        {
            target -= sign*n;
            if (!target) output.push_back(cal);
            return;
        }
        for (int len=1;len<=num.size();len++)
        {
            if (num[0]=='0' && len>1)
                continue;
            if (!cal.empty())
            {
                //+ 更新当前的值，重设缓冲值
                cal.push_back("+");
                cal.push_back(num.substr(0,len));
                solve(target-sign*n,stoll(num.substr(0,len)), 1, num.substr(len), cal);
                cal.pop_back();
                cal.pop_back();
                //- 更新当前的值，重设缓冲值
                cal.push_back("-");
                cal.push_back(num.substr(0,len));
                solve(target-sign*n,stoll(num.substr(0,len)), -1, num.substr(len), cal);
                cal.pop_back();
                cal.pop_back();
                //* 不更新当前的值，需要累乘到缓冲值中
                cal.push_back("*");
                cal.push_back(num.substr(0,len));
                solve(target,n*stoll(num.substr(0,len)),sign, num.substr(len), cal);
                cal.pop_back();
                cal.pop_back();
            }
            else // 第一个值直接算作加到缓冲值中
            {
                cal.push_back(num.substr(0, len));
                solve(target,stoll(num.substr(0,len)),1, num.substr(len, num.size()-len), cal);
                cal.pop_back();
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> cal;
        solve(target, 0, 1, num, cal);
        vector<string> out;
        for (auto d: output)
        {
            string o = "";
            for (auto s:d)
                o+=s;
            out.push_back(o);
        }
        return out;
    }
};

```

## C# Solution

```csharp

public class Solution {

    public List<string> answer;
    public string digits = "";
    public long target;

    private void recurse(int index, long previousOperand, long currentOperand, long value, Stack<string> ops) {
        var nums = this.digits;
        if (index == nums.Length) {
            if (value == this.target && currentOperand == 0) {
                this.answer.Add(string.Join("", ops.Reverse().Skip(1)));
            }
            return;
        }
        currentOperand = currentOperand * 10 + nums[index] - '0'; 
        var current_val_rep = currentOperand.ToString();

        if (currentOperand > 0) {
            recurse(index + 1, previousOperand, currentOperand, value, ops);
        }

        ops.Push("+");
        ops.Push(current_val_rep);
        recurse(index + 1, currentOperand, 0, value + currentOperand, ops);
        ops.Pop();
        ops.Pop();

        if (ops.Count > 0) {

            ops.Push("-");
            ops.Push(current_val_rep);
            recurse(index + 1, -currentOperand, 0, value - currentOperand, ops);
            ops.Pop();
            ops.Pop();

            ops.Push("*");
            ops.Push(current_val_rep);
            recurse(index + 1, currentOperand * previousOperand, 0,
                    value - previousOperand + (currentOperand * previousOperand), ops);
            ops.Pop();
            ops.Pop();
        }
    }

    public IList<string> AddOperators(string num, int target) {
        if (num.Length == 0) {
            return new List<string>();
        }

        this.target = target;
        this.digits = num;
        this.answer = new List<string>();
        this.recurse(0, 0, 0, 0, new Stack<string>());
        return this.answer;
    }
}

```

## Java Solution

```java

class Solution {

    public ArrayList<String> answer;
    public String digits;
    public long target;

    public void recurse(int index, long previousOperand, long currentOperand, long value, ArrayList<String> ops) {
        String nums = this.digits;
        if (index == nums.length()) {

            // If the final value == target expected AND
            // no operand is left unprocessed
            if (value == this.target && currentOperand == 0) {
                StringBuilder sb = new StringBuilder();
                ops.subList(1, ops.size()).forEach(v -> sb.append(v));
                this.answer.add(sb.toString());
            }
            return;
        }

        // Extending the current operand by one digit
        currentOperand = currentOperand * 10 + Character.getNumericValue(nums.charAt(index));
        String current_val_rep = Long.toString(currentOperand);

        // To avoid cases where we have 1 + 05 or 1 * 05 since 05 won't be a
        // valid operand. Hence this check
        if (currentOperand > 0) {

            // NO OP recursion
            recurse(index + 1, previousOperand, currentOperand, value, ops);
        }

        // ADDITION
        ops.add("+");
        ops.add(current_val_rep);
        recurse(index + 1, currentOperand, 0, value + currentOperand, ops);
        ops.remove(ops.size() - 1);
        ops.remove(ops.size() - 1);

        if (ops.size() > 0) {

            // SUBTRACTION
            ops.add("-");
            ops.add(current_val_rep);
            recurse(index + 1, -currentOperand, 0, value - currentOperand, ops);
            ops.remove(ops.size() - 1);
            ops.remove(ops.size() - 1);

            // MULTIPLICATION
            ops.add("*");
            ops.add(current_val_rep);
            recurse(index + 1, currentOperand * previousOperand, 0,
                    value - previousOperand + (currentOperand * previousOperand), ops);
            ops.remove(ops.size() - 1);
            ops.remove(ops.size() - 1);
        }
    }

    public List<String> addOperators(String num, int target) {

        if (num.length() == 0) {
            return new ArrayList<String>();
        }

        this.target = target;
        this.digits = num;
        this.answer = new ArrayList<String>();
        this.recurse(0, 0, 0, 0, new ArrayList<String>());
        return this.answer;
    }
}

```

## Python Solution

```python

class Solution:
    def recurse(self, num, target, index, prev, cur, val, s, ans):
        if index == len(num):
            if val == target and cur == 0:
                ans.append(''.join(s[1:]))
            return
        cur = cur * 10 + int(num[index])
        strop = str(cur)
        if cur > 0:
            self.recurse(num, target, index + 1, prev, cur, val, s, ans)

        s.append('+')
        s.append(strop)
        self.recurse(num, target, index + 1, cur, 0, val + cur, s, ans)
        s.pop()
        s.pop()

        if len(s) > 0:
            s.append('-')
            s.append(strop)
            self.recurse(num, target, index + 1, -cur, 0, val - cur, s, ans)
            s.pop()
            s.pop()
        
            s.append('*')
            s.append(strop)
            self.recurse(num, target, index + 1, cur * prev, 0, val - prev + (cur * prev), s, ans)
            s.pop()
            s.pop()

    def addOperators(self, num, target):
        ans = []
        self.recurse(num, target, 0, 0, 0, 0, [], ans)
        return ans     

```




