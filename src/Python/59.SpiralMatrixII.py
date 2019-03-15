class Solution:
    def generateMatrix(self, n):
        matrix = [([0] * n) for i in range(n)]
        total = n * n
        i = 0
        j = 0
        lrbound = [0, n]
        udbound = [0, n]
        shunxu = 0
        count = 1
        while count <= total:
            if shunxu == 0:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    i += 1
                else:
                    j += 1
                    i -= 1
                    udbound[0] += 1
                    shunxu = 1
            elif shunxu == 1:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    j += 1
                else:
                    i -= 1
                    j -= 1
                    lrbound[1] -= 1
                    shunxu = 2
            elif shunxu == 2:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    i -= 1
                else:
                    j -= 1
                    i += 1
                    udbound[1] -= 1
                    shunxu = 3
            else:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    matrix[j][i] = count
                    count += 1
                    j -= 1
                else:
                    i += 1
                    j += 1
                    lrbound[0] += 1
                    shunxu = 0   
        return matrix

if __name__ == "__main__":
    solution = Solution()
    print(solution.generateMatrix(3))

   