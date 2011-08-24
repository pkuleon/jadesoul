#coding:utf8
from numpy import *

p=[10, 100, 5, 50]
n=len(p)-1

m=zeros((n+1, n+1), int)
s=zeros((n+1, n+1), int)

def multiply(i, k, j):
	return p[i-1]*p[k]*p[j]
	
def MatrixChain(p, n):
	for r in range(2, n+1):
		print 'r=', r
		for i in range(1, n-r+2):
			j=i+r-1
			m[i, j]=m[i+1, j]+multiply(i, i, j)
			s[i, j]=i
			print '\ti=', i, 'j=', j
			for k in range(i+1, j):
				print '\t\tk=', k
				t=m[i, k]+m[k+1, j]+multiply(i, k, j)
				print '\t\t', m[i, j], t
				if t<m[i, j]:
					m[i, j]=t
					s[i, j]=k
					print '\t\tupdate', i, j, t
MatrixChain(p, n)

def dump(s):
	for i in s:
		for j in i:
			print j,'\t',
		print
		
print
print m[1, n]
print
dump(s)
print
dump(m)



