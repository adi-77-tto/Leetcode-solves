# Write your MySQL query statement below
select w1.id as Id from Weather w1 JOIN Weather w2 On
 Datediff(w1.recordDate,w2.recordDate)=1
 where w1.temperature > w2.temperature;