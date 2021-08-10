# Write your MySQL query statement below
select emp.name as Employee
from Employee emp
inner join 
Employee man
on emp.ManagerId = man.Id and  emp.Salary > man.Salary ;