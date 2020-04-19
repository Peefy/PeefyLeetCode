
class Solution:
    def getHint(self, secret, guess):
        n = len(secret)
        acount = 0
        bcount = 0
        shash = {}
        ghash = {}
        for i in range(n):
            if secret[i] == guess[i]:
                acount += 1
            if secret[i] not in shash:
                shash[secret[i]] = 1
            else:
                shash[secret[i]] += 1
            if guess[i] not in ghash:
                ghash[guess[i]] = 1
            else:
                ghash[guess[i]] += 1
        for k in shash.keys():
            if k in ghash:
                bcount += min(ghash[k], shash[k])
        bcount = bcount - acount
        return str(acount) + 'A' + str(bcount) + 'B'
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.getHint(secret = "1807", guess = "7810"))
    print(solution.getHint(secret = "1123", guess = "0111"))
    print(solution.getHint(secret = "11", guess = "10"))

