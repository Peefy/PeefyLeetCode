
# problem 819 : MostCommonWord

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/819.MostCommonWord/problem.png"/>

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

    string mostCommonWord(string paragraph, vector<string>& banned) {
        for (int i = 0; i < paragraph.size(); i++) {
            if (paragraph[i] == '.' || paragraph[i] == '!' || paragraph[i] == '?' || 
                paragraph[i] == ';' || paragraph[i] == ',' || paragraph[i] == '\\' ||
                paragraph[i] == ' ' || paragraph[i] == '\'' || paragraph[i] == '\"') {
                paragraph[i] = ' ';
            }
            else if (paragraph[i] >= 'A' && paragraph[i] <= 'Z'){
                paragraph[i] = paragraph[i] + 'a' - 'A';
            }
        }
        vector<string> strs = split(paragraph, " ");
        unordered_map<string, int> hash;
        unordered_set<string> set;
        for (string ban : banned) {
            set.insert(ban);
        }
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i] != " "){
                hash[strs[i]] += 1;
            }
        }
        int maxcount = 0;
        string r = "";
        for (auto item : hash){
            if (set.find(item.first) == set.end() && item.second >= maxcount){
                maxcount = item.second;
                r = item.first;
            }
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public string MostCommonWord(string paragraph, string[] banned) {
        char[] parr = paragraph.ToCharArray();
        for (int i = 0; i < parr.Length; i++) {
            if (parr[i] == '.' || parr[i] == '!' || parr[i] == '?' || 
                parr[i] == ';' || parr[i] == ',' || parr[i] == '\\' ||
                parr[i] == ' ' || parr[i] == '\'' || parr[i] == '\"') {
                parr[i] = ' ';
            }
            else if (parr[i] >= 'A' && parr[i] <= 'Z'){
                parr[i] = (char)(parr[i] + 'a' - 'A');
            }
        }
        paragraph = new String(parr);
        String[] strs = paragraph.Split(" ");
        Dictionary<string, int> hash = new Dictionary<string, int>();
        HashSet<string> set = new HashSet<string>();
        foreach (string ban in banned) {
            set.Add(ban);
        }
        for (int i = 0; i < strs.Length; i++) {
            if (strs[i] != " "){
                if (hash.ContainsKey(strs[i]) == false)
                {
                    hash.Add(strs[i], 1);
                }
                else
                {
                    hash[strs[i]] += 1;
                }
            }
        }
        int maxcount = 0;
        String r = "";
        foreach (var c in hash.Keys){
            if (set.Contains(c) == false && hash[c] > maxcount){
                maxcount = hash[c];
                r = c;
            }
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        char[] parr = paragraph.toCharArray();
        for (int i = 0; i < parr.length; i++) {
            if (parr[i] == '.' || parr[i] == '!' || parr[i] == '?' || 
                parr[i] == ';' || parr[i] == ',' || parr[i] == '\\' ||
                parr[i] == ' ' || parr[i] == '\'' || parr[i] == '\"') {
                parr[i] = ' ';
            }
            else if (parr[i] >= 'A' && parr[i] <= 'Z'){
                parr[i] = (char)(parr[i] + 'a' - 'A');
            }
        }
        paragraph = new String(parr);
        String[] strs = paragraph.split(" ");
        HashMap<String, Integer> hash = new HashMap<>();
        HashSet<String> set = new HashSet<>();
        for (String ban : banned) {
            set.add(ban);
        }
        for (int i = 0; i < strs.length; i++) {
            if (strs[i] != " "){
                hash.put(strs[i], hash.getOrDefault(strs[i], 0) + 1);
            }
        }
        int maxcount = 0;
        String r = "";
        for (String c : hash.keySet()){
            if (set.contains(c) == false && hash.get(c) > maxcount){
                maxcount = hash.get(c);
                r = c;
            }
        }
        return r;
    }
}


```

## Python Solution

```python

class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        """
        :type paragraph: str
        :type banned: List[str]
        :rtype: str
        """
        from collections import Counter
        import re
        paragraph = re.sub("[\.\!\/_,$%^*(+\"\')]+|[+——()?;【】“”！，。？、~@#￥%……&*（）]+", " ", paragraph)
        counter = Counter(paragraph.lower().split(' '))
        maxcount = 0
        r = ''
        for c in counter.keys():
            if c != '' and c not in banned and counter[c] > maxcount:
                maxcount = counter[c]
                r = c
        return r

```





