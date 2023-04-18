# Write your MySQL query statement below
(select u.name as results
from Users u, MovieRating mr
where u.user_id = mr.user_id
group by u.user_id
order by count(mr.rating) desc, u.name
limit 1
)

union

(select m.title as results
from Movies m, MovieRating mr
where m.movie_id = mr.movie_id and month(mr.created_at) = 2
and YEAR(mr.created_at) = 2020
group by m.movie_id
order by avg(mr.rating) desc, m.title asc limit 1
)
