
# problem 211 : AddAndSearchWord

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/211.AddAndSearchWord/problem.png"/>

## C++ Solution

```c++

struct Node{
    bool isWord = false;
    Node * next[26] = {};
};

class WordDictionary {
public:
    Node * root;
    WordDictionary() {
        root = new Node(); 
    }
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Node* p = root;
        for(int i = 0;root&&i<word.size();++i){
            if(p->next[word[i]-'a'] == NULL){
                p->next[word[i]-'a'] = new Node();
            }
            p = p->next[word[i]- 'a'];
        }
        p->isWord  = true;
    }
    

    bool dfs(Node* root,string word,int i){
        if(!root) return false;
        if(i>= word.size()) return root->isWord;
        if(word[i]!='.'){
            if(root->next[word[i]-'a'])
                return dfs(root->next[word[i]-'a'],word,i+1);
            else 
                return false;
        }
        for(int j = 0;j<26;++j){
            if(root->next[j]&&dfs(root->next[j],word,i+1)){
                return true;
            }
        }
        return false;
    }
    
    bool search(string word) {
        return dfs(root,word,0);
    }
};

```

## C# Solution

```csharp

public class TrieNode{
    public TrieNode[] child;//记录孩子节点
    public bool is_end;//记录当前节点是不是一个单词的结束字母
    public TrieNode(){//
        child = new TrieNode[26];//子节点数组长度26，0：‘a’，1：‘b’.....
        is_end = false;
    }
}

public class WordDictionary {

    TrieNode root;//记录前缀树的根
    /** Initialize your data structure here. */
    public WordDictionary() {
        root = new TrieNode();
    }

    /** Adds a word into the data structure. */
    public void AddWord(String word) {//前缀树的添加
        TrieNode ptr = root;//从根出发
        for(int i = 0;i < word.Length;i++){
            char c = word[i];//对于每个单词
            if(ptr.child[c - 'a'] == null){//如果c - 'a'为空，说明还没有存入
                ptr.child[c - 'a'] = new TrieNode();//存入节点
            }
            ptr = ptr.child[c - 'a'];//指向当前节点
        }
        ptr.is_end = true;//最后的节点为单词的最后一个单词，is_end设置为true
    }

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    public bool Search(String word) {//搜索
        return Search(root,word,0);
    }

    //查询
    public bool Search(TrieNode ptr,String word,int i){
        if(i >= word.Length){//如果已经是最后一个单词
            return ptr.is_end;
        }
        if(word[i] == '.'){//如果是'.'，则对该节点所有不为空的节点进行深度搜索
            for(int j = 0;j < 26;j++){
                if(ptr.child[j] != null && Search(ptr.child[j],word,i + 1)){//为真，返回true
                    return true;
                }
            }
            return false;//否则，false
        }
        else {//如果是字母
            char c = word[i];
            //判断该字母是否在前缀树中，如果在，从该节点出发深度搜索后边的字母
            if(ptr.child[c - 'a'] != null && Search(ptr.child[c - 'a'],word,i + 1)){
                return true;
            }
            return false;
        }
    }
}

```

## Java Solution

```java

class TrieNode{
    TrieNode[] child;//记录孩子节点
    boolean is_end;//记录当前节点是不是一个单词的结束字母
    public TrieNode(){//
        child = new TrieNode[26];//子节点数组长度26，0：‘a’，1：‘b’.....
        is_end = false;
    }
}

class WordDictionary {

    TrieNode root;//记录前缀树的根
    /** Initialize your data structure here. */
    public WordDictionary() {
        root = new TrieNode();
    }

    /** Adds a word into the data structure. */
    public void addWord(String word) {//前缀树的添加
        TrieNode ptr = root;//从根出发
        for(int i = 0;i < word.length();i++){
            char c = word.charAt(i);//对于每个单词
            if(ptr.child[c - 'a'] == null){//如果c - 'a'为空，说明还没有存入
                ptr.child[c - 'a'] = new TrieNode();//存入节点
            }
            ptr = ptr.child[c - 'a'];//指向当前节点
        }
        ptr.is_end = true;//最后的节点为单词的最后一个单词，is_end设置为true
    }

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    public boolean search(String word) {//搜索
        return search(root,word,0);
    }

    //查询
    public boolean search(TrieNode ptr,String word,int i){
        if(i >= word.length()){//如果已经是最后一个单词
            return ptr.is_end;
        }
        if(word.charAt(i) == '.'){//如果是'.'，则对该节点所有不为空的节点进行深度搜索
            for(int j = 0;j < 26;j++){
                if(ptr.child[j] != null && search(ptr.child[j],word,i + 1)){//为真，返回true
                    return true;
                }
            }
            return false;//否则，false
        }
        else {//如果是字母
            char c = word.charAt(i);
            //判断该字母是否在前缀树中，如果在，从该节点出发深度搜索后边的字母
            if(ptr.child[c - 'a'] != null && search(ptr.child[c - 'a'],word,i + 1)){
                return true;
            }
            return false;
        }
    }
}


```

## Python Solution

```python

class WordDictionary:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        from collections import defaultdict
        self.lookup = {}
        

    def addWord(self, word: str) -> None:
        """
        Adds a word into the data structure.
        """
        tree = self.lookup
        for a in word:
            tree = tree.setdefault(a, {})
        tree["#"] = {}
        

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter.
        """
        
        def helper(word, tree):
            if not word:
                if "#" in tree:
                    return True
                return False
            if word[0] == ".":
                for t in tree:
                    if helper(word[1:], tree[t]):
                        return True
            elif word[0] in tree:
                if helper(word[1:], tree[word[0]]):
                    return True
            return False
        return helper(word, self.lookup)  

```




