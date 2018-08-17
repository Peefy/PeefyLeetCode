 
#ifndef __QUEUE_USING_STACK_H
#define __QUEUE_USING_STACK_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class MyQueue {
public:
    deque<int> q;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        q.push_front(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = q.back();
        q.pop_back();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        return q.back();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return q.empty();
    }
};

#endif
