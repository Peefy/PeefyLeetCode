
# problem 183 : SqlCustomerNotOrder

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/183.SqlCustomerNotOrder/problem.png"/>

## MySQL

```sql

select Name as Customers
from Customers c 
left join Orders o
on c.Id=o.CustomerId
where o.CustomerId is null;

```

```sql

select Name as Customers from Customers where Id not in(
select Customers.Id from Customers , Orders where Customers.Id = Orders.CustomerId
group by CustomerId);

```
