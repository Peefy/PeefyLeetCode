
class Solution:
    def merge(self, intervals):
        intervals = [[x.start, x.end] for x in _intervals]
        intervals.sort(key=lambda x: (x[0], x[1]))

        i = 1
        while i < len(intervals):
            if intervals[i][0] <= intervals[i-1][1]:
                intervals[i-1][0] = min(intervals[i][0], intervals[i-1][0])
                intervals[i-1][1] = max(intervals[i][1], intervals[i-1][1])
                del intervals[i]
            else:
                i += 1

        return intervals


if __name__ == "__main__":
    solution = Solution()
    print(solution.merge([[1, 3], [2, 6], [8, 10], [15, 18]]))
    print(solution.merge([[1, 4], [4, 5]]))
   