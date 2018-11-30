
# problem 690 : GetImportance

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/690.GetImportance/problem.png"/>

c#为最优解，利用哈希映射建立查表加快搜索，比for循环搜索快，虽然空间复杂度增大

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    Employee* getemfromid(vector<Employee*> employees, int id){
        for (auto em : employees)
            if (em->id == id)
                return em;
        return nullptr;
    }

    int getImportance(vector<Employee*> employees, int id) {
        auto root = getemfromid(employees, id);
        int r = root->importance;
        for (auto emid : root->subordinates)
            r += getImportance(employees, emid);
        return r;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        int importance = 0;
        public int GetImportance(List<Employee> employees, int id)
        {
            var map = new Dictionary<int, Employee>();
            foreach (var e in employees)
            {
                map.Add(e.id, e);
            }
            Dfs(map[id], map);
            return importance;
        }
        public void Dfs(Employee e, Dictionary<int, Employee> map)
        {
            importance += e.importance;
            foreach (var i in e.subordinates)
            {
                Dfs(map[i], map);
            }
        }
    }

```

## Java Solution

```java

class Solution {
    Employee getemfromid(List<Employee> employees, int id){
        for (Employee em : employees)
            if (em.id == id)
                return em;
        return null;
    }

    public int getImportance(List<Employee> employees, int id) {
        Employee root = getemfromid(employees, id);
        int r = root.importance;
        for (int emid : root.subordinates)
            r += getImportance(employees, emid);
        return r;
    }
}

```

## Python Solution

```python

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

```





