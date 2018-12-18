
# problem 811 : SubdomainVisitCount

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/811.SubdomainVisitCount/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:

vector<string> split(const string& str, const string& delim) {  
	vector<string> res;  
	if("" == str) return res;  
	char * strs = new char[str.length() + 1] ;  
	strcpy(strs, str.c_str());   
	char * d = new char[delim.length() + 1];  
	strcpy(d, delim.c_str());  
	char *p = strtok(strs, d);  
	while(p) {  
		string s = p; 
		res.push_back(s); 
		p = strtok(NULL, d);  
	}  
	return res;  
    }

    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> counter;
        vector<string> r;
        for (string cp : cpdomains) {
            vector<string> tmps = split(cp, " ");
            int num = atoi(tmps[0].c_str());
            string addrone = tmps[1];
            counter[addrone] += num; 
            for (int i = 0; i < addrone.length(); i++) {
                if (addrone[i] == '.'){
                    string sub = string(addrone.begin() + i + 1, addrone.end()); 
                    counter[sub] += num; 
                }
            }
        }
        for (auto item : counter) {
            r.push_back(to_string(item.second) + " " + item.first);
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<string> SubdomainVisits(string[] cpdomains) {
        Dictionary<string, int> counter = new Dictionary<string, int>();
        List<string> r = new List<string>();
        foreach (var cp in cpdomains) {
            String[] tmps = cp.Split(" ");
            int num = int.Parse(tmps[0]);
            string addrone = tmps[1];
            if (counter.ContainsKey(addrone) == false)
            {
                counter.Add(addrone, num);
            }
            else
            {
                counter[addrone] += num;
            }
            for (int i = 0; i < addrone.Length; i++) {
                if (addrone[i] == '.'){
                    String sub = addrone.Substring(i + 1);
                    if (counter.ContainsKey(sub) == false)
                    {
                        counter.Add(sub, num);
                    }
                    else
                    {
                        counter[sub] += num;
                    }
                }
            }
        }
        foreach (string key in counter.Keys) {
            r.Add($"{counter[key]} {key}");
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public List<String> subdomainVisits(String[] cpdomains) {
        HashMap<String, Integer> counter = new HashMap<>();
        LinkedList<String> r = new LinkedList<>();
        for (String cp : cpdomains) {
            String[] tmps = cp.split(" ");
            int num = Integer.valueOf(tmps[0]);
            String addrone = tmps[1];
            counter.put(addrone, counter.getOrDefault(addrone, 0) + num);
            for (int i = 0; i < addrone.length(); i++) {
                if (addrone.charAt(i) == '.'){
                    String sub = addrone.substring(i + 1);
                    counter.put(sub, counter.getOrDefault(sub, 0) + num);
                }
            }
        }
        for (String key : counter.keySet()) {
            r.add(String.format("%s %s", counter.get(key), key));
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        counter = {}
        r = []
        for cp in cpdomains:
            tmps = cp.split(' ')
            num = tmps[0]
            addrone = tmps[1]
            while addrone != '':
                if addrone not in counter:
                    counter[addrone] = int(num)
                else:
                    counter[addrone] += int(num)
                flag = False
                for i, s in enumerate(addrone):
                    if addrone[i] == '.':
                        flag = True
                        addrone = addrone[i + 1:]
                        break
                if flag == False:
                    break
        for addr, num in counter.items():
            r.append('{} {}'.format(num, addr))
        return r

```





