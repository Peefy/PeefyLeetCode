
using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.WordLadder
{

public class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}

    public Node(int _val,Node _left,Node _right,Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

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
}