import numpy as np
##funcion de fibonacci


def fibonacci(n):
 	if n==1 or n==0:
 		 return n
 	return fibonacci(n-1)+fibonacci(n-2)


##funcion que calcula los tiempos
def get_time(n):
	import time
	t0 = time.time()
	fibonacci(n)
	t1 = time.time()-t0
        return t1 

i=0;
n=35;
##recorrido para imprimir los datos y el tiempo
while i<n:
	print i,get_time(i)
	i+=1; 
