
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ImplementTrie
{
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

}