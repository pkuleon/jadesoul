import os
import time
a=time.time()

for root, dirs, files in os.walk('.'):
	depth=root.count('\\')
	prefix=' '*depth
	for fn in files:
		pass
		# print prefix, '-', fn, os.path.getsize(os.path.join(root, fn))
	for dn in dirs:
		# print prefix, '+', dn
		pass
print time.time()-a
raw_input()

# 2230ms