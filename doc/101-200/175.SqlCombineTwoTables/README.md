
# problem 175 : SqlCombineTwoTables

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/175.SqlCombineTwoTables/problem.png"/>

## MySQL

```mysql

select FirstName, LastName, City, State
from Person left join Address
on Person.PersonId = Address.PersonId;

```
