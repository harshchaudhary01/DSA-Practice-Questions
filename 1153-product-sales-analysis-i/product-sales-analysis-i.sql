# Write your MySQL query statement below
select y.product_name, x.year, x.price from Sales x inner join Product y where x.product_id = y.product_id;