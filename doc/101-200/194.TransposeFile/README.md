
# problem 194 : TransposeFile

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/194.TransposeFile/problem.png"/>

## Bash Solution

```bash

line=$(awk 'END{print NF}' file.txt)

for ((i=1; i<=${line}; i++)); do
	col_content=$(cut -f $i -d " " file.txt)
	echo $col_content
done

```



