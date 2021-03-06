// Codigo extraido de https://github.com/marioyc/Online-Judge-Solutions/blob/master/Timus%20Online%20Judge/1005%20-%20Stone%20pile.cpp

#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    
    int w[20];
    for(int i = 0;i<N;++i)
        scanf("%d",&w[i]); // escanea los N inputs de peso de piedras
    
    int ans = 2000000; 
    
    for(int i = (1<<(N-1))-1;i>=0;--i){ //crea la máscara de bits
        int aux = 0; 
        
        for(int j = 0;j<N;++j)
            if(i & (1<<j)) aux += w[j]; 
            else aux -= w[j];
        
        ans = min(ans,abs(aux)); //menor valor de la suma
    }
    
    printf("%d\n",ans);
    
    return 0;
}
