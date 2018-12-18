
#ifndef __LARGEST_TRIANGLE_AREA_H
#define __LARGEST_TRIANGLE_AREA_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<string> split(const string& str, const string& delim) {  
	vector<string> res;  
	if("" == str) return res;  
	char * strs = new char[str.length() + 1] ;  
	strcpy(strs, str.c_str());   
	char * d = new char[delim.length() + 1];  
	strcpy(d, delim.c_str());  
	char *p = strtok(strs, d);  
	while(p) {  
		string s = p; 
		res.push_back(s); 
		p = strtok(NULL, d);  
	}  
	return res;  
    }

    string mostCommonWord(string paragraph, vector<string>& banned) {
        for (int i = 0; i < paragraph.size(); i++) {
            if (paragraph[i] == '.' || paragraph[i] == '!' || paragraph[i] == '?' || 
                paragraph[i] == ';' || paragraph[i] == ',' || paragraph[i] == '\\' ||
                paragraph[i] == ' ' || paragraph[i] == '\'' || paragraph[i] == '\"') {
                paragraph[i] = ' ';
            }
            else if (paragraph[i] >= 'A' && paragraph[i] <= 'Z'){
                paragraph[i] = paragraph[i] + 'a' - 'A';
            }
        }
        vector<string> strs = split(paragraph, " ");
        unordered_map<string, int> hash;
        unordered_set<string> set;
        for (string ban : banned) {
            set.insert(ban);
        }
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i] != " "){
                hash[strs[i]] += 1;
            }
        }
        int maxcount = 0;
        string r = "";
        for (auto item : hash){
            if (set.find(item.first) == set.end() && item.second >= maxcount){
                maxcount = item.second;
                r = item.first;
            }
        }
        return r;
    }
};

#endif

