#coding:utf8
from copy import deepcopy as clone
from spider import *

class group:
	def __init__(self, color='A', cnt=0):
		self.color=color
		self.cnt=cnt
	def __repr__(self):
		return "%s%d" % (self.color, self.cnt)
	def __len__(self):
		return self.cnt
		
class grouplist:
	def __init__(self, gs=None):
		if gs is None:
			gs=[]
		assert type(gs) is list
		self.groups=gs
		
	def __add__(self, y):
		if isinstance(y, group):
			return grouplist(self.groups+[y])
		elif isinstance(y, grouplist):
			return grouplist(self.groups+y.groups)
		elif type(y) is list:
			return grouplist(self.groups+y)
		else:
			raise Exception('can not add')
		
	def __iadd__(self, y):
		if isinstance(y, group):
			self.groups.append(y)
		elif isinstance(y, grouplist):
			self.groups.extend(y.groups)
		elif type(y) is list:
			self.groups.extend(y)
		else:
			raise Exception('can not iadd')
		return self
		
	def __repr__(self):
		return '_'.join([str(i) for i in self.groups])
		
	def __len__(self):
		return len(self.groups)
		
	def __lt__(self, r):
		if len(self)!=len(r):
			return len(self)<len(r)
		else:
			return str(self)<str(r)
	
	def __le__(self, r):
		if len(self)!=len(r):
			return len(self)<len(r)
		else:
			return str(self)<=str(r)
			
	def __gt__(self, r):
		if len(self)!=len(r):
			return len(self)>len(r)
		else:
			return str(self)>str(r)
	
	def __ge__(self, r):
		if len(self)!=len(r):
			return len(self)>len(r)
		else:
			return str(self)>=str(r)
			
	def __eq__(self, r):
		if len(self)!=len(r):
			return False
		else:
			return str(self)==str(r)
		
	def __ne__(self, r):
		if len(self)!=len(r):
			return True
		else:
			return str(self)!=str(r)
			
	def __cmp__(self, r):
		return self<r
		
	def __hash__(self):
		return hash(str(self))
		
	def __getitem__(self, i):
		return self.groups[i]
		
	def __getslice__(self, i, j):
		assert isinstance(i, int)
		assert isinstance(j, int)
		return grouplist(self.groups[i:j])
		
	def insert(self, i, g):
		assert isinstance(i, int)
		assert isinstance(g, group)
		return self.groups.insert(i, g)
		
	def append(self, g):
		assert isinstance(g, group)
		return self.groups.append(g)
		
def B(g):
	assert g.cnt>=1
	# print 'B add', 2 if g.cnt==1 else 1, 'for', g
	return 2 if g.cnt==1 else 1
	
def B2(g):
	assert g.cnt>=2
	# print 'B2 add', 1 if g.cnt==2 else 0, 'for', g
	return 1 if g.cnt==2 else 0
	
mf={}
mg={}
sf={}
sg={}

def F(gs, layer=0):
	# print 'F layer=', layer
	if gs in mf:
		# print 'find1:', gs, '=', mf[gs]
		return mf[gs]
	l=len(gs)
	r=0
	if l==1:
		C=gs[0]
		r=B(C)
	elif l==2:
		L=gs[0]
		R=gs[1]
		r=B(L)+B(R)
	else:
		L=gs[0]
		R=gs[-1]
		if L.color==R.color:
			C=gs[1:-1]
			r=B2(group(L.color, (L.cnt+R.cnt)))+F(C)
		else:
			LC=gs[:-1]
			CR=gs[1:]
			x=B(L)+F(CR, layer+1)
			y=F(LC, layer+1)+B(R)
			r=min(x, y)
	if not gs in mf:
		mf[gs]=r
	# print 'result1:', gs, '=', r
	return r

def G(gs, layer=0):
	# print gs
	# print 'G layer=', layer
	if gs in mg:
		# print 'find2:', gs, '=', mg[gs]
		return mg[gs]
	l=len(gs)
	r=0
	if l==0:
		r=0
		sg[gs]='all explode'
	elif l<=3:
		r=F(gs)
		sg[gs]='F(%s)=%d' % (gs, r)
	else:
		r=F(gs)
		flag=['F(%s)=%d' % (gs, r)]
		n=l
		for radius in range(1, n-1+1):	
			for p in range(1, n-radius+1+1):
				# print 'n=', n, 'p=', p
				C=gs[p-1:p-1+radius]
				# print 'C=', C
				L=gs[:p-1]
				# print 'L=', L
				R=gs[p-1+radius:]
				# print 'R=', R
				
				oL=clone(L)
				oR=clone(R)
				#merge L, R
				while len(L)>0 and len(R)>0 and L[-1].color==R[0].color and L[-1].cnt+R[0].cnt>=3:
					# print 'enter while:\t', L, R
					del L.groups[-1]
					del R.groups[0]
					# print 'after del:\t', L, R
				if len(L)>0 and len(R)>0 and L[-1].color==R[0].color and L[-1].cnt+R[0].cnt<3:
					# print 'enter if:\t', L, R
					# L.groups[-1].cnt+=R.groups[0].cnt
					# del R.groups[0]
					g=R.groups[0]
					tmp=group(g.color, g.cnt)
					tmp.cnt+=L.groups[-1].cnt
					del L.groups[-1]
					del R.groups[0]
					L.groups.append(tmp)
					# print 'after del:\t', L, R
				U=L+R
				# print 'U=', U
				x=F(C)+G(U, layer+1)
				if x<r:
					r=x
					flag=['L(%s)+F(%s)+R(%s) ~ L(%s)+R(%s) => F(%s)+G(%s)=%d' % (oL, C, oR, L, R, C, U, r)]
				elif x==r:
					flag.append('L(%s)+F(%s)+R(%s) ~ L(%s)+R(%s) => F(%s)+G(%s)=%d' % (oL, C, oR, L, R, C, U, r))
		sg[gs]=flag
	if not gs in mg:
		mg[gs]=r
	# print 'result2:', gs, '=', r
	return r
	
def solve(s):
	# print s
	gl=[]
	l=len(s)
	g=group()
	for i, c in enumerate(s):
		if g.cnt==0:
			g.color=c
			g.cnt=1
		if i+1<l:
			if s[i+1]==c:
				g.cnt+=1
			else:
				gl.append(g)
				g=group()
		else:
			gl.append(g)
	gs=grouplist(gl)
	time_seed(0)
	print gs, G(gs)
	print time_gap(0, 'time')
	# print gs
	# print sg[gs]
	
def main():
	for i, s in enumerate(open('data.txt').read().split()):
		if i%2==1: solve(s) 
	
def test_group_list():
	gs=grouplist()
	gs1=grouplist()
	gs2=grouplist()
	gs.groups.extend([group('A', 3), group('A', 1), group('A', 1)])
	# gs+=[group('A', 1), group('A', 1), group('B', 1)]
	gs1.groups.extend([group('A', 2), group('A', 1)])
	gs2.groups.extend([group('A', 2), group('A', 1)])
	l=[gs, gs1, gs2]
	print l
	l.sort()
	print l
	
	m={}
	m[gs]=1
	m[gs1]=2
	gs2+=group('X', 100)
	print gs2
	m[gs2]=3
	print m
	print m.keys()[0][0].cnt
	print gs
	print gs[0]
	print gs[0].color
	print set([gs, gs1, gs2])
	print gs+gs1
	print gs
	print gs1
	
def test_group_list2():
	a=grouplist()
	b=grouplist()
	a.groups.extend([group('A', 3), group('A', 1), group('A', 1)])
	# a+=[group('A', 1), group('A', 1), group('B', 1)]
	b.groups.extend([group('A', 2), group('A', 1)])
	l=[a, b]
	print l
	l.sort()
	print l
	print a
	print b
	print a+b
	print b+a
	print a
	print b
	a+=b
	print a
	print b
	
if __name__=='__main__':
	main()
	# test_group_list()
	# test_group_list2()
	# print
	# for i in mf:
		# print mf[i], i
	# print 
	# for i in mg:
		# print mg[i], i
	# print 
	# for i in sg:
		# print i, ':\n\t', sg[i]