
# problem 181 : SqlManagerMoreThanEmployee

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/181.SqlManagerMoreThanEmployee/problem.png"/>

## MySQL

```sql

SELECT
     a.NAME AS Employee
FROM Employee AS a JOIN Employee AS b
     ON a.ManagerId = b.Id
     AND a.Salary > b.Salary
;

```
