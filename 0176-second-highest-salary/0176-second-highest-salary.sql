# Write your MySQL query statement below
select  max(salary) as SecondHighestSalary from Employee where salary < (select  max(salary)    from Employee);


-- select distinct salary as  SecondHighestSalary from Employee order by salary Desc limit 1 offset 1;