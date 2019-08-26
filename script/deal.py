
import re

filenames = ['README_CLASSIFICATION.md', 'README_ORDER.md', 'README_TAG.md']

for filename in filenames:
    wlines = []
    with open(filename) as r:
        lines = r.readlines()
        for line in lines:
            l = line.replace('  [', ' [')
            wlines.append(l)

    with open(filename, 'w') as w:
        w.writelines(wlines)

print('deal ok')
