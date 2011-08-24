#coding:utf8

def oppo(s):
	if s=='(': return ')'
	if s==')': return '('
	if s=='[': return ']'
	if s==']': return '['
	
def bu(s):
	if s=='(' or s=='[': return s+oppo(s)
	if s==')' or s==']': return oppo(s)+s
	
def single(s):
	return ''.join([bu(i) for i in s])
	
def match(x, y):
	return (x=='(' or x=='[') and y==oppo(x)
	
def head(s):
	i=0
	l=len(s)
	while i<l and (s[i]==')' or s[i]==']'): i+=1
	return s[:i], s[i:]
	
def tail(s):
	l=len(s)
	i=l-1;
	while i>=0 and (s[i]=='(' or s[i]=='['): i-=1
	return s[:i+1], s[i+1:]
	
def center(s):
	h=head(s)[0]
	t=tail(s)[1]
	c=s[len(h):len(s)-len(t)]
	return c
	
def hct(s):
	l=len(s)
	i=0
	j=l-1
	while i<l and (s[i]==')' or s[i]==']'): i+=1
	while j>=0 and (s[j]=='(' or s[j]=='['): j-=1
	return s[:i], s[i:j+1], s[j+1:]
	


def lcr(s):
	l=len(s)
	if l<=1:
		return '', s, ''
	else:
		i=0
		j=l-1
		while (s[i]=='(' or s[i]=='[') and s[j]==oppo(s[i]):
			i+=1
			j-=1
		return s[:i], s[i:j+1], s[j+1:]
	
def hlcrt(s):
	h, c, t=hct(s)
	l, c, r=lcr(c)
	return h, l, c, r, t
	
	
f='(){}'
m={}

def F(s):
	if s=='': return s
	h, c, t=hct(s)
	if c in m: return single(h)+m[c]+single(t)
	l, c, r=lcr(c)
	
	min=10000000000
	mins=''
	if c!=s:
		x=l+F(c)+r
		if len(x)<min:
			min=len(x)
			mins=x
	c=l+c+r
	n=len(c)
	for a in range(1, n):
		b=n-a
		# if match(s[0], s[a-1]) or match(s[-b], s[-1]):
		sa=c[:a]
		sb=c[-b:]
		x=F(sa)+F(sb)
		# print 'sa=', sa, 'sb=', sb, 'x=', x
		if len(x)<min:
			min=len(x)
			mins=x
	m[c]=mins
	# print 'min:\t', min
	# print 'mins:\t', mins, len(mins)
	return single(h)+mins+single(t)
	
def deal(s):
	h, l, c, r, t=hlcrt(s)
	print 's:', s
	print 'head:', h
	print 'left:', l
	print 'center:', c
	print 'right:', r
	print 'tail:', t
	print 'result:', single(h)+l+F(c)+r+single(t)
	print
	

def main():
	for i in file('data.txt'):
		s=i.strip()
		print s
		print F(s)
		print
		
		
def test1():
	print head(')))))))))))))')
	print tail('([[[[[[[[[')
	
if __name__=='__main__':
	# test1()
	main()
	
	# print len(m)
	# for i in m:
		# print i, ':\n\t', m[i]