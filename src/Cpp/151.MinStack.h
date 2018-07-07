
#ifndef __MIN_STACK_H
#define __MIN_STACK_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

class MinStack
{
  public:
    int min = 2147483647; 
    stack<int> s;
    MinStack()
    {
    }

    void push(int x)
    {
        if (x <= min)
            s.push(min);
            min = x;
        s.push(x);
    }

    void pop()
    {
        auto top = s.top();
        s.pop(); 
        if (top == min)
            min = s.top();
            s.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return min;
    }
};

#endif
