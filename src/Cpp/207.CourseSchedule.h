
#ifndef __COURSE_SCHEDULE_H
#define __COURSE_SCHEDULE_H

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


#define RETURN_IF(expr, errcode) {if(expr) {return (errcode);}}
bool find(vector<vector<int>> &vec, int start, int end) {
	for (size_t i = 0; i < vec[start].size(); i++) 
		RETURN_IF(vec[start][i] == 1 && (i == end || find(vec, i, end)), true);
	return false;
}

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		vector<vector<int>> vec(numCourses, vector<int>(numCourses,0));
		for (auto pre : prerequisites) {
			RETURN_IF(find(vec, pre[1], pre[0]), false);
			vec[pre[0]][pre[1]] = 1;
		}
        return true;
    }
};


#endif
