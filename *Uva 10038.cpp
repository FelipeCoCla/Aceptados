// Codigo obtenido de 
// https://github.com/morris821028/UVa/blob/master/volume100/10038%20-%20Jolly%20Jumpers.cpp

#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, A[3001], i;
	while(scanf("%d", &n) == 1) {
		for(i = 0; i < n; i++)
			scanf("%d", &A[i]);  // Escanea todos los inputs de espacio n y los almacena en el array A[i]
		int mark[3001] = {0}, flag = 0; // setea para cada caso Mark en 0's y la bandera en 0
		for(i = 1; i < n; i++) {
			if(abs(A[i] - A[i-1]) < n) //si la resta del valor absoluto de la posicion i e i-1 es menor a n
				mark[abs(A[i] - A[i-1])]++; // Marca la posicion de este valor y asignale un 1.
		}
		for(i = 1; i < n; i++)
			if(mark[i] == 0) // si cualquier valor del vector mark de 0 a n es 0, algun caso no cumplio la condicion de jolly
				flag = 1; // se levanta la bandera
		if(flag)
			puts("Not jolly"); // si la bandera fue levantada -> Not jolly
		else
			puts("Jolly"); // si la bandera = 0 -> jolly
	}
    return 0;
}
