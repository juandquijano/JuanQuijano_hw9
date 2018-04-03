#include<iostream>
 
using namespace std;
//se crea la funcion iterativa que hace la secuncia del N-esimo termino
int fibonacci(int N)
{
    if((N==1)||(N==0))
    {
        return(N);
    }
    else
    {
        return(fibonacci(N-1)+fibonacci(N-2));
    }
}

//funcion para obtener el tiempo
float get_time(int n)
{

	clock_t t;
	t = clock();
	fibonacci(n);
	t = clock() - t;
	float time = ((float)t)/CLOCKS_PER_SEC;
return time;
}

//el metodo main en el cual se llaman las funciones que se hicieron
int main()
{//inicializar el valor de N y el contador 
    int n = 35,i=0;
 
    while(i<n)//while para calcular la secuencia
    {
        cout<< i << "," <<   get_time(n) << endl;
        i++;
    }
    return 0;
}
