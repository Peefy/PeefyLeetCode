
#ifndef __RESTORE_IP_ADDRESSES_H
#define __RESTORE_IP_ADDRESSES_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution
{
public:
    void rescue(string s, int n, string& res, vector<string>& list){
        if (s.length() <= 0)
            return;
        if (n == 0){
            int num = atoi(s.c_str());
            if (num >= 0 && num < 256 && (s[0] != '0' || s.length() == 1)){
                res = res + s;
                list.push_back(res);
            }
            return;
        }
        if (s.length() > 3 * (n + 1) || s.length() <= n)
            return;
        for (int i = 1; i <= 3; i++){
            if (s[0] == '0')
            {
                rescue(s.substr(i), n - 1, res + s.substr(0, i) + ".", list);
                break;
            }
            if (s.length() > i)
            {
                int integer1 = atoi(s.substr(0, i).c_str()); 
                if (integer1 < 256)
                    rescue(s.substr(i), n - 1, res + s.substr(0, i) + ".", list);
            }
        }
    }
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> strings;
        if (s.length() > 12) {
            return strings;
        }
        rescue(s, 3, "", strings);
        return strings;
    }
};

#endif
