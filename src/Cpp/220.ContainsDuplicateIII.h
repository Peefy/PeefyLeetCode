
#ifndef __CONTAINS_DUPLICATE_III_H
#define __CONTAINS_DUPLICATE_III_H

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

    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
	    set<double> _set;
	    for (int i = 0; i < nums.size(); ++i) 
	    {
		    auto s = _set.lower_bound((double)nums[i] - (double)t);
		    if (s != _set.end() && *s <= (double)nums[i] + (double)t) return true;

		    _set.insert(nums[i]);
		    if (_set.size() > k) _set.erase(nums[i - k]);
	    }
	    return false;
    }
};


#endif
