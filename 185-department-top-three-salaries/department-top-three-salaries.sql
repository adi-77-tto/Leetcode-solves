SELECT 
    d.name AS Department,
    t.name AS Employee,
    t.salary
FROM (
    SELECT 
        e.*,
        DENSE_RANK() OVER (
            PARTITION BY e.departmentId 
            ORDER BY e.salary DESC
        ) AS rnk
    FROM Employee e
) t
JOIN Department d 
    ON t.departmentId = d.id
WHERE t.rnk <= 3;