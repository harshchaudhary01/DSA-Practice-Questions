# Write your MySQL query statement below
select x.firstName, x.lastName, y.city, y.state from Person x left join Address y on x.personId = y.personId;