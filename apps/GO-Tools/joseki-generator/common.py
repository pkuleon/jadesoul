#coding:utf8

import os, sys, re
import socket, urllib, urllib2
import datetime, time
import random, json, string
import math
import getopt
import shutil

from sys import argv, exit
from os import listdir, system as run, getcwd as pwd
from os.path import split as splitdir, splitext, join, dirname, isfile, islink, isdir, exists
from re import compile, sub as rsub
from random import sample as randsample, shuffle, randint
from time import sleep

#args
argc=len(argv)

#filesystem utils
def listall(root='.'):
	return [join(root, i) for i in listdir(root)]
	
def listfiles(root='.'):
	return filter(isfile, listall(root))
	
def listdirs(root='.'):
	return filter(isdir, listall(root))
	
def listlinks(root='.'):
	return filter(islink, listall(root))
	
def split(fullpath):
	dirpath, filename=splitdir(fullpath)
	name, ext=splitext(filename)
	return fullpath, dirpath, filename, name, ext
	# return fp, dp, fn, name, ext

def fread(path):
	f=open(path)
	s=f.read()
	f.close()
	return s
	
def fwrite(s, path, append=False):
	f=open(path, 'a' if append else 'w')
	f.write(s)
	f.close()
	
def fsize(fp):
	return os.path.getsize(fp)

def fatime(fp):
	return os.path.getatime(fp)
	
def fctime(fp):
	return os.path.getctime(fp)
	
def fmtime(fp):
	return os.path.getmtime(fp)
	
def seconds2datetime(seconds):
	g=time.gmtime(seconds+8*3600)
	return datetime.datetime(g.tm_year, g.tm_mon, g.tm_mday, g.tm_hour, g.tm_min, g.tm_sec)

def cp(src, dst):
	if src==dst: return
	if not exists(src): raise Exception('src not exists')
	if isfile(src):
		if isfile(dst):
			# print 'override file:', src, '->', dst
			# print '.',
			shutil.copy2(src, dst)
			return
		elif isdir(dst):
			# print 'copy file into dir:', src, '->', dst
			print '.',
			shutil.copy2(src, dst)
			return
		elif not exists(dst):
			# print 'copy file:', src, '->', dst
			# print '.',
			shutil.copy2(src, dst)
			return
		else: raise Exception('bad dst')
	if not isdir(src) or src=='/': raise Exception('bad src')
	
	spth, sname=splitdir(src)
	if sname=='': spth, sname=splitdir(spth)
	if sname=='': raise Exception('bad sname')
	if not exists(dst):
		# print 'makedirs:', dst
		# print '@',
		os.makedirs(dst)
	elif isdir(dst):
		dst=join(dst, sname)
		if not exists(dst):
			# print 'mkdir:', dst
			# print '#',
			os.mkdir(dst)
		elif isdir(dst):
			# print 'dir exists:', dst
			pass
		else:
			raise Exception('bad dst2')
	else:
		raise Exception('src is dir but dst is file or link')
		
	for fp in listall(src):
		cp(fp, dst)
	
def mv(src, dst):
	if src==dst: return
	if not exists(src): raise Exception('src not exists')
	spth, sname=splitdir(src)
	if sname=='': spth, sname=splitdir(spth)
	if sname=='': raise Exception('bad src')
	
	dpth, dname=splitdir(dst)
	if dname=='': dpth, dname=splitdir(dpth)
	
	if spth==dpth:
		# print 'rename:', sname, dname
		os.rename(src, dst)
	else:
		cp(src, dst)
		rm(src)
		
def rm(dp):
	if not exists(dp): return
	if isfile(dp):
		# print 'del file:', dp
		os.remove(dp)
		return
	elif islink(dp):
		# print 'del link:', dp
		os.remove(dp)
		return
	elif not isdir(dp): raise Exception('bad dp')
	for fp in listall(dp):
		rm(fp)
	# print 'rm dir:', dp
	sleep(0.01)
	os.rmdir(dp)
	
def md(dp):
	if exists(dp): raise Exception('already exists %s' % dp)
	os.mkdir(dp)
	
def mds(dp):
	os.makedirs(dp)
	
def rlistfiles(pth):
	all=[]
	for root, dirs, files in os.walk(pth):
		for rp in files:
			fp=join(root, rp)
			all.append(fp)
	return all
	
def rlistdirs(pth):
	all=[]
	for root, dirs, files in os.walk(pth):
		all.append(root)
	return all
	
def clonedirs(src, dst):
	mds(dst)
	for root, dirs, files in os.walk(src):
		if not dirs: continue
		assert root.startswith(src)
		rp=root[len(src):]
		if rp and (rp[0]=='\\' or rp[0]=='/'): rp=rp[1:]
		rp=join(dst, rp)
		for d in dirs:
			dp=join(rp, d)
			print dp
			md(dp)
			
#time utils
global_time_seeds={}

def time_init(seed=0):
	global global_time_seeds
	global_time_seeds[seed]=time.time()

def time_gap(msg=None, seed=0, reset=True):
	global global_time_seeds
	now=time.time()
	if not seed in global_time_seeds:
		time_init(seed)
		return 0
	else:
		last=global_time_seeds[seed]
		if reset:
			global_time_seeds[seed]=now
		if not msg:
			return '%ds' % (now-last)
		else:
			return '%s: %ds' % (msg, now-last)
		
def time_diff(seed1, seed2):
	global global_time_seeds
	return global_time_seeds[seed2]-global_time_seeds[seed1]
	
#other 
def format_tab(s):
	ls=s.split('\n')
	ls=[l for l in ls if len(l.strip())>0]
	for i, l in enumerate(ls):
		l=l.strip()
		if len(l)<10: ls[i-1]+='\t'+l; ls[i]=''
	ls=[l for l in ls if len(l.strip())>0]
	print  '\n'.join(['\t'.join(l.split()) for l in ls])
	
#sort dict
def vsorted(d):
	return sorted(d.items(), key=lambda x: x[1])

def rvsorted(d):
	return sorted(d.items(), key=lambda x: x[1],  reverse=True)
	
def ksorted(d):
	return sorted(d.items(), key=lambda x: x[0])

def rksorted(d):
	return sorted(d.items(), key=lambda x: x[0],  reverse=True)

#type detect
def is_dict(dct):
	return type(dct) is dict

def is_list(lst):
	return type(lst) is list

def is_set(st):
	return type(st) is set

def is_tuple(tpl):
	return type(tpl) is tuple
	
def is_float(num):
	return type(num) is float

def is_int(num):
	return type(num) is int

def is_num(num):
	return is_float(num) or is_int(num)
	
def is_str(s):
	return type(s) is str
	
def is_unicode(s):
	return type(s) is unicode
	
#for deep copy and uicode clone
from copy import deepcopy as clone

def unicode_clone_obj(obj, encoding='utf8'):
	'''
	deep copy an object and translate all str into unicode
	'''
	if is_str(obj):
		return obj.decode(encoding)
	elif is_unicode(obj) or is_num(obj):
		return obj
	elif is_dict(obj):
		new={}
		for k in obj:
			v=unicode_clone_obj(obj[k], encoding)
			k=unicode_clone_obj(k, encoding)
			new[k]=v
		return new
	elif is_list(obj):
		return [unicode_clone_obj(i, encoding) for i in obj]
	elif is_tuple(obj):
		return tuple([unicode_clone_obj(i, encoding) for i in obj])
	elif is_set(obj):
		return set([unicode_clone_obj(i, encoding) for i in obj])
		
#alias name
uclone=unicode_clone_obj
	
#for dump
def dump(obj, prefix=''):
	if is_str(obj):
		print prefix, 'string(%d)\t:\t' % len(obj), obj
	elif is_float(obj):
		print prefix, 'float\t:\t', obj
	elif is_int(obj):
		print prefix, 'int\t:\t', obj
	elif is_unicode(obj):
		print prefix, 'unicode(%d)\t:\t' % len(obj), obj
	elif is_list(obj):
		print prefix, '['
		for ind, i in enumerate(obj):
			dump(i, prefix+'\t'+str(ind)+'\t')
		print prefix, ']'
	elif is_tuple(obj):
		print prefix, '('
		for ind, i in enumerate(obj):
			dump(i, prefix+'\t'+str(ind)+'\t')
		print prefix, ')'
	elif is_set(obj):
		print prefix, '<'
		for ind, i in enumerate(obj):
			dump(i, prefix+'\t'+str(ind)+'\t')
		print prefix, '>'
	
	elif is_dict(obj):
		print prefix, '{'
		ind=0
		for k, v in obj.items():
			dump(k, prefix+'\tk'+str(ind)+'\t')
			# print prefix, '\t\t=>'
			dump(v, prefix+'\tv'+str(ind)+'\t')
			print prefix
			ind+=1
		print prefix, '}'
	else:
		print 'not a normal type:', type(obj)
		print prefix, obj
		
#md5
import hashlib 
def md5(t):
	return hashlib.md5(t).hexdigest()
	
#utils
def unique(lst):
	return list(set(lst))
	
def reversed(lst):
	return lst[::-1]

#unicode and bytes
import struct

def unicode2bytes(us, outstr=True):
	bytes=[]
	for i in us:
		code=ord(i)
		assert code<65536
		if code<256:
			bytes.append(struct.pack('B', 0))
			bytes.append(struct.pack('B', code))
		else:
			high=code / 256
			low=code % 256
			# print high, low
			bytes.append(struct.pack('B', high))
			bytes.append(struct.pack('B', low))
	return ''.join(bytes) if outstr else bytes
			
def bytes2unicode(bytes, outstr=True):
	us=[]
	for i in range(len(bytes)/2):
		high=struct.unpack('B', bytes[i*2])[0]
		low=struct.unpack('B', bytes[i*2+1])[0]
		s='u"\\u%.2x%.2x"' % (high, low)
		us.append(eval(s))
	return ''.join(us) if outstr else us
	
def freqdist(lst):
	d={}
	for i in lst:
		if not i in d:
			d[i]=1
		else:
			d[i]+=1
	return d
	
def keydist(dct):
	d={}
	for k in dct:
		v=dct[k]
		if not v in d:
			d[v]=[]
		d[v].append(k)
	return d
	
def now():
	return datetime.datetime.now()
	
def run_cmds(cmds):
	for cmd in cmds.strip().split('\n'):
		print now(), 'run cmd:', cmd
		run(cmd)

def smap_dict(s, domain):
	dct={}
	for i in s.split():
		if i in domain:
			dct[i]=domain[i]
	return dct
	
if __name__=='__main__':
	pass
	

