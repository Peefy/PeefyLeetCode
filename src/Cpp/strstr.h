
#ifndef __STR_STR_H
#define __STR_STR_H

#include <string.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    int strStr(string haystack, string needle)
    {
        if (needle.length() == 0)
            return 0;
        return haystack.find(needle.c_str(), 0);
    }
};

#endif
