#coding:utf8

from libspider import *

ignores='tools .svn'.split()

def del_all(dp):
	for fp in listfiles(dp):
		if fp.endswith('.exe') or fp.endswith('.obj'): 
			print fp
			rm(fp)
	for dn in os.listdir(dp):
		if dn in ignores: continue
		dp2=join(dp, dn)
		if isdir(dp2): del_all(dp2)

del_all('..')
sleep(3)