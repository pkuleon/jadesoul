
def deal(s):
	length=len(s)
	
	n=len(s)/2
	re=s[n]
	l=n-1
	r=n+1
	if l<0 and r<length:
		while r<length:
			r+=1
			
			pass
	if l>=0 and r>=length:
		while l>=0:
			l-=1
			pass
	while l>=0 and r<length:
		l-=1
		r+=1
		pass
while 1:
	s=raw_input()
	
	if s=="":
		continue

	print deal(s)

