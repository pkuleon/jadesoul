import os
from random import randint
a='1141.cpp.exe < data.txt'
b='1141_final_min.cpp.exe < data.txt'
fn='data.txt'
S='()[]'
for i in range(1000):
	s=''.join([S[randint(0, 3)] for j in range(100)]);
	f=open(fn, 'w')
	f.write(s)
	f.close()
	x=os.system(a)
	y=os.system(b)
	if x!=y:
		f=open(fn, 'w')
		f.write(s)
		f.write(x)
		f.write(y)
		f.close()
		break
	