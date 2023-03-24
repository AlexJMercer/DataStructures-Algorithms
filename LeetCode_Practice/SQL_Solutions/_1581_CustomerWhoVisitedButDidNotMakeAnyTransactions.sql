/* Write your MySQL query statement below */
SELECT DISTINCT A.customer_id, COUNT(A.visit_id) AS count_no_trans
FROM Visits as A
WHERE visit_id NOT IN (SELECT visit_id FROM Transactions)
GROUP BY A.customer_id;