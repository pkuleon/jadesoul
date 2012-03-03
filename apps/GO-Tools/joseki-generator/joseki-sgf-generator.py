#coding:utf8

from common import *

in_dir='input'
filter_dir='filtered'
out_dir='output'

def remove_comment_and_node_name(s):
	l=len(s)
	r=[]
	match=0
	start=0
	end=0
	i=0
	while i<l:
		if match==0:
			if s[i] in 'cCnN' and s[i+1]=='[':
				match=1
				end=i
				r.append(s[start:end])
			else:
				if i==l-1:
					end=l
					r.append(s[start:end])
					break
		else:
			if s[i]==']':
				match=0
				start=i+1
		i+=1
	return ''.join(r)
	
def do_filter():
	for name in 'tou-chai-san.sgf'.split():
	# for name in listdir(in_dir):
		print name
		in_file=join(in_dir, name)
		s=fread(in_file).decode('utf8')
		print len(s)
		s=remove_comment_and_node_name(s)
		print len(s)
		print
		# print s
		fwrite(s.encode('utf8'), join(filter_dir, name))
		
# scan from position i in string s for a point, l is len of s
# return the point color c, position p, and new i
def scan_a_point(s, i, l):
	t=s[i:i+100]
	j=t.find(';B[')
	if j==-1:
		j=t.find(';W[')
		if j==-1: return (0, 0, 0)
		c='W'
	else: c='B'
	i+=j+3
	t=s[i:i+5]
	j=t.find(']')
	assert j!=-1
	p=s[i:i+j].lower()
	assert len(p)==2 or p==''
	i+=j+1
	return c, p, i
	
def scan_point_list(s):
	l=len(s)
	i=0
	ps=[]
	c, p, i=scan_a_point(s, i, l)
	while c and i<l:
		ps.append(p)
		c, p, i=scan_a_point(s, i, l)
	return ps
		
id=0

def generate_a_sgf(moves, id):
	fp=join(out_dir, 'liner_%d.sgf' % id)
	b=1
	ms=[]
	for p in moves:
		if b==1:
			ms.append(';B['+p+']')
			b=0
		else:
			ms.append(';W['+p+']')
			b=1
	s='(;GM[1]AP[Python:2.7]SZ[19]\n(%s))\n' % ''.join(ms)
	fwrite(s, fp)
	
def travel_tree_and_gen_liner_sgf(parent, moves=[]):
	global id
	for p in parent:
		moves.append(p)
		child=parent[p]
		if len(child)==0:
			l=len(moves)
			if id%100==0: print id, l
			if l>10 and l<=30:
				id+=1
				generate_a_sgf(moves, id)
		else:
			travel_tree_and_gen_liner_sgf(child, moves)
		del moves[-1]
			
	
	
r_space=compile(r'\s')
def main():
	tree={}
	# for name in 'tou-chai-san.sgf'.split():
	for name in listdir(filter_dir):
		print name
		s=fread(join(filter_dir, name)).strip()
		s=r_space.sub('', s)
		print len(s)
		i=0
		l=len(s)
		depth=0
		parents=[tree]
		while i<l:
			if s[i]=='(':
				depth+=1
				# print tree
				parent=parents[-1]
				i+=1
				line=[]
				t=s[i:]
				j=t.find('(')
				k=t.find(')')
				if j==-1 and k!=-1:
					j=k
				elif j!=-1 and k==-1:
					pass
				elif j!=-1 and k!=-1:
					if k<j: j=k
				else: 
					print 'no ) or (', t, k, j
					raw_input()
				u=s[i:i+j]
				ps=scan_point_list(u)
				for p in ps:
					if not p in parent:
						parent[p]={}
					parent=parent[p]
				parents.append(parent)
				i+=j
				# print depth, '+', i, '/', l
			elif s[i]==')':
				depth-=1
				i+=1
				# print depth, '-', i, '/', l
				if depth==0:
					assert i==l
					print 'finished:', repr(s[i:])
					break
				del parents[-1]
			else:
				print 'base s[i]=', s[i]
				print s[i:i+20]
				print repr(s[i:i+20])
				raw_input()
		print s[i:]
	
	travel_tree_and_gen_liner_sgf(tree)
main()
	