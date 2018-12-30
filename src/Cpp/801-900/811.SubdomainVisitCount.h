
#ifndef __SUBDOMAIN_VISIT_COUNT_H
#define __SUBDOMAIN_VISIT_COUNT_H

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

    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> counter;
        vector<string> r;
        for (string cp : cpdomains) {
            vector<string> tmps = split(cp, " ");
            int num = atoi(tmps[0].c_str());
            string addrone = tmps[1];
            counter[addrone] += num; 
            for (int i = 0; i < addrone.length(); i++) {
                if (addrone[i] == '.'){
                    string sub = string(addrone.begin() + i + 1, addrone.end()); 
                    counter[sub] += num; 
                }
            }
        }
        for (auto item : counter) {
            r.push_back(to_string(item.second) + " " + item.first);
        }
        return r;
    }
};

#endif

