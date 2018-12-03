
#ifndef __BINARY_SERACH_H
#define __BINARY_SERACH_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        nums[key] = value + 1;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return nums[key] - 1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        nums[key] = 0;
    }
private:
    int nums[1000001] = {0};
};

#endif
