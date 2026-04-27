# Write your MySQL query statement below
update salary
SET sex = CASE
    when sex = 'm' THEN 'f'
    ELSE 'm'
END;