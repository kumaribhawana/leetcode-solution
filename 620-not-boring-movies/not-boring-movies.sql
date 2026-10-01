# Write your MySQL query statement below
SELECT*
FROM Cinema
WHERE id%2 AND description != 'boring '
ORDER by rating desc