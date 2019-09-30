
#ifndef __FLATTEN_2D_VECTOR_H
#define __FLATTEN_2D_VECTOR_H

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


class Vector2D {
public:
    Vector2D(vector<vector<int>>& vec2d){
        if (vec2d.size() == 0)
            return;
        it1 = vec2d.begin();
        itEnd = vec2d.end();
        it2 = (*it1).begin();
    }

    int next() {
        return *it2++;
    }

    bool hasNext() {
        while (it1 != itEnd && it2 == (*it1).end()) {
            it1++;
            it2 = (*it1).begin();
        }
        return it1 != itEnd;
    }
private:
    vector<vector<int>>::iterator it1, itEnd;
    vector<int>::iterator it2; 
};


#endif
