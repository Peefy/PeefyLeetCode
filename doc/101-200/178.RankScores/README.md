
# problem 178 : RankScores

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/178.RankScores/problem.png"/>

## DQL Solution

```sql

select 
    a.Score as score , 
    (select count(distinct b.Score) from Scores b where b.Score >=a.Score) as rank
from Scores a order by Score DESC;

```
