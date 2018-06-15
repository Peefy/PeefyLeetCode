
#ifndef __58LengthOfLastWord_H
#define __58LengthOfLastWord_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    int lengthOfLastWord(string s)
    {
        auto n = s.length();
        if (n == 0)
            return 0;
        int i = n - 1;
        auto length = 0;
        while (i >= 0 && s[i] == ' ')
        {
            --i;
        }
        while (i >= 0)
        {
            if (s[i] != ' ')
                ++length;
            else
                break;
            --i;
        }
        return length;
    }
};

#endif
