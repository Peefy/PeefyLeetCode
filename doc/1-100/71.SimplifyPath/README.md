
# Problem 71 : SimplifyPath

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/71.SimplifyPath/problem.png"/>

## C++ Solution

```c++

class Solution
{
public:
    void split(string s, char delim, vector<string> &nodes)
    {
        string temp;
        stringstream ss(s);
        while (getline(ss, temp, delim))
        {
            nodes.push_back(temp);
        }
    }
    string simplifyPath(string path)
    {
        vector<string> st;
        vector<string> nodes;
        string result;
        split(path, '/', nodes);
        for (auto node : nodes)
        {
            if (node == "" || node == ".")
                continue;
            if (node == ".." && !st.empty())
                st.pop_back();
            else if (node != "..")
                st.push_back(node);
        }
        for (auto it : st)
            result += "/" + it;
        return result.empty() ? "/" : result;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string SimplifyPath(string path) {
        var temp = new Stack<string>();
        var pathlist = path.Split("/");
        foreach (var pa in pathlist) {
            if (pa.Equals("..")){
                if (temp.Count > 0) {
                    temp.Pop();
                }    
            }
            else if (pa.Equals(".") == false && pa.Equals("") == false){
                temp.Push(pa);
            }
        }
        return "/" + String.Join("/", temp.Reverse());
    }
}

```

## Java Solution

```java

public class Solution {
    public string SimplifyPath(string path) {
        var temp = new Stack<string>();
        var pathlist = path.Split("/");
        foreach (var pa in pathlist) {
            if (pa.Equals("..")){
                if (temp.Count > 0) {
                    temp.Pop();
                }    
            }
            else if (pa.Equals(".") == false && pa.Equals("") == false){
                temp.Push(pa);
            }
        }
        return "/" + String.Join("/", temp.Reverse());
    }
}

```

## Python Solution

```python

class Solution:
    def simplifyPath(self, path: str) -> str:
        paths = path.split('/')
        stack = []
        for i in range(len(paths)):
            if paths[i] == '':
                continue
            if paths[i] == '.':
                pass
            elif paths[i] == '..':
                if (len(stack) > 0):
                    stack.pop()
            else:
                stack.append(paths[i])
        return '/' + '/'.join(stack)

```


