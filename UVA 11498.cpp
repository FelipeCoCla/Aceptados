#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <string> resultado;
int n,divx,divy,x,y;
int k = 0;

vector <int> cordx,cordy;

int main()
{
    while (cin >> n){
        if (n == 0){
            break;
        }
    cin >> divx;
    cin >> divy;

    for (int i=0; i<n; i++){

            cin >> x;
            cin >> y;
            x = x - divx;
            y = y - divy;
            cordx.push_back(x);
            cordy.push_back(y);

        }


for (int j=k; j<k+n; j++){

    if (cordx[j]== 0 || cordy[j]== 0) {
        resultado.push_back("divisa");
        }
    else if (cordx[j]>0 && cordy[j]>0) {
        resultado.push_back("NE");
        }
    else if (cordx[j]>0 && cordy[j]<0){
        resultado.push_back("SE");
        }
    else if (cordx[j]<0 && cordy[j]>0){
        resultado.push_back("NO");
        }
    else if (cordx[j]<0 && cordy[j]<0){
        resultado.push_back("SO");
        }
    }
    k += n;
}
for (int h=0; h<resultado.size(); h++){
    cout << resultado[h] << endl;
}
return 0;
}
