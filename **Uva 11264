/* no pude encontrar el error, codigo obtenido de 
https://github.com/ajahuang/UVa/blob/master/UVa%2011264%20-%20Coin%20Collector.cpp
#include <iostream>
#include <vector>
using namespace std;

vector <int> valores,respuesta;
int n,m,moneda,resultado;
int suma=0;

int main()
{
    cin >> n >> m;
    for (int k=0;k<n;k++){
        suma = 0;
        resultado = 1;
        valores.clear();
        for (int j=0;j<m;j++){
            cin >> moneda;
            valores.push_back (moneda);
    }
    for (int i=0;i<m-1;i++){
        if (suma+valores[i]<valores[i+1]){
            suma += valores[i];
            resultado++;
        }
    }
    respuesta.push_back(resultado);
    }
    for (int q=0;q<respuesta.size();q++){
        cout << respuesta[q] << endl;
    }

    return 0;
}
codigo aceptado -->> */
#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int n;
        cin >> n;

        vector<int> values;
        for (int i = 0; i < n; ++i)
        {
            int value;
            cin >> value;
            values.push_back(value);
        }

        int sum = 1;
        int coins = values.size() > 1? 2 : 1;
        // Get as more coins of smaller values as possible.
        for (int i = 1; i < values.size() - 1; ++i)
            if (sum + values[i] < values[i + 1])
            {
                sum += values[i];
                ++coins;
            }

        cout << coins << endl;
    }
    return 0;
}
