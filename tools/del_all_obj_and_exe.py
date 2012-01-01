#coding:utf8

from libspider import *

ignores='tools .svn'.split()

for root, dirs, files in os.walk('..'):
	s=root[3:]
	if s.startswith('tools') or s.startswith('.svn')
	print root

def del_all(dp):
	for fp in listfiles(dp):
		if fp.endswith('.exe') or fp.endswith('.obj'): rm(fp)
		
		
del_all('..')