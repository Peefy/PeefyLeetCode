
#ifndef __INT_REVERSE_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

namespace twoSum{

class Solution {
public:
    int reverse(int x) {
        char str[32] = {'\0'}; 
        string restr = "";
        sprintf(str, "%d", x);
        auto n = 0;
        for(auto i = 0;str[i] != '\0' ;++i)
        {
            ++n;
        }
        if(str[0] != '-')
        {
            for(auto i = 0;i < n;++i)
            {
                auto j = n - i - 1;
                restr += str[j];
            }
        }
        else
        {
            restr += "-";
            for(auto i = 0;i < n - 1;++i)
            {
                auto j = n - i - 1;
                restr += str[j];
            }
        }
        try
        {
            auto x = atoll(restr.c_str());
            if(x > 2147483648 || x <= -2147483648)
            {
                return 0;
            }
            return (int)x;
        }
        catch(exception& ex)
        {
            return 0;
        }
        
    }
};
}
#endif // !__TWO_SUM_H

