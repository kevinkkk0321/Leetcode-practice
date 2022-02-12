class Solution(object):
    def minMeetingRooms(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        if not intervals:
            return 0

        free_rooms = []
        intervals.sort(key= lambda x: x[0])
        for interval in intervals:
            if free_rooms and interval[0] >= free_rooms[0]:
                # If the new start time is greater than or equal to the exist end time,
                # means the room has been released, replace the previous time with the new ending time
                # means two intervals can use the same room
                heapq.heapreplace(free_rooms, interval[1])
            else:
                # a new room is allocated
                heapq.heappush(free_rooms, interval[1])
        return len(free_rooms)


#         start = sorted([i[0] for i in intervals])
#         end = sorted([i[1] for i in intervals])
#         print(start)
#         print(end)
#         room = 0
#         j = 0

#         for i in range(len(start)):
#             if start[i]<end[j]:
#                 room += 1
#             else:
#                 j += 1

#         return room
