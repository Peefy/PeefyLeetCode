
#include <iostream>
#include <vector>
#include <map>

#include "twosum.h"

int main()
{
    twoSum::Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    auto result = solution.twoSum(nums, 9);
    std::cout << result[0] << '\n';
    std::cout << result[1] << '\n';
    std::cout << "adad" << '\n';
    getchar();
    return 0;
}
