# Write your MySQL query statement below
SELECT s.customer_id, COUNT(customer_id) AS count_no_trans
FROM Visits s
LEFT JOIN Transactions e
ON s.visit_id=e.visit_id
WHERE e.transaction_id IS NULL
GROUP BY  s.customer_id


