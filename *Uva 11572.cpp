// Codigo obtenid de
// https://github.com/Hikari9/UVa/blob/master/11572%20-%20Unique%20Snowflakes.cpp

#include<cstdio>
#include<hash_map>
#include<algorithm>
using namespace std;
using namespace __gnu_cxx;
hash_map<int,int> m;
int t, n, x, i, u, mx;
int main(){
	scanf( "%d", &t );
	while( t-- ){
		scanf( "%d", &n );
		m.clear();
		mx = u = 0; //reinicia las variable y el vector m para cada caso 
		for( i=1; i<=n; ++i ){
			scanf( "%d", &x );
			int& r = m[x]; 
			if( r>u ){
				mx = max(mx,i-u-1); //calculo el maximo entre la varible maximo y el numero de posiciones i-u-1
				u = r; // el u ar la siguiente iteracion se convierte en r
			}
			r = i; // el rango de a proxima iteracion partir en la posicion i, ojo ++i
		}
		mx = max(mx,n-u); //maximo entre el mx calculado y el numero de posiciones el vector menos el ultimo u = r
		printf( "%d\n", mx );
	}
}
