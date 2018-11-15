#include <iostream>
#include <vector>

using namespace std;
char s;
vector <bool> campo;

int n,espantapajaros,m,postrue;
int contador = 0;

int main()
{
    cin >> n;
    while(n--){
        cin >> m;
        contador += 1;
        espantapajaros = 0;

        for (int i=0;i<m;i++){
            cin >> s;
            s;
            if (s == '.'){
                campo.push_back(true);
                postrue = i;
            } else {
                campo.push_back(false);
            }
        }

        for (int i=1;i<=campo.size();i++){
            if (campo[i-1] == true) {
                espantapajaros += 1;
                campo [i-1] = false;
                campo[i] = false;
                campo[i+1] = false;
            }
        }
        cout << "Case " << contador << ": " << espantapajaros << endl;
    }

    return 0;
}
