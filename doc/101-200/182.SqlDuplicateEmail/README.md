
# problem 182 : SqlDuplicateEmail

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/182.SqlDuplicateEmail/problem.png"/>

## MySQL

```sql

select Email
from Person
group by Email
having count(Email) > 1;

```
