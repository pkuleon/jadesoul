import os, sys, re

fin=sys.argv[1]
f=open(fin)
s=f.read()
f.close()

fout=fin[:fin.rfind('.')]+'.py'
f=open(fout, 'w')

re_sp=re.compile('\[\[|\]\]')
lst=re_sp.split(s)
for i, c in enumerate(lst):
	if i%2==1:
		f.write(c.lstrip()+'\n')
	else:
		f.write('print """'+c+'"""\n')
		
f.close()

os.system(fout+' >'+fout+'.cpp')