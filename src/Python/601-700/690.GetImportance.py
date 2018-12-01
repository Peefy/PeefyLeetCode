
# Employee info
class Employee:
    def __init__(self, id, importance, subordinates):
        # It's the unique id of each node.
        # unique id of this employee
        self.id = id
        # the importance value of this employee
        self.importance = importance
        # the id of direct subordinates
        self.subordinates = subordinates
    
class Solution:
    def getemfromid(self, employees, id):
        for em in employees:
            if em.id == id:
                return em
        return None

    def getImportance(self, employees, id):
        """
        :type employees: Employee
        :type id: int
        :rtype: int
        """      
        root = self.getemfromid(employees, id)
        r = root.importance
        for emid in root.subordinates:
            r += self.getImportance(employees, emid)
        return r

if __name__ == '__main__':
    solution = Solution()
    em1 = Employee(1, 5, [2, 3])
    em2 = Employee(2, 3, [])
    em3 = Employee(3, 3, [])
    print(solution.getImportance([em1, em2, em3], 1))
else:
    pass
