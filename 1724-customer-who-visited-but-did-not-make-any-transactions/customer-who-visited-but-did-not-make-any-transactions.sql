# Write your MySQL query statement below
select x.customer_id, count(x.visit_id) as count_no_trans from Visits x left join Transactions y
on x.visit_id = y.visit_id where transaction_id is null group by x.customer_id;