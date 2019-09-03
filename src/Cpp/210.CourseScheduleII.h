
#ifndef __COURSE_SCHEDULE_II_H
#ifndef __COURSE_SCHEDULE_II_H

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


class Solution {
public:
	vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
		vector<vector<int>> adjList(numCourses, vector<int>{0});
		for (auto i : prerequisites) {
			adjList[i[0]][0]++;
			adjList[i[1]].push_back(i[0]);
		}
		queue<int> q;
		for (int i = 0; i < numCourses; i++) {
			if (!adjList[i][0])
				q.push(i);
		}
		vector<int> ret;
		while (!q.empty()) {
			auto v = q.front();
			q.pop();
			ret.push_back(v);
			if (adjList[v].size() > 1) {
				for (int i = 1; i < adjList[v].size(); i++) {
					auto w = adjList[v][i];
					adjList[w][0]--;
					if (!adjList[w][0])
						q.push(w);
				}
			}
		}
		if (ret.size() == numCourses)
			return ret;
		ret = {};
		return ret;
	}
};



#endif
