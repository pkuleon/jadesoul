#coding:utf8

def oppo(s):
	if s=='(': return ')'
	if s==')': return '('
	if s=='[': return ']'
	if s==']': return '['
	
def bu(s):
	if s=='(' or s=='[': return s+oppo(s)
	if s==')' or s==']': return oppo(s)+s
	
'''

A => (A)
A => [A]
A,B => AB

Sij=Ai...Aj

1<=i<=j<=N

S[i, j]=1, (i=j)
S[i, j]=0, (i>j)

(i<j)
S[i, j]=min { for k=i to j-1: S[i, k]+S[k+1, j] } U { S[i+1, j-1], AiAj=() or [] }
I[i, j]=k or -1
'''

from numpy import *

def deal(s):
	N=len(s)
	print 'N=', N
	s=' '+s
	N1=N+1
	S=zeros((N1, N1), int)
	for i in range(N1):
		for j in range(N1):
			if i==0 or j==0: v=-1
			elif i==j: v=1
			elif i>j: v=0
			else: v=1000
			S[i, j]=v
	I=zeros((N1, N1), int)	
	for r in range(2, N+1):
		for i in range(1, (N-r+1)+1):
			j=i+r-1
			min=1000
			for k in range(i, j):
				x=S[i, k]+S[k+1, j]
				if x<min:
					min=x
					I[i, j]=k
			if (s[i]=='(' and s[j]==')') or (s[i]=='[' and s[j]==']'):
				x=S[i+1, j-1]
				if x<=min:
					min=x
					I[i, j]=-1
			S[i, j]=min
	print track(s, S, I, N, 1, N)
	
def track(s, S, I, N, i, j):
	if i>j: return ''
	if i==j: return bu(s[i])
	k=I[i, j]
	if k==-1:
		return s[i]+track(s, S, I, N, i+1, j-1)+s[j]
	else:
		return track(s, S, I, N, i, k)+track(s, S, I, N, k+1, j)
			
	
def main():
	for s in file('data.txt'):
		s=s.strip()
		print 's=', s
		deal(s)
		
if __name__=='__main__':
	main()