from datetime import datetime as dt
import time 
def fib_1(limit):
	res=0
	if limit == 0 :
		res=0
	elif limit == 1 :
		res=1
	else:
		res=fib_1(limit-1)+fib_1(limit-2)
	print(res,end=' ')
	return res

def fib_2(limit,log):	
	a,b=0,1
	print(a,file=log)
	print(b,file=log)
	for i in range(limit):
		a,b=b,a+b
		print(b,file=log)
	
"""fib_1(10)"""

log=open('log.txt','w')
t_start=dt.now()
print("Start :: ", t_start,file=log)		
limit=input("Enter Limit :: ")
fib_2(int(limit),log)
t_end=dt.now()
print()
print("End :: ",t_end,file=log)				
print("Total Time Taken :: ",t_end-t_start,file=log)
