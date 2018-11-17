
class Solution:
    def findRestaurant(self, list1, list2):
        """
        :type list1: List[str]
        :type list2: List[str]
        :rtype: List[str]
        """
        import math
        d = {}
        r = []
        minv = math.inf
        for i in range(len(list1)):
            d[list1[i]] = i
        for i in range(len(list2)):
            if list2[i] in d.keys():
                if minv > d[list2[i]] + i:
                    minv = d[list2[i]] + i
                    r.clear()
                    r.append(list2[i])
                elif d[list2[i]] + i == minv:
                    r.append(list2[i])        
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.findRestaurant(["Shogun", "Tapioca Express", "Burger King", "KFC"], ["KFC", "Shogun", "Burger King"]))
else:
    pass
