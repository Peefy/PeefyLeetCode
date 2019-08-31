
# problem 208 : ImplementTrie(PrefixTree)

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/208.ImplementTrie(PrefixTree)/problem.png"/>

## C++ Solution

```c++

const int MAXN = 26;
class Trie{
public:
    bool is_str;      // 标识当前结点是否为一个完整的字符串
    Trie *next[MAXN]; // 下一个结点的指针数组
    Trie(){
        is_str = NULL;
        memset(next, 0, sizeof(next));
    }

    /** Inserts a word into the trie. */
    void insert(string word){
        Trie *cur = this; // cur初始化为根结点指针
        for (char w : word){ // 遍历word中的每一个字符
            if (cur->next[w - 'a'] == NULL){ // 下一个结点不存在，新增一个结点
                Trie *new_node = new Trie();
                cur->next[w - 'a'] = new_node;
            }
            cur = cur->next[w - 'a'];
        }
        cur->is_str = true; // 当前结点已经是一个完整的字符串了
    }

    /** Returns if the word is in the trie. */
    bool search(string word){
        Trie *cur = this;
        for (char w : word){
            if (cur != NULL)
                cur = cur->next[w - 'a']; // 更新cur指针的指向，使其指向下一个结点
        }
        return (cur != NULL && cur->is_str); // cur指针不为空且cur指针指向的结点为一个完整的字符串，则成功找到字符串
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix){
        Trie *cur = this;
        for (char w : prefix){
            if (cur != NULL)
                cur = cur->next[w - 'a'];
        }
        return (cur != NULL); // 相比search(),这里只需判断cur指针是否为空就行了
    }
};

```

## C# Solution

```csharp

public class TrieNode {
    private TrieNode[] links;
    private int R = 26;
    private bool _isEnd;

    public TrieNode() {
        links = new TrieNode[R];
    }

    public bool containsKey(char ch) {
        return links[ch -'a'] != null;
    }

    public TrieNode get(char ch) {
        return links[ch -'a'];
    }

    public void put(char ch, TrieNode node) {
        links[ch -'a'] = node;
    }

    public void setEnd() {
        _isEnd = true;
    }

    public bool isEnd() {
        return _isEnd;
    }
}
public class Trie {
    private TrieNode root;

    public Trie() {
        root = new TrieNode();
    }
    
    public void Insert(string word) {
        TrieNode node = root;
        for (int i = 0; i < word.Length; i++) {
            char currentChar = word[i];
            if (!node.containsKey(currentChar)) {
                node.put(currentChar, new TrieNode());
            }
            node = node.get(currentChar);
        }
        node.setEnd();
    }
    
    private TrieNode searchPrefix(String word) {
        TrieNode node = root;
        for (int i = 0; i < word.Length; i++) {
           char curLetter = word[i];
           if (node.containsKey(curLetter)) {
               node = node.get(curLetter);
           } else {
               return null;
           }
        }
        return node;
    }

    public bool Search(string word) {
        TrieNode node = searchPrefix(word);
        return node != null && node.isEnd();
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    public bool StartsWith(string prefix) {
        TrieNode node = searchPrefix(prefix);
        return node != null;
    }
}

```

## Java Solution

```java

class TrieNode {
    private TrieNode[] links;
    private final int R = 26;
    private boolean isEnd;

    public TrieNode() {
        links = new TrieNode[R];
    }

    public boolean containsKey(char ch) {
        return links[ch -'a'] != null;
    }

    public TrieNode get(char ch) {
        return links[ch -'a'];
    }

    public void put(char ch, TrieNode node) {
        links[ch -'a'] = node;
    }

    public void setEnd() {
        isEnd = true;
    }

    public boolean isEnd() {
        return isEnd;
    }
}


class Trie {
    private TrieNode root;

    public Trie() {
        root = new TrieNode();
    }

    public void insert(String word) {
        TrieNode node = root;
        for (int i = 0; i < word.length(); i++) {
            char currentChar = word.charAt(i);
            if (!node.containsKey(currentChar)) {
                node.put(currentChar, new TrieNode());
            }
            node = node.get(currentChar);
        }
        node.setEnd();
    }
    
    private TrieNode searchPrefix(String word) {
        TrieNode node = root;
        for (int i = 0; i < word.length(); i++) {
           char curLetter = word.charAt(i);
           if (node.containsKey(curLetter)) {
               node = node.get(curLetter);
           } else {
               return null;
           }
        }
        return node;
    }

    public boolean search(String word) {
        TrieNode node = searchPrefix(word);
        return node != null && node.isEnd();
    }

    public boolean startsWith(String prefix) {
        TrieNode node = searchPrefix(prefix);
        return node != null;
    }
}

```

## Python Solution

```python

class TrieNode:
    def __init__(self):    
        self.R = 26
        self.links = [None] * self.R
        self.__isEnd = False
    
    def containsKey(self, ch):
        return self.links[ord(ch) - ord('a')] is not None
    

    def get(self, ch):
        return self.links[ord(ch) - ord('a')]


    def put(self, ch, node):
        self.links[ord(ch) - ord('a')] = node


    def setEnd(self):
        self.__isEnd = True


    def isEnd(self):
        return self.__isEnd


class Trie:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root = TrieNode()
        

    def insert(self, word):
        """
        Inserts a word into the trie.
        """
        node = self.root
        for c in word:
            if node.containsKey(c) == False:
                node.put(c, TrieNode())
            node = node.get(c)
        node.setEnd()
        

    def __searchPrefix(self, word):
        node = self.root
        for c in word:
            if node.containsKey(c) == True:
                node = node.get(c)
            else:
                return None
        return node


    def search(self, word):
        """
        Returns if the word is in the trie.
        """
        node = self.__searchPrefix(word)
        return node is not None and node.isEnd()
        

    def startsWith(self, prefix):
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        node = self.__searchPrefix(prefix)
        return node is not None     

```




