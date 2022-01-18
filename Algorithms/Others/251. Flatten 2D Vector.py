class Vector2D(object):

    def __init__(self, vec):
        self.vec = vec
        self.row_ptr = 0
        self.col_ptr = 0
        self.rows = len(vec)

    def next(self):
        self.find_valid_pointers()
        val = self.vec[self.row_ptr][self.col_ptr]
        self.col_ptr += 1
        return val

    def hasNext(self):
        self.find_valid_pointers()
        if self.row_ptr >= self.rows: return False
        if self.col_ptr >= len(self.vec[self.row_ptr]): return False
        return True

    def find_valid_pointers(self):
        while self.row_ptr < self.rows and self.col_ptr >= len(self.vec[self.row_ptr]):
            self.col_ptr = 0
            self.row_ptr += 1

#     def __init__(self, vec):
#         """
#         :type vec: List[List[int]]
#         """
#         self.flatten_list = [j for sub in vec for j in sub]
#         self.ptr = -1


#     def next(self):
#         """
#         :rtype: int
#         """
#         self.ptr+=1
#         return self.flatten_list[self.ptr]


#     def hasNext(self):
#         """
#         :rtype: bool
#         """
#         if self.ptr+1<=len(self.flatten_list)-1:
#             return True
#         else:
#             return False



# Your Vector2D object will be instantiated and called as such:
# obj = Vector2D(vec)
# param_1 = obj.next()
# param_2 = obj.hasNext()
