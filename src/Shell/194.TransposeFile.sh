
line=$(awk 'END{print NF}' file.txt)

for ((i=1; i<=${line}; i++)); do
	col_content=$(cut -f $i -d " " file.txt)
	echo $col_content
done


