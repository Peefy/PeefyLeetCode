
class Solution:

    def find(self, fro, n, factors, len, results):
        i = fro
        while i * i <= n:
            if n % i == 0:
                factors[len] = i
                self.find(i, n // i, factors, len + 1, results)
            i += 1
        if len > 0:
            factors[len] = n
            f = [0] * (len + 1)
            for i in range(len):
                f[i] = factors[i]
            results.append(f)


    def getFactors(self, n):
        p = 0
        i = 1
        while i <= n:        
            i *= 2
            p += 1
        results = []
        self.find(2, n, [0] * p, results)
        return results

    
if __name__ == "__main__":
    solution = Solution()
