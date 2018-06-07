
# python src/Python/main.py
# python3 src/Python/main.py

from __future__ import division, print_function, absolute_import

import twosum
import reverseinterger
import palidromenumber
import roman2int
import longestCommonPrefix
import merge_two_sorted_lists as m
import numpy as np
import removeduplicates
import removeElement

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

brakets = "()[]{}"
print(brakets)

solution = m.Solution()
l1 = m.ListNode(1)
l1.next = m.ListNode(2)
l1.next.next = m.ListNode(4)
l2 = m.ListNode(1)
l2.next = m.ListNode(3)
l2.next.next = m.ListNode(4)
print(solution.mergeTwoLists(l1, l2))

solution = removeduplicates.Solution()
print(solution.removeDuplicates([1, 1, 2]));

solution = removeElement.Solution()
print(solution.removeElement([3,2,2,2], 3))

# python src/Python/main.py
# python3 src/Python/main.py
