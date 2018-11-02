/*runtime error, no lo pude mejorar, codigo obtenido de
https://github.com/marioyc/Online-Judge-Solutions/blob/master/UVA/Contest%20Volumes/11292%20-%20Dragon%20of%20Loowater.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,suma,j;
int caballeros[20000], cabezas[20000];


int main()
{
    while (cin >> n >> m){
    if (n==0 && m ==0){
        break;
    }

    for (int i=0; i<n; i++){
        cin >> cabezas[i];
    }
    for (int j=0; j<m; j++){
        cin >> caballeros[j];
    }
    if (n==0) {
        break;
    }
    if (n>m){
       cout << "Loowater is doomed!" << endl;
    } else {

        sort (cabezas,cabezas+n);
        sort (caballeros, caballeros+m);
        suma = 0;
        j=0;
        for (int i=0;i<n;i++){
            while(true){
                if (cabezas[i]>caballeros[j]){
                    j += 1;
                } else {
                    suma += caballeros[j];
                    j += 1;
                    break;
                }
            }
        }
            if (j<n){
                cout << "Loowater is doomed!" << endl;
            } else {
                cout << suma << endl;
            }
    }
    }

    return 0;
}
-->> codigo aceptado */
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n,m,a[20000],b[20000];
    
    while(true){
        scanf("%d %d",&n,&m);
        if(n == 0) break;
        
        for(int i = 0;i < n;++i) scanf("%d",&a[i]);
        for(int i = 0;i < m;++i) scanf("%d",&b[i]);
        
        int ans = 0;
        bool ok = true;
        
        sort(a,a + n);
        sort(b,b + m);
        
        for(int i = 0,j = 0;i < n && ok;++i){
            while(j < m && b[j] < a[i]) ++j;
            
            if(j == m) ok = false;
            else ans += b[j++];
        }
        
        if(!ok) puts("Loowater is doomed!");
        else printf("%d\n",ans);
    }
    
    return 0;
}
