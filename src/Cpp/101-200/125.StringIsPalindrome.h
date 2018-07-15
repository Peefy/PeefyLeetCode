
#ifndef __STRING_IS_PALINDROME_H
#define __STRING_IS_PALINDROME_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>

using namespace std;

#define IS_UPPER(c) (((c) >= 'A') && ((c) <= 'Z'))
#define IS_LOWER(c) (((c) >= 'a') && ((c) <= 'z'))
#define IS_DIGITNUM(c) (((c) >= '0') && ((c) <= '9'))

class Solution
{
  public:
    bool isPalindrome(string s)
    {
        int n = s.length();  
        string newstr = "";
        for(int i = 0; i < n; i++)
        {
            if (IS_DIGITNUM(s[i]) == true)
            {
                newstr += s[i];
            }
            else if (IS_LOWER(s[i]) == true)
            {
                newstr += s[i];
            }
            else if (IS_UPPER(s[i]) == true)
            {
                newstr += (('a' - 'A') + s[i]);
            }
        }
        auto new_n = newstr.length();
        for(int i = 0; i < new_n; i++)
        {
            if (newstr[i] != newstr[new_n - i - 1])
                return false;
        }
        return true;       
    }
};

#endif
