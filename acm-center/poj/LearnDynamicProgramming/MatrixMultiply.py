#coding:utf8

#递归算法

N=3
P=[10, 100, 5, 50]

m=[[None for j in range(N)] for i in range(N)]
s=[[None for j in range(N)] for i in range(N)]

def RecurMatrixChain(P, i, j):
	if i==j:
		m[i][j]=0
	else:
		if m[i][j]==None:
			print 'calculate sub problem', i, j
			for k in range(i, j):
				q=RecurMatrixChain(P, i, k)+RecurMatrixChain(P, k+1, j)+P[i]*P[k+1]*P[j+1]
				print q
				if q<m[i][j] or m[i][j]==None:
					m[i][j]=q
					s[i][j]=k
					print 'update', i, j, k, q
	return m[i][j]
print RecurMatrixChain(P, 0, N-1)

def dump(s):
	for i in s:
		for j in i:
			print j,'\t',
		print

print
dump(s)
print
dump(m)














