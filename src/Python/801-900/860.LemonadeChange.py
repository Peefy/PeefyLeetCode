
class Solution:
    def lemonadeChange(self, bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        money5 = 0
        money10 = 0
        for bill in bills:
            if bill == 5:
                money5 += 1
            elif bill == 10:
                if money5 == 0:
                    return False
                money5 -= 1
                money10 += 1
            elif bill == 20:
                if money5 >= 1 and money10 >= 1:
                    money5 -= 1
                    money10 -= 1
                elif money5 >= 3:
                    money5 -= 3
                else:
                    return False
        return True


if __name__ == '__main__':
    solution = Solution()
    print(solution.lemonadeChange([5,5,5,10,20]))
    print(solution.lemonadeChange([5,5,10]))
    print(solution.lemonadeChange([10,10]))
    print(solution.lemonadeChange([5,5,10,10,20]))
    print(solution.lemonadeChange([5,5,10,20,5,5,5,5,5,5,5,5,5,10,5,5,20,5,20,5]))
else:
    pass
