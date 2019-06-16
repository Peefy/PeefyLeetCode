
class Solution:
    def spiralOrder(self, matrix):
        ans = []
        if matrix == []:
            return ans
        n = len(matrix)
        m = len(matrix[0])
        i = 0
        j = 0
        lrbound = [0, m]
        udbound = [0, n]
        shunxu = 0
        while len(ans) < m * n:
            if shunxu == 0:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    i += 1
                else:
                    j += 1
                    i -= 1
                    udbound[0] += 1
                    shunxu = 1
            elif shunxu == 1:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    j += 1
                else:
                    i -= 1
                    j -= 1
                    lrbound[1] -= 1
                    shunxu = 2
            elif shunxu == 2:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    i -= 1
                else:
                    j -= 1
                    i += 1
                    udbound[1] -= 1
                    shunxu = 3
            else:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    j -= 1
                else:
                    i += 1
                    j += 1
                    lrbound[0] += 1
                    shunxu = 0
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.spiralOrder([
        [ 1, 2, 3, 1],
        [ 4, 5, 6, 2],
        [ 7, 8, 9, 10 ]
    ]))

   