select email as Email from Person 
Group by email Having count(*) > 1;