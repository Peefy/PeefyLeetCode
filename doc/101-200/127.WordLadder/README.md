
# problem 127 : WordLadder

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/127.WordLadder/problem.png"/>

使用双向广度优先搜索加快搜索时间

## C++ Solution

```c++

class Solution{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList){
        unordered_set<string> wordDict(wordList.begin(), wordList.end());
        if (wordDict.find(endWord) == wordDict.end()){
            return 0;
        }
        unordered_set<string> beginSet{beginWord};
        unordered_set<string> endSet{endWord};
        int step = 1;
        for (; !beginSet.empty();){
            unordered_set<string> tempSet;
            ++step;
            for (auto s : beginSet){
                wordDict.erase(s);
            }
            for (auto s : beginSet){
                for (int i = 0; i < s.size(); ++i){
                    string str = s;
                    for (char c = 'a'; c <= 'z'; ++c){
                        str[i] = c;
                        if (wordDict.find(str) == wordDict.end()){
                            continue;
                        }
                        if (endSet.find(str) != endSet.end()){
                            return step;
                        }
                        tempSet.insert(str);
                    }
                }
            }
            if (tempSet.size() < endSet.size()){
                beginSet = tempSet;
            }
            else{
                beginSet = endSet;
                endSet = tempSet;
            }
        }
        return 0;
    }
};

```

## C# Solution

```csharp

public class Solution {
    private int L;
    private Dictionary<string, List<string>> allComboDict;

    public Solution()
    {
        this.L = 0;
        this.allComboDict = new Dictionary<string, List<string>>();
    }

    private int visitWordNode(Queue<KeyValuePair<String, int>> Q, Dictionary<string, int> visited,
        Dictionary<string, int> othersVisited) {
        KeyValuePair<string, int> node = Q.Dequeue();
        string word = node.Key;
        int level = node.Value;
        for (int i = 0; i < this.L; i++) {
            string newWord = word.Substring(0, i) + '*' + word.Substring(i + 1, L - (i + 1));
            if (this.allComboDict.ContainsKey(newWord) == true){
                foreach (string adjacentWord in this.allComboDict[newWord]) {
                if (othersVisited.ContainsKey(adjacentWord)) {
                    return level + othersVisited[adjacentWord];
                }
                if (!visited.ContainsKey(adjacentWord)) {
                    visited.Add(adjacentWord, level + 1);
                    Q.Enqueue(KeyValuePair.Create(adjacentWord, level + 1));
                }
            }
            }
        }
        return -1;
    }

    public int LadderLength(string beginWord, string endWord, List<string> wordList) {
        if (!wordList.Contains(endWord)) {
            return 0;
        }
        this.L = beginWord.Length;
        wordList.ForEach(word => {
            for (int i = 0; i < L; i++) {
                String newWord = word.Substring(0, i) + '*' + word.Substring(i + 1, L - (i + 1));
                if (this.allComboDict.ContainsKey(newWord)){
                    this.allComboDict[newWord].Add(word);
                }
                else{
                    this.allComboDict.Add(newWord, new List<string>());
                }        
            }
        });
        Queue<KeyValuePair<String, int>> Q_begin = new Queue<KeyValuePair<string, int>>();
        Queue<KeyValuePair<String, int>> Q_end = new Queue<KeyValuePair<string, int>>();
        Q_begin.Enqueue(KeyValuePair.Create(beginWord, 1));
        Q_end.Enqueue(KeyValuePair.Create(endWord, 1));
        Dictionary<string, int> visitedBegin = new Dictionary<string, int>();
        Dictionary<string, int> visitedEnd = new Dictionary<string, int>();
        visitedBegin.Add(beginWord, 1);
        visitedEnd.Add(endWord, 1);
        while (!(Q_begin.Count == 0) && !(Q_end.Count == 0)) {
            int ans = visitWordNode(Q_begin, visitedBegin, visitedEnd);
            if (ans > -1) {
                return ans;
            }
            ans = visitWordNode(Q_end, visitedEnd, visitedBegin);
            if (ans > -1) {
                return ans;
            }
        }
        return 0;
    }
}

```

## Java Solution

```java


import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import javafx.util.Pair;

class Solution {

    private int L;
    private HashMap<String, ArrayList<String>> allComboDict;

    Solution() {
        this.L = 0;
        this.allComboDict = new HashMap<String, ArrayList<String>>();
    }

    private int visitWordNode(Queue<Pair<String, Integer>> Q, HashMap<String, Integer> visited,
            HashMap<String, Integer> othersVisited) {
        Pair<String, Integer> node = Q.remove();
        String word = node.getKey();
        int level = node.getValue();

        for (int i = 0; i < this.L; i++) {
            String newWord = word.substring(0, i) + '*' + word.substring(i + 1, L);
            for (String adjacentWord : this.allComboDict.getOrDefault(newWord, new ArrayList<String>())) {
                if (othersVisited.containsKey(adjacentWord)) {
                    return level + othersVisited.get(adjacentWord);
                }
                if (!visited.containsKey(adjacentWord)) {
                    visited.put(adjacentWord, level + 1);
                    Q.add(new Pair(adjacentWord, level + 1));
                }
            }
        }
        return -1;
    }

    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        if (!wordList.contains(endWord)) {
            return 0;
        }
        this.L = beginWord.length();
        wordList.forEach(word -> {
            for (int i = 0; i < L; i++) {
                String newWord = word.substring(0, i) + '*' + word.substring(i + 1, L);
                ArrayList<String> transformations = this.allComboDict.getOrDefault(newWord, new ArrayList<String>());
                transformations.add(word);
                this.allComboDict.put(newWord, transformations);
            }
        });
        Queue<Pair<String, Integer>> Q_begin = new LinkedList<Pair<String, Integer>>();
        Queue<Pair<String, Integer>> Q_end = new LinkedList<Pair<String, Integer>>();
        Q_begin.add(new Pair(beginWord, 1));
        Q_end.add(new Pair(endWord, 1));
        HashMap<String, Integer> visitedBegin = new HashMap<String, Integer>();
        HashMap<String, Integer> visitedEnd = new HashMap<String, Integer>();
        visitedBegin.put(beginWord, 1);
        visitedEnd.put(endWord, 1);
        while (!Q_begin.isEmpty() && !Q_end.isEmpty()) {
            int ans = visitWordNode(Q_begin, visitedBegin, visitedEnd);
            if (ans > -1) {
                return ans;
            }
            ans = visitWordNode(Q_end, visitedEnd, visitedBegin);
            if (ans > -1) {
                return ans;
            }
        }
        return 0;
    }
}


```

## Python Solution

```python

from collections import defaultdict

class Solution:
    def __init__(self):
        self.length = 0
        self.all_combo_dict = defaultdict(list)

    def visitWordNode(self, queue, visited, others_visited):
        current_word, level = queue.pop(0)
        for i in range(self.length):
            intermediate_word = current_word[:i] + "*" + current_word[i+1:]
            for word in self.all_combo_dict[intermediate_word]:
                if word in others_visited:
                    return level + others_visited[word]
                if word not in visited:
                    visited[word] = level + 1
                    queue.append((word, level + 1))
        return None

    def ladderLength(self, beginWord, endWord, wordList):
        """
        :type beginWord: str
        :type endWord: str
        :type wordList: List[str]
        :rtype: int
        """
        if endWord not in wordList or not endWord or not beginWord or not wordList:
            return 0
        self.length = len(beginWord)

        for word in wordList:
            for i in range(self.length):
                self.all_combo_dict[word[:i] + "*" + word[i+1:]].append(word)
        queue_begin = [(beginWord, 1)] 
        queue_end = [(endWord, 1)] 
        visited_begin = {beginWord: 1}
        visited_end = {endWord: 1}
        ans = None
        while queue_begin and queue_end:
            ans = self.visitWordNode(queue_begin, visited_begin, visited_end)
            if ans:
                return ans
            ans = self.visitWordNode(queue_end, visited_end, visited_begin)
            if ans:
                return ans
        return 0

```


