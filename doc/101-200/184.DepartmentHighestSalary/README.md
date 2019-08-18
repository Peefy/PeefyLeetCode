
# problem 184 : DepartmentHighestSalary

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/184.DepartmentHighestSalary/problem.png"/>

## SQL Solution

```sql

SELECT
    Department.name AS 'Department',
    Employee.name AS 'Employee',
    Salary
FROM
    Employee
        JOIN
    Department ON Employee.DepartmentId = Department.Id
WHERE
    (Employee.DepartmentId , Salary) IN
    (   SELECT
            DepartmentId, MAX(Salary)
        FROM
            Employee
        GROUP BY DepartmentId
	)
;

```

