
# problem 180 : ConsecutiveNumbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/180.ConsecutiveNumbers/problem.png"/>

## SQL Solution

```sql

SELECT DISTINCT
    l1.Num AS ConsecutiveNums
FROM
    Logs l1,
    Logs l2,
    Logs l3
WHERE
    l1.Id = l2.Id - 1
    AND l2.Id = l3.Id - 1
    AND l1.Num = l2.Num
    AND l2.Num = l3.Num

```




