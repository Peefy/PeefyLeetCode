
# problem 244 : ShortestWordDistanceII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/244.ShortestWordDistanceII/problem.png"/>

## C++ Solution

```c++

class WordDistance {
public:
    WordDistance(vector<string>& words) {
        for (int i = 0; i < words.size(); ++i) {
            m[words[i]].push_back(i);
        }
    }
 
    int shortest(string word1, string word2) {
        int i = 0, j = 0, res = INT_MAX;
        while (i < m[word1].size() && j < m[word2].size()) {
            res = min(res, abs(m[word1][i] - m[word2][j]));
            m[word1][i] < m[word2][j] ? ++i : ++j;
        }
        return res;
    }
     
private:
    unordered_map<string, vector<int> > m;
};

```

## C# Solution

```csharp

public class WordDistance {
    public WordDistance(List<string> words) {
        for (int i = 0; i < words.Count; ++i) {
            m[words[i]].Add(i);
        }
    }
 
    int shortest(string word1, string word2) {
        int i = 0, j = 0, res = int.MaxValue;
        while (i < m[word1].Count && j < m[word2].Count) {
            res = Math.Min(res, Math.Abs(m[word1][i] - m[word2][j]));
            if (m[word1][i] < m[word2][j])
                ++i;
            else
                ++j;
        }
        return res;
    }
    Dictionary<string, List<int> > m;
}

```

## Java Solution

```java

class Solution {
    private HashMap<String, List<Integer>> map; // word,index(list)

    public Solution(String[] words) {
        map = new HashMap<>();
        for (int i = 0; i < words.length; i++) {
            if (map.containsKey(words[i])) {
                map.get(words[i]).add(i);
            } else {
                List<Integer> list = new ArrayList<>();
                list.add(i);
                map.put(words[i], list);
            }
        }
    }

    public int shortest(String word1,String word2){
        List<Integer> l1 = map.get(word1);
        List<Integer> l2 = map.get(word2);
        int res = Integer.MAX_VALUE;
        int i=0,j=0;
        while(i<l1.size() && j<l2.size()){
            res = Math.min(res, Math.abs(l1.get(i) - l2.get(j)));
            if(l1.get(i)<l2.get(j)){
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
}

```

## Python Solution

```python

import collections
 
class WordDistance:
    def __init__(self, words):
        self.wordIndex = collections.defaultdict(list)
        for i in xrange(len(words)):
            self.wordIndex[words[i]].append(i)
 

    def shortest(self, word1, word2):
        indexes1 = self.wordIndex[word1]
        indexes2 = self.wordIndex[word2]
        i, j, dist = 0, 0, float("inf")
        while i < len(indexes1) and j < len(indexes2):
            dist = min(dist, abs(indexes1[i] - indexes2[j]))
            if indexes1[i] < indexes2[j]:
                i += 1
            else:
                j += 1
        return dist　   

```




