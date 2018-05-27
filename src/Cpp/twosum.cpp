
#include <iostream>
#include <vector>
#include <map>

#include "longest_common_prefix.h"

int main()
{
    Solution solution;
    vector<string> nums = {"flower", "flow", "flaa"};
    auto result = solution.longestCommonPrefix(nums);
    cout << result.c_str() << endl;
    getchar();
    return 0;
}
