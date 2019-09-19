
select Name as Customers
from Customers c 
left join Orders o
on c.Id=o.CustomerId
where o.CustomerId is null;

select Name as Customers from Customers where Id not in(
select Customers.Id from Customers , Orders where Customers.Id = Orders.CustomerId
group by CustomerId);
