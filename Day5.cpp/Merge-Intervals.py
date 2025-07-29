from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        n = len(intervals)
        intervals.sort()                         # sort intervals by start time
        ans = []
        for i in range(n):
            start, end = intervals[i][0], intervals[i][1]   # current interval

            # skip if current interval is already merged
            if len(ans) != 0 and end <= ans[-1][1]:
                continue

            # try to merge with future overlapping intervals
            for j in range(i + 1, n):
                if intervals[j][0] <= end:                # overlap found
                    end = max(end, intervals[j][1])       # extend end to the farthest overlap
                else:
                    break                                 # stop if no overlap
            ans.append([start, end])                      # add merged interval to answer
        return ans
