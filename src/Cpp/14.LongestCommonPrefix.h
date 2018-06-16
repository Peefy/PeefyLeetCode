
#ifndef __LONGEST_COM_PREFIX_H
#define __LONGEST_COM_PREFIX_H

#include <iostream>
#include <vector>
#include <map>

#include <stdint.h>

using namespace std;

class Solution
{
  public:
    bool issame(vector<string> &strs, int index)
    {

        try
        {
            auto count = 0;
            for (auto i = 0; i < this->count(strs) - 1; ++i)
            {
                if (strs[i][index] == strs[i + 1][index])
                {
                    count += 1;
                }
            }
            if (count == this->count(strs) - 1)
            {
                return true;
            }
            return false;
        }
        catch (const std::exception &e)
        {
            return false;
        }
    }

    int count(vector<string> &strs){
        auto count = 0;
        for(auto str : strs)
        {
            count++;
        }
        return count;
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        string return_str = "";
        auto min_str_len = 2147483647;
        auto n = this->count(strs);
        for (auto i = 0;i < n;++i)
        {
            auto now_str_len = strs[i].length();
            if (now_str_len < min_str_len)
            {
                min_str_len = now_str_len;
            }
        }
        for (auto i = 0; i < min_str_len; ++i)
        {
            if (this->issame(strs, i) == true)
            {
                return_str += strs[0][i];
            }
            else
            {
                break;
            }
        }
        return return_str;
    }
};

#endif
