
#ifndef __COMPARE_VERSION_NUMBERS_H
#ifndef __COMPARE_VERSION_NUMBERS_H

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


class Solution {
public:
    int compareVersion(string version1, string version2) {
        string delim = ".";
        int from1 = 0; int from2 = 0;
        int to1 = version1.find(delim);
        int to2 = version2.find(delim);
        while(from1 < version1.npos && from2 < version2.npos && to1 <= version2.npos && to2 <= version2.npos){
            int comp = stoi(version1.substr(from1, to1)) - stoi(version2.substr(from2, to2));
            if(comp > 0) return 1;
            if(comp < 0) return -1; 
            
            if(to1 == version1.npos && to2 == version2.npos) return 0;
            //以下两行是为了解决类似这样的case: 1.0; 1,这个实际上是相等的
            if(to1 == version1.npos) return stod(version2.substr(to2 + 1, version2.npos)) > 0 ? -1: 0;
            if(to2 == version2.npos) return stod(version1.substr(to1 + 1, version1.npos)) > 0 ? 1: 0;

            from1 = to1 + 1;
            from2 = to2 + 1;
            to1 = version1.find(delim, from1);
            to2 = version2.find(delim, from2);
        }
        return 0;
    }
};


#endif
