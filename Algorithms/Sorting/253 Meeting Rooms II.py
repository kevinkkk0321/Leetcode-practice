class Solution(object):
    def minMeetingRooms(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        if not intervals:
            return 0

        start = sorted([i[0] for i in intervals])
        end = sorted([i[1] for i in intervals])
        print(start)
        print(end)
        room = 0
        j = 0

        for i in range(len(start)):
            if start[i]<end[j]:
                room += 1
            else:
                j += 1

        return room

        
