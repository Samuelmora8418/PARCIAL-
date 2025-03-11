#include <iostream>
using namespace std;

int main() {
    double k;
    cout << "Introdusca el coeficiente de conductividad que termica en k ( W/m·K): ";
    cin >> k;

    if (k <= 0.1) {
        cout << "Aislante térmico" << endl;
    } else if ( 0.1 <= k < 1) {
        cout << "Baja conductividad" << endl;
    } else if ( 1 <= k < 100) {
        cout << "Buen conductor" << endl;
    } else  {
        cout << "Conductor excelente" << endl;
    }

 return 0;
}