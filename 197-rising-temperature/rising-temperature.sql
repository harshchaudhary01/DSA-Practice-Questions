# Write your MySQL query statement below
select today.id from Weather today inner join Weather yesterday on
datediff(today.recordDate, yesterday.recordDate)=1
AND today.temperature > yesterday.temperature;