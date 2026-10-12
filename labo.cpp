#include <iostream>


using namespace std;

int main() {
    int inicio;

    cout << "Ingrese el número inicial para la cuenta regresiva: ";
    cin >> inicio;



    for (int i = inicio; i >= 0; --i) {
        cout << i << endl;
        
    }

    cout << "Tiempo finalizado";

    return 0;
