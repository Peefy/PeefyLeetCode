
#ifndef __COUNT_AND_SAY_H
#define __COUNT_AND_SAY_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    string countAndSay(int n)
    {
        string result = "1";
        while (n-- > 1)
        {
            string newResult = "";
            for (int i = 0; i < result.size(); i++)
            {
                int count = 0;
                char c = result[i];

                while (i < result.size() && result[i] == c)
                {
                    i++;
                    count++;
                }
                i--;
                char num[10] = "";
                sprintf(num, "%d", count);
                newResult = newResult + num + c;
            }
            result = newResult;
        }
        return result;
    }
};

#endif
