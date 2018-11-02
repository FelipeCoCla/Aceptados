/* No pude encontrar el error en mi codigo, el codigo aceptado lo obtuve de 
https://github.com/ackoroa/UVa-Solutions/blob/master/UVa%2010954%20-%20Add%20All/src/UVa%2010954%20-%20Add%20All.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> linea,resultado, acsuma;
int n,dato, acumulado;


int main()
{
    while (cin >> n){
        if (n == 0){
            break;
        }
        linea.clear();
        acsuma.clear();
        for (int i=0; i<n; i++){
            cin >> dato;
            linea.push_back(dato);
        }
        sort (linea.begin(), linea.end());
        acumulado = 0;

        if (n>2){
            acumulado = linea[0]+linea[1];
            acsuma.push_back(acumulado);

            for (int j=2; j<n; j++){
                acumulado += linea[j];
                acsuma.push_back(acumulado);
                }
            } else {
                acumulado = linea[0]+linea[1];
                resultado.push_back(acumulado);
            }
        acumulado = 0;
        if (acsuma.size() != 0){
        for (int o=0;o<acsuma.size(); o++){
            acumulado += acsuma[o];
        }
        resultado.push_back(acumulado);
        }
    }

    for (int k=0; k<resultado.size(); k++){
        cout << resultado[k] << endl;
    }
    return 0;
}
Codigo aceptado -->>*/
#include <cstdio>
#include <queue>
#include <functional>
using namespace std;

int main() {
	int n;

	while (scanf("%d", &n), n) {
		priority_queue<int, vector<int>, greater<int> > q;

		while (n--) {
			int x;
			scanf("%d", &x);
			q.push(x);
		}

		int total = 0, cost = 0;
		while (q.size() > 1) {
			total = q.top();
			q.pop();
			total += q.top();
			q.pop();
			cost += total;
			q.push(total);
		}

		printf("%d\n", cost);
	}

	return 0;
}
