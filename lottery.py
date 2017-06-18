from random import randint

def chooseTheball():
	L =[]
	while(True):
		L.append(randint(1, 33))
		L = list(set(L))
		if len(L) == 6:
			break
	L.sort()
	print 'The Red Ball is:'
	for i in range(6):
		print L[i],
	print '\nThe Blue Ball is:'
	print randint(1, 16)
'''def main():
	chooseTheball()

main()'''
if __name__ == "__main__":
	chooseTheball()
	print 'Good Luck!'
