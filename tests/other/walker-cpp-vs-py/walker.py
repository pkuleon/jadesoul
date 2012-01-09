#coding:utf8

from sys import argv, exit
from os import listdir, system as run, getcwd as pwd, makedirs as mds, mkdir as md
from os.path import split as splitdir, splitext, join, dirname, isfile, islink, isdir, exists
from os.path import getsize as fsize, getatime as fatime, getctime as fctime, getmtime as fmtime
from shutil import copy2 as cp

def walk(p, d=0):
	prefix=' '*d
	for fn in listdir(p):
		try:
			fp=join(p, fn)
			y=isdir(fp)
			# print prefix, '+' if y else '-', fn, fsize(fp) if not y else ''
			if y: walk(fp, d+1)
		except:
			pass
	
import time
a=time.time()
print a
walk('.')
b=time.time()
print b
print b-a
raw_input()


# 2174ms