# Write your MySQL query statement below
select x.name, y.bonus from Employee x left join Bonus y on x.empId = y.empId where y.bonus < 1000 or y.bonus is null;