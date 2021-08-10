# Write your MySQL query statement below
delete q from Person as p, Person as q
where p.Email = q.Email and p.Id < q.Id