
# python src/Python/main.py
# python3 src/Python/main.py

from __future__ import division, print_function, absolute_import

import twosum
import reverseinterger
import palidromenumber
import roman2int
import longestCommonPrefix

# solution = twosum.Solution()
# print(solution.twoSum([2, 3, 4], 5))

solution = reverseinterger.Solution()
print(solution.reverse(1534236469))
print(solution.reverse(-120))

solution = palidromenumber.Solution()
print(solution.isPalindrome(121))
print(solution.isPalindrome(12321))
print(solution.isPalindrome(-121))

solution = roman2int.Solution()
print(solution.romanToInt('III'))
print(solution.romanToInt('VI'))
print(solution.romanToInt('IV'))
print(solution.romanToInt('XI'))
print(solution.romanToInt('LVIII'))
print(solution.romanToInt('MCMXCIV'))
print(solution.romanToInt('MMCDXXV'))

solution = longestCommonPrefix.Solution()
print(solution.longestCommonPrefix(["flower", "flo", "floght"]))

# python src/Python/main.py
# python3 src/Python/main.py
