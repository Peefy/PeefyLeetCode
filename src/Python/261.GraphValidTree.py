
class Solution:
    def validTree(self, n, edges):
        if n != len(edges) + 1:
            return False
        par = [i for i in range(n)]
        for edge in edges:
            par1 = edge[0] 
            par2 = edge[1]
            while par[par1] != par1:
                par1 = par[par1]
            while par[par2] != par2:
                par2 = par[par2]
            if par1 != par2:
                par[par2] = par1
                n -= 1
        return n == 1

    
if __name__ == "__main__":
    solution = Solution()

