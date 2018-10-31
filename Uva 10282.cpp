#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
map <string,string> diccionario;
vector <string> respuestas;
string str,ingles,extranjero;
stringstream ss;

int main()
{
    while (getline(cin,str) && str.size()){
        ss.clear();
        ss << str;
        if (str.size() == 0){
            break;
        }
        ss >> ingles;
        ss >> extranjero;
        diccionario[extranjero] = ingles;

    }

    while (getline (cin,extranjero) && extranjero.size()){
        if (diccionario.count(extranjero)>0){
            respuestas.push_back(diccionario[extranjero]);
        } else {
            respuestas.push_back ("eh");
        }
    }
    for(int i=0;i<respuestas.size();i++){
        cout << respuestas[i] << endl;
    }
}
