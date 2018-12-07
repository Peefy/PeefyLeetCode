
# problem 720 : LongestWord

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/720.LongestWord/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string longestWord(vector<string>& words) {
        string best, temp;
        sort(words.begin(), words.end());
        for (int i = 0; i < words.size(); i++) {
            int len = words[i].length();
            if (temp.substr(0, len - 1) == words[i].substr(0, len - 1)) {
                temp = words[i];
                if (len > best.length())
                    best = words[i];
            }
        }
        return best;
    }
};

```

## C# Solution

```csharp

    class PrefixTreeNode
    {
        /**
         * 保存插入的字符串
         */
        public string word = "";

        /**
         * 对于每一个节点来说，其可以与a-z中所有的其他节点相连，因此用数组来保存节点与其他节点间的联系
         * 如对于wo单词来说，假设树根节点为root。'w' - 'a' = 22，root节点对应的数组root.links[22] = null
         * 此时新建一个节点表示root节点和w所对应的节点相连。'o' - 'a' = 14，对于w所对应的节点有w.links[14] = null
         * 同样新建一个节点来表示节点'w'和节点'o'相连
         */
        public PrefixTreeNode[] links = new PrefixTreeNode[26];

        /**
         * 实现向前缀树中插入一个单词
         */
        public void insert(String s)
        {
            char[] chs = s.ToCharArray();
            PrefixTreeNode curNode = this;
            // 遍历当前单词中的每一个字符
            for (int i = 0; i < chs.Length; i++)
            {
                // 判断当前字符对应的节点是否在curNode的索引数组中，不存在则加入该字符对应节点
                int index = chs[i] - 'a';
                if (curNode.links[index] == null)
                {
                    curNode.links[index] = new PrefixTreeNode();
                }
                // 判断下一个字符
                curNode = curNode.links[index];
            }
            // 当前节点对应的单词为s
            curNode.word = s;
        }
    }
    public class Solution
    {
        public string LongestWord(string[] words)
        {
            // 首先构建前缀树的根节点
            PrefixTreeNode root = new PrefixTreeNode();
            root.word = "_";
            // 利用单词数组构建前缀树
            foreach (string word in words) {
                root.insert(word);
            }
            string[] result = new String[]{"z"};
            // 在前缀树中搜索
            dfs(root, result);
            return result[0];
        }

        void dfs(PrefixTreeNode node, String[] result)
        {
            // 如果一个节点包含的单词长度为0则说明原先单词数组中没有单词与该节点对应，直接返回
            if (node == null || node.word.Length == 0)
            {
                return;
            }
            foreach (PrefixTreeNode child in node.links)
            {
                if (child != null)
                {
                    dfs(child, result);
                    // 寻找最长单词并且长度相等的情况下返回最小的，因此在这里进行判断
                    bool valid = child.word.Length > result[0].Length
                            || (child.word.Length == result[0].Length
                            && child.word.CompareTo(result[0]) < 0);
                    if (valid)
                    {
                        result[0] = child.word;
                    }
                }
            }
        }

    }

```

## Java Solution

```java

class Solution {
    public String longestWord(String[] words) {
        HashSet<String> wordSet = new HashSet<>();
        String result = "";
        for (String word : words){
            wordSet.add(word);
        }
        for (String word : words){
            if (word.length() > result.length() || word.length() == result.length() && word.compareTo(result) <= 0){
                int k = 1;
                int n = word.length();
                for (; k < n; ++k){
                    if (wordSet.contains(word.substring(0, k)) == false)
                        break; 
                }
                if (k == n)
                    result = word;
            }
        }
        return result;
    }
}

```

## Python Solution

```python

class Solution:
    def longestWord(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        best, temp = '', ''
        words.sort()
        for word in words:
            n = len(word)
            if temp[0 : n - 1] == word[0 : n - 1]:
                temp = word
                if n > len(best):
                    best = word
        return best

```





