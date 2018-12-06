//obtenido de https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%20441%20-%20Lotto/src/UVa%20441%20-%20Lotto.cpp

#include <cstdio>
using namespace std;

int main() {
	int k, S[12], count = 0;
	while (scanf("%d", &k), k) { //input de k siguientes datos
		if (count++) //salto de linea entre veces que correra el algoritmo, no entra en la primera iteración
			printf("\n");
		for (int i = 0; i < k; i++)
			scanf("%d", &S[i]); //arreglo S, de largo k

		for (int a = 0; a < k - 5; a++)
			for (int b = a + 1; b < k - 4; b++)
				for (int c = b + 1; c < k - 3; c++)
					for (int d = c + 1; d < k - 2; d++)
						for (int e = d + 1; e < k - 1; e++)
							for (int f = e + 1; f < k; f++)
								printf("%d %d %d %d %d %d\n", S[a], S[b], S[c],
										S[d], S[e], S[f]);    // itera en todas las componentes, fija las primeras 5 componentes del arreglo
                                          // luego cada for llega hasta las ultimas 6 componentes, siendo f la ultima componente
                                          // asi crea todas las combinatorias sin repetición para un arreglo de 6 componentes (cantidad de n° para la loteria)
	}

	return 0;
}
