
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.AddAndSearchWord
{
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
}