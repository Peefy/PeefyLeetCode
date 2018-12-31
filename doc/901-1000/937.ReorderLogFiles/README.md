
# problem 937 : ReorderLogFiles

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/937.ReorderLogFiles/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        unordered_map<string, string> table;
        vector<string> alphalogs;
        vector<string> digitlogs;
        for (string log : logs){
            int index = log.find_first_of(' ');
            string first = log.substr(0, index);
            string after = log.substr(index + 1, log.length() - index);
            if (isalpha(after[0])){
                alphalogs.push_back(after);
                table[after] = first + ' ';
            }
            else{
                digitlogs.push_back(log);
            }             
        }
        sort(alphalogs.begin(), alphalogs.end());
        for (string& s : alphalogs){
            s = table[s] + s;
        }
        alphalogs.insert(alphalogs.end(), digitlogs.begin(), digitlogs.end());
        return alphalogs;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string[] ReorderLogFiles(string[] logs) {
        Dictionary<string, string> table = new Dictionary<string, string>();
        List<string> alphalogs = new List<string>();
        List<string> digitlogs = new List<string>();
        foreach (string log in logs){
            int index = log.IndexOf(' ');
            string first = log.Substring(0, index);
            string after = log.Substring(index + 1, log.Length - index - 1);
            if ('a' <= after[0] && after[0] <= 'z'){
                alphalogs.Add(after);
                table[after] = first + ' ';
            }
            else{
                digitlogs.Add(log);
            }             
        }
        alphalogs.Sort();
        for (int i = 0; i < alphalogs.Count; i++)
        {
            alphalogs[i] = table[alphalogs[i]] + alphalogs[i];
        }
        alphalogs.AddRange(digitlogs);
        return alphalogs.ToArray();
    }
}

```

## Java Solution

```java

class Solution {
    public String[] reorderLogFiles(String[] logs) {
        HashMap<String, String> table = new HashMap<>();
        LinkedList<String> alphalogs = new LinkedList<>();
        LinkedList<String> digitlogs = new LinkedList<>();
        for (String log : logs){
            int index = log.indexOf(' ');
            String first = log.substring(0, index + 1);
            String after = log.substring(index + 1, log.length());
            if ('a' <= after.charAt(0) && after.charAt(0) <= 'z'){
                alphalogs.add(after);
                table.put(after, first);
            }
            else{
                digitlogs.add(log);
            }             
        }
        Collections.sort(alphalogs);
        for (int i = 0; i < alphalogs.size(); i++) {
            alphalogs.set(i, table.get(alphalogs.get(i)) + alphalogs.get(i) );
        }
        alphalogs.addAll(digitlogs);
        return alphalogs.toArray(new String[0]);
    }
}

```

## Python Solution

```python

class Solution:
    def reorderLogFiles(self, logs):
        """
        :type logs: List[str]
        :rtype: List[str]
        """
        alphalogs = []
        digitlogs = []
        for log in logs:
            index = log.index(' ')
            first = log[:index]
            after = log[index + 1:]
            if after[0].isdigit():
                digitlogs.append(log)
            else:
                alphalogs.append(after + '@' + first + ' ')
        alphalogs.sort()
        alphalogs = list(map(lambda v : v[v.index('@') + 1:] + v[:v.index('@')] ,alphalogs))
        return alphalogs + digitlogs
        

```





