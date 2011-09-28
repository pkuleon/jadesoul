#coding:utf8

from spider import *
ws=read_file('words.txt').strip().split('\n')

r=re.compile('[\'\"\.\s\d]')
for i, w in enumerate(ws):
	ws[i]=r.sub('', w.strip())
	
write_file('\n'.join(ws), 'words.txt')
write_file('\n'.join(ws[:100]), 'words_100.txt')
write_file('\n'.join(ws[:1000]), 'words_1000.txt')
write_file('\n'.join(ws[:10000]), 'words_10000.txt')
write_file('\n'.join(ws[:45000]), 'words_45000.txt')
write_file('\n'.join(sorted(ws)), 'words_sorted.txt')