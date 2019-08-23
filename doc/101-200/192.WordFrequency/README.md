
# problem 192 : WordFrequency

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/192.WordFrequency/problem.png"/>

## Bash Solution

```bash

cat words.txt | xargs -n 1 | sort | uniq -c | sort -nr | awk '{print $2" "$1}'

```




