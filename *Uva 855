//Codigo obtenido de https://github.com/osmangoninahid/Online-Judge-Solution/blob/master/UVA/855.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t, r, c, f;
  int streets[50000];
  int avenues[50000];

  cin >> t;
  // t -> numero de casos
  while (t--) {
    cin >> r >> c >> f; //r -> numero de streets, c -> numero avenues, f -> numero de friends

    for (int i = 0; i < f; i++) {
      cin >> streets[i] >> avenues[i];
    }

    sort(streets, streets + f); //Los ordena para encontrar el valor de la mitad 
    sort(avenues, avenues + f); //del vector por eje street y avenue

    pair<int,int> result;

    result.first = streets[(f-1)/2];
    result.second = avenues[(f-1)/2]; 
                                      //Elige el valor de la mitad de cada uno, el cual minimiza la distancia

    cout << "(Street: " << result.first << ", Avenue: " << result.second << ")" << endl;
  }

  return 0;
}
