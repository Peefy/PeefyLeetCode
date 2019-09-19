
# problem 193 : ShellValidPhoneNumber

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/193.ShellValidPhoneNumber/problem.png"/>

## Bash Solution

```shell

grep -P '^(\d{3}-|\(\d{3}\) )\d{3}-\d{4}$' file.txt

```
