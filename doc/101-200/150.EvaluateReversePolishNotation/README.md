
# problem 150 : EvaluateReversePolishNotation

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/150.EvaluateReversePolishNotation/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> values;
        for(auto& str : tokens){
            if(str == "*" ||str == "/" ||str == "+" ||str == "-")
                resolve(values,str);
            else
                values.push(atoi(str.c_str())); //string to int
        }
        return values.top(); 
    }
    void resolve(stack <int>& num_stack,string operation)
    {
        int obj1,obj2;
        
        obj2 = num_stack.top();
        num_stack.pop();
        obj1 = num_stack.top();
        num_stack.pop();
        
        num_stack.push(calc(obj1,obj2,operation));
    }
    int calc(int obj1,int obj2,string operation)
    {
        switch(operation[0])
        {
            case '+':
                    obj1 = obj1 + obj2;
                    break;
            case '-':
                    obj1 = obj1 - obj2;
                    break;
            case '*':
                    obj1 = obj1 * obj2;
                    break;
            case '/':
                    obj1 = obj1 / obj2;
                    break;
        }
        return obj1;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int EvalRPN(string[] tokens)
        {
            Stack<int> stack = new Stack<int>();
            for (int i = 0; i < tokens.Length; i++)
            {
                String tokeni = tokens[i];
                if (tokeni.Equals("+") || tokeni.Equals("-") || tokeni.Equals("*") || tokeni.Equals("/"))
                {
                    int v1 = stack.Pop();
                    int v2 = stack.Pop();
                    if (tokeni.Equals("+"))
                    {
                        stack.Push(v2 + v1);
                    }
                    if (tokeni.Equals("-"))
                    {
                        stack.Push(v2 - v1);
                    }
                    if (tokeni.Equals("*"))
                    {
                        stack.Push(v2 * v1);
                    }
                    if (tokeni.Equals("/"))
                    {
                        int res = v2 / v1;
                        stack.Push(res);
                    }
                }
                else
                {
                    stack.Push(int.Parse(tokeni));
                }
            }
            return stack.Peek();
        }
    }

```

## Java Solution

```java

class Solution {
    public static int evalRPN(String[] tokens) {
        Stack stack = new Stack();
        for(int i=0;i<tokens.length;i++){
            String tokeni = tokens[i];
            if(tokeni.equals("+") || tokeni.equals("-") || tokeni.equals("*") || tokeni.equals("/")){
                int v1 = (Integer) stack.pop();
                int v2 = (Integer) stack.pop();
                if(tokeni.equals("+")){
                    stack.push(v2+v1);
                }
                if(tokeni.equals("-")){
                    stack.push(v2-v1);
                }
                if(tokeni.equals("*")){
                    stack.push(v2*v1);
                }
                if(tokeni.equals("/")){
                    int res = v2/v1;
                    stack.push(res);
                }
            }else{
                stack.push(Integer.parseInt(tokeni));
            }
        }
        return (Integer) stack.peek();
    }
}

```

## Python Solution

```python

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        """
        :type tokens: List[str]
        :rtype: int
        """
        stack = list()
        operations = {'+', '-', '*', '/'}
        for token in tokens:
            if token in operations:
                right = stack.pop()
                left = stack.pop()
                if token == '+':
                    tmp = left + right
                elif token == '-':
                    tmp = left - right
                elif token == '*':
                    tmp = left * right
                else:
                    if left * right >= 0:
                        tmp = left // right
                    else:
                        tmp = -(-left // right)
                    
                stack.append(tmp)
            else:
                stack.append(int(token))
        return stack[0]

```


