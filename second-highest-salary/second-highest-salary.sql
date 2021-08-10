Select Max(Salary) as SecondHighestSalary from Employee 
where salary < (Select Max(Salary) from Employee);