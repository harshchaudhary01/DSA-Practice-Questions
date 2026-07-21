# Write your MySQL query statement below
select x.name as Customers from Customers x left join Orders y on x.id = y.customerId where y.customerId is NULL;