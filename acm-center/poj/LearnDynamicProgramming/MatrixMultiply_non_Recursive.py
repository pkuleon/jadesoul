#coding:utf8

#非递归算法

N=3
P=[10, 100, 5, 50]

m=[[0 for j in range(N+1)] for i in range(N+1)]
s=[[None for j in range(N+1)] for i in range(N+1)]

def MatrixChain(P, n):
	for r in range(2, n):
		for i in range(1, n-r+1):
			j=i+r-1
			m[i][j]=m[i+1][j]+P[i]*P[i+1]*P[j+1]
			s[i][j]=i
			for k in range(i+1, j-1):
				t=m[i][k]+m[k+1][j]+P[i]*P[i+1]*P[j+1]
				if t<m[i][j]:
					m[i][j]=t
					s[i][j]=k
	return m[0][n]
	
print MatrixChain(P, N)

def dump(s):
	for i in s:
		for j in i:
			print j,'\t',
		print

print
dump(s)
print
dump(m)














