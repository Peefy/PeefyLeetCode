
class Solution:
    def canCompleteCircuit(self, gas, cost):
        sum = 0
        total = 0
        start = 0
        for i in range(len(gas)):
            total += (gas[i] - cost[i])
            if sum < 0:
                sum = gas[i] - cost[i]
                start = i
            else:
                sum += (gas[i] - cost[i])
        return start if total >= 0 else -1 


if __name__ == "__main__":
    solution = Solution()
    print(solution.canCompleteCircuit([1,2,3,4,5], [3,4,5,1,2]))
    print(solution.canCompleteCircuit([2,3,4], [3,4,3]))
        