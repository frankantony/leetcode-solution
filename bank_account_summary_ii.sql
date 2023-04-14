# Write your MySQL query statement below
select u.NAME, sum(t.amount) as BALANCE
from Users u, Transactions t
where u.account = t.account
group by u.account
having BALANCE > 10000
