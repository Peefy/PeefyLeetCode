
# problem 929 : NumUniqueEmails

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/929.NumUniqueEmails/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> email_set;
        for (auto email : emails){
            string name;
            string domain;
            for (int i = 0;i < email.length(); ++i){
                if (email[i] == '@'){
                    name = email.substr(0, i);
                    domain = email.substr(i + 1, email.length() - i);
                }
            }
            for (int i = 0;i < name.length(); ++i){
                if (name[i] == '+'){
                    name = name.substr(0, i);
                }
            }
            name.erase(std::remove(name.begin(), name.end(), '.'), name.end());
            email_set.insert(name + '@' + domain);
        }
        return email_set.size();
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int NumUniqueEmails(string[] emails) {
        HashSet<string> set = new HashSet<string>();
        foreach (string str in emails){
            int n = str.IndexOf('@');
            String temp = str.Substring(n);
            if (set.Contains(temp) == false)
                set.Add(temp);
        }
        return set.Count;
    }
}

```

## Java Solution

```java

class Solution {
    public int numUniqueEmails(String[] emails) {
        HashSet<String> email_set = new HashSet<>();
        for (String email : emails) {
            String tmp_str = "";

            boolean after_plus = false;
            boolean after_at = false;
            for (char c : email.toCharArray()) {
                if (c == '@') {
                    after_at = true;
                }
                if (c == '+') {
                    after_plus = true;
                }

                if (!after_at && (c == '.' || after_plus)) {
                    continue;
                }
                tmp_str += c;
            }
            email_set.add(tmp_str);
        }
        return email_set.size();
    }
}

```

## Python Solution

```python

class Solution:
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        email_set = set()
        for email in emails:
            name, domain = email.split('@')
            name = name[:name.find('+')].replace('.', '')
            email_set.add(name + '@' + domain)
        return len(email_set)

```





