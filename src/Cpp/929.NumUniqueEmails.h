
#ifndef __NUM_UNIQUE_EMAILS_H
#define __NUM_UNIQUE_EMAILS_H

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
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> email_set;
        for (auto email : emails){
            string name;
            string domain;
            for (int i = 0;i < email.length(); ++i){
                if (email[i] == '@'){
                    name = email.substr(0, i);
                    domain = email.substr(i + 1, email.length() - i);
                }
            }
            for (int i = 0;i < name.length(); ++i){
                if (name[i] == '+'){
                    name = name.substr(0, i);
                }
            }
            name.erase(std::remove(name.begin(), name.end(), '.'), name.end());
            email_set.insert(name + '@' + domain);
        }
        return email_set.size();
    }
};

#endif

