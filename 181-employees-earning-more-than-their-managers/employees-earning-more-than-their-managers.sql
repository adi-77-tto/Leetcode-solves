select e.name as Employee
From Employee m Join Employee e
on m.id=e.managerId
where e.salary > m.salary;