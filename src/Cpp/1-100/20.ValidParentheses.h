
#ifndef __VALID_PARENTHESES_H
#define __VALID_PARENTHESES_H

#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;


class Solution {
public:
    public:
    bool isValid(string s) {
        stack<char> cstack;
        for(auto c : s){
            if(c == '(' || c == '[' || c == '{'){
                cstack.push(c);
            }
            else{
                if(cstack.empty()){
                    return false;
                }
                else{
                    auto last = cstack.top();
                    if((last == '(' && c == ')') || 
                        (last == '[' && c == ']') ||
                        (last == '{' && c == '}')){
                            cstack.pop();
                        }
                    else{
                        return false;
                    }
                }
            }
        }
        return cstack.empty();
    }
};

#endif 

