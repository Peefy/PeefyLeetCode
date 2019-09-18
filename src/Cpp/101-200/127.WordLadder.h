
#ifndef __WORD_LADDER_H
#define __WORD_LADDER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

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

#endif
