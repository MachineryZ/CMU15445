SELECT 
    primary_title, premiered, CAST(runtime_minutes as VARCHAR) || "(mins)"
FROM
    titles as s
WHERE genres LIKE "%Sci-Fi%"
ORDER BY runtime_minutes DESC
LIMIT 10;
