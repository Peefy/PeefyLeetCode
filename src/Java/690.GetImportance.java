
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Employee {
    // It's the unique id of each node;
    // unique id of this employee
    public int id;
    // the importance value of this employee
    public int importance;
    // the id of direct subordinates
    public List<Integer> subordinates;
};

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
