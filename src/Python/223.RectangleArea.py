
class Solution:
    def computeArea(self, A, B, C, D, E, F, G, H):
        if E > C or A > G: 
            return (C - A) * (D - B) + (G - E) * (H - F)
        if F > D or H < B: 
            return (C - A) * (D - B) + (G - E) * (H - F)
        length = min(C, G) - max(A, E)
        width = min(D, H) - max(B, F)
        return (C - A) * (D - B) + (G - E) * (H - F) - length * width


if __name__ == "__main__":
    solution = Solution()
    print(solution.computeArea(-3, 0, 3, 4, 0, -1, 9, 2))

