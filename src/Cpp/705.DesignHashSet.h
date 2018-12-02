
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

class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        table[hash(key)][pos(key)] = true;
    }
    
    void remove(int key) {
        table[hash(key)][pos(key)] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return table[hash(key)][pos(key)];
    }
private:
    int size;
    const int bucket = 1000;
    const int item = 1001;
    bool table[1000][1000] = {{false}};

    int hash(int i){
        return i % bucket;
    }

    int pos(int i){
        return i / bucket;
    }

};

#endif
