
# problem 196 : SqlDeleteDuplicateEmail

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/196.SqlDeleteDuplicateEmail/problem.png"/>

## MySQL

```sql

DELETE P1 
FROM Person P1, Person P2
WHERE P1.Email = P2.Email   -- 利用where进行自连接
AND P1.Id > P2.Id   -- 选择Id较大的行

```
