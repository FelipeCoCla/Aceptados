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
		mx = u = 0; 
		for( i=1; i<=n; ++i ){
			scanf( "%d", &x );
			int& r = m[x]; 
			if( r>u ){
				mx = max(mx,i-u-1);
				u = r;
			}
			r = i;
		}
		mx = max(mx,n-u);
		printf( "%d\n", mx );
	}
}
