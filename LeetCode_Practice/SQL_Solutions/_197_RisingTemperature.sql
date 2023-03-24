/* Write your MySQL query statement below */
SELECT A.id
FROM Weather AS A, Weather AS B 
WHERE (A.temperature > B.temperature) AND DATEDIFF(A.recordDate, B.recordDate) = 1;