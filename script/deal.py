
filename = 'README_CLASSIFICATION.md'

lines = []
wlines = []

with open(filename) as r:
    lines = lines + r.readlines()
    for line in lines:
        l = line.replace('####', '')
        wlines.append(l)

with open(filename, 'w') as w:
    w.writelines(wlines)

