
#ifndef __EVALUATE_REVERSE_POLISH_NOTATION_H
#define __EVALUATE_REVERSE_POLISH_NOTATION_H

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


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> values;
        for(auto& str : tokens){
            if(str == "*" ||str == "/" ||str == "+" ||str == "-")
                resolve(values,str);
            else
                values.push(atoi(str.c_str())); //string to int
        }
        return values.top(); 
    }

    void resolve(stack <int>& num_stack,string operation)
    {
        int obj1,obj2;
        
        obj2 = num_stack.top();
        num_stack.pop();
        obj1 = num_stack.top();
        num_stack.pop();
        
        num_stack.push(calc(obj1,obj2,operation));
    }
    
    int calc(int obj1,int obj2,string operation)
    {
        switch(operation[0])
        {
            case '+':
                    obj1 = obj1 + obj2;
                    break;
            case '-':
                    obj1 = obj1 - obj2;
                    break;
            case '*':
                    obj1 = obj1 * obj2;
                    break;
            case '/':
                    obj1 = obj1 / obj2;
                    break;
        }
        return obj1;
    }
};


#endif
