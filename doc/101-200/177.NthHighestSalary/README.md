
# problem 177 : NthHighestSalary

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/177.NthHighestSalary/problem.png"/>

## SQL Solution

```sql

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE M INT ;
set M=N-1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct Salary from Employee order by Salary desc limit 1 OFFSET M
  );
END

```
