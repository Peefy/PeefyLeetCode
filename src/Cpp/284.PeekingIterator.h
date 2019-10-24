
#ifndef __EXPRESSION_ADD_OPERATORS_H
#define __EXPRESSION_ADD_OPERATORS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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

class Iterator {
    struct Data;
	Data* data;
public:
	Iterator(const vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator();
	// Returns the next element in the iteration.
	int next();
	// Returns true if the iteration has more elements.
	bool hasNext() const;
};


class PeekingIterator : public Iterator {
private:
    int cur;
    vector<int> res;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    cur = 0;
        res = std::move(nums);
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        if (res.size() == 0 || cur >= res.size())
            return -100000;
        return res[cur];
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int result = -100000;
        if (cur < res.size()) {
            result = res[cur++];
        }
        return result;
	}

	bool hasNext() const {
	    bool result = false;
        if (cur < res.size()) {
            result = true;
        }
        return result;
	}
};


#endif
