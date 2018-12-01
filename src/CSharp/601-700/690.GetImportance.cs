

using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.GetImportance
{

    public class Employee
    {
        // It's the unique id of each node;
        // unique id of this employee
        public int id;
        // the importance value of this employee
        public int importance;
        // the id of direct subordinates
        public List<int> subordinates;
    };

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
}
