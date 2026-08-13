# Write your MySQL query statement below
select employee_id
from Employees
WHERE employee_id NOT IN (
    SELECT employee_id 
    FROM Salaries
)

UNION

SELECT employee_id
FROM Salaries
WHERE employee_id NOT IN (
    SELECT employee_id
    from Employees
)

order by employee_id asc;