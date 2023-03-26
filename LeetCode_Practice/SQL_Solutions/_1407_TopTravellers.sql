/* Write your MySQL query statement below */
SELECT U.name, 
SUM(CASE WHEN U.id = R.user_id 
  THEN distance
  ELSE 0
  END
) AS travelled_distance
FROM Users U
LEFT JOIN Rides R
ON U.id = R.user_id
GROUP BY U.id
ORDER BY travelled_distance DESC, U.name ASC;