#coding:utf8

from spider import *
import random

def hashfunc(ch):
	if ch>='a':
		return ord(ch)-97
	else:
		return ord(ch)-65+26

alpha='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'		

def randword():
	return ''.join(random.sample(alpha, random.randint(3, 5)))

class node:
	def __init__(self):
		self.children=[0]*52
		self.word=False
	
	# def __repr__(self):
		# print self.children, self.word
		
class trie:	
	def __init__(self):
		self.root=node()
		self.cur_parent=self.root
		
	def build(self, words):
		i=0
		for word in words:
			i+=1
			if i%10000==0:
				print i
			index=0
			for letter in word:
				index=hashfunc(letter)
				if self.cur_parent.children[index]:
					self.cur_parent=self.cur_parent.children[index]
				else:
					self.cur_parent.children[index]=node()
					self.cur_parent=self.cur_parent.children[index]
			self.cur_parent.word=True
			self.cur_parent=self.root
	
	def search(self, keyword):
		self.cur_parent=self.root
		index=0
		for letter in keyword:
			index=hashfunc(letter)
			if self.cur_parent.children[index]:
				self.cur_parent=self.cur_parent.children[index]
			else:
				return False
		return self.cur_parent.word==True
		
def generate_rand_words():
	words=[]
	i=0
	while i<5000000:
		words.append(randword())
		i+=1
	return words
	
if __name__=='__main__':
	# words=read_file('linux.words').split()
	time_seed(0)
	words=generate_rand_words()
	print time_gap(0, 'generate_rand_words')
	write_file('\n'.join(words), 'words.txt')
	
	# raw_input('save')
	
	
	# test_words=[w[::-1]  if hash(w)%13==1 else w for w in words]
	# print time_gap(0, 'test_words')
	
	# t=trie()
	# t.build(words)
	# print time_gap(0, 'build')
	# for w in test_words:
		# t.search(w)
	# print time_gap(0, 'search ok')
	
	all={}
	for i in words:
		all[i]=1
	print time_gap(0, 'build')
	for i in words:
		if i in all:
			1+1
	print time_gap(0, 'search')
	
	# all=words
	# for i in test_words:
		# if all.index(i):
			# 1+1
	# print time_gap(0, 'ok')