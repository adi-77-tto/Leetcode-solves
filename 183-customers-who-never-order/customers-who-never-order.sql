SELECT c.name as Customers
FROM Customers AS c LEFT JOIN Orders AS o
ON c.id=o.customerId 
where o.id IS NULL;