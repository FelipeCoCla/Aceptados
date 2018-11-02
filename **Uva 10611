/* runtime error, codigo aceptado obtenido de
https://github.com/morris821028/UVa/blob/master/volume106/10611%20-%20The%20Playboy%20Chimp.cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> alturas, auxiliar, val(2);
vector <vector<int> > respuestas;
int n_ladychimps, entradas, valor, filas,n,pos;

int main()
{
    cin >> n_ladychimps;

    for (int l=0; l<n_ladychimps; l++){
        cin >> valor;
        alturas.push_back(valor);
    }
    cin >> entradas;
    for (int k=0; k<entradas; k++){
        cin >> n;
        auxiliar.clear();
        auxiliar = alturas;
        auxiliar.push_back(n);
        sort (auxiliar.begin(), auxiliar.end());
        pos = find(auxiliar.begin(), auxiliar.end(), n) - auxiliar.begin();

        if (pos == 0 && auxiliar.back() == n){
            val[0] = -1;
            val[1] = -1;
        } else if (pos == 0){
            while (auxiliar[pos] == n){
                pos += 1;
            }
            val[0] = -1;
            val[1] = auxiliar[pos];

        } else if (pos+1 == auxiliar.size()){

            while (auxiliar[pos] == n){
                pos -= 1;
            }
            val[0] = auxiliar[pos];
            val[1] = -1;
        } else {
            val[0] = auxiliar[(pos-1)];
            while (auxiliar[pos] == n){
                pos += 1;
            }
            val[1] = auxiliar[pos];
        }

        respuestas.push_back(val);
        filas += 1;
    }
for (int i=0; i<filas; i++){
    for (int j=0; j<2;j++){
        if (j==1){
            cout << " ";
        }
        if (respuestas[i][j] == -1){
            cout << "X";
        } else {
            cout << respuestas[i][j];
        }
    }
            cout << endl;
}
return 0;
}
codigo aceptado -->>*/

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, Q, x, i;
    int A[50005];
    while(scanf("%d", &n) == 1) {
        for(i = 0; i < n; i++)
            scanf("%d", &A[i]);
        vector<int> v(A, A+n);
        vector<int>::iterator low, up;
        scanf("%d", &Q);
        while(Q--) {
            scanf("%d", &x);
            low = lower_bound(v.begin(), v.end(), x);
            up  = upper_bound(v.begin(), v.end(), x);
            if(low-v.begin() == 0)
                printf("X ");
            else
                printf("%d ", *--low);
            if(up-v.begin() == n)
                printf("X\n");
            else
                printf("%d\n", *up);
        }
    }
    return 0;
}
