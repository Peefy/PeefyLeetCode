
class Interval:
    def __init__(self):
        self.start = 0
        self.end = 0

    def __init__(self, start, end):
        self.start = start
        self.end = end


class Solution:
    def minMeetingRooms(self, intervals):
        starts = []
        ends = []
        for interval in intervals:
            starts.append(interval.start)
            ends.append(interval.end)
        starts.sort()
        ends.sort()
        rooms = 0
        activeMeetings = 0
        i = 0
        j = 0
        while i < len(intervals) and j < len(intervals):
            if starts[i] < ends[j]:
                activeMeetings += 1
                i += 1
            else:
                activeMeetings -= 1
                j += 1
            rooms = max(rooms, activeMeetings)
        return rooms

    
if __name__ == "__main__":
    solution = Solution()
