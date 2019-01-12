
#ifndef __LENGTH_OF_LONGEST_SUBSTRING_H
#define __LENGTH_OF_LONGEST_SUBSTRING_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unorder_set>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0)
            return 0;
        s.push_back(s[n - 1]);
        int count = 0;
        int fisrtpoint = 0;
        unordered_set<char> h;
        for (int i = 0;i <= n;++i){
            char c = s[i];
            if (h.find(c) == h.end()){
                h.insert(c);
            }
            else{
                count = max(count, (int)h.size());
                while (s[fisrtpoint] != c){
                    h.erase(s[fisrtpoint]);
                    fisrtpoint += 1;   
                }      
                fisrtpoint += 1;     
            }
        }
        return count;
    }
};

#endif
