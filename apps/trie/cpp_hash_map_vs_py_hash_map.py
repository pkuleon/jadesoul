#coding:utf8

from spider import read_file, time_seed, time_gap

time_seed()
fn='words_huge.txt'
#~ fn='words_45000.txt'
f=open(fn)
l=f.readlines()
f.close()
print time_gap('read')

m={}
for s in l:
	if not s: break
	m[s]=1
print time_gap('build')

for s in l:
	if s in m:
		a=1
print time_gap('test')		