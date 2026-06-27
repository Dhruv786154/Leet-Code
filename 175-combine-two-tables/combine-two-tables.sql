# Write your MySQL query statement below
select 
    firstname,
    lastname,
    city,
    state
from person 
left JOIN Address
on Person.personid = Address.personid