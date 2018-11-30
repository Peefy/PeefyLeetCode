
#ifndef __REPEATED_STRING_MATCH_H
#define __REPEATED_STRING_MATCH_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>
#include <numeric>

using namespace std;

class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    Employee* getemfromid(vector<Employee*> employees, int id){
        for (auto em : employees)
            if (em->id == id)
                return em;
        return nullptr;
    }

    int getImportance(vector<Employee*> employees, int id) {
        auto root = getemfromid(employees, id);

        int r = root->importance;
        for (auto emid : root->subordinates)
            r += getImportance(employees, emid);
        return r;
    }
};

#endif
