/* Write your MySQL query statement below */
SELECT DISTINCT P.product_id, P.product_name
FROM Product AS P
LEFT JOIN Sales AS S
ON P.product_id = S.product_id
WHERE S.sale_date BETWEEN '2019-01-01' AND '2019-03-31'
AND P.product_id NOT IN (SELECT product_id 
FROM Sales
WHERE sale_date > '2019-03-31' or sale_date < '2019-01-01')