#include <iostream>
using namespace std;

int main() {
int c,suma;
cin >> c;
    if (c >= 1){
        suma = (c * (c+1) / 2);
}
    else {
        suma = -(c * (c-1) / 2 ) + 1;
}
cout << suma;
}
