SELECT
    name, 
        CASE
            when died is not null
            then died - born
            else 2022 - born
        end as age
FROM
    people as p 
WHERE p.born >= 1900 and p.died is null
ORDER BY age DESC, name ASC
LIMIT 20;