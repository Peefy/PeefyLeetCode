
class Solution(object):
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        counter = {}
        r = []
        for cp in cpdomains:
            tmps = cp.split(' ')
            num = tmps[0]
            addrone = tmps[1]
            while addrone != '':
                if addrone not in counter:
                    counter[addrone] = int(num)
                else:
                    counter[addrone] += int(num)
                flag = False
                for i, s in enumerate(addrone):
                    if addrone[i] == '.':
                        flag = True
                        addrone = addrone[i + 1:]
                        break
                if flag == False:
                    break
        for addr, num in counter.items():
            r.append('{} {}'.format(num, addr))
        return r
           
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.subdomainVisits(["9001 discuss.leetcode.com"]))
    print(solution.subdomainVisits(["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"]))
else:
    pass




