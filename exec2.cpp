#include <iostream>

using namespace std;

int main() {
    int valor1, valor2, resultado;
    
    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;

    resultado = valor1 + valor2;

    if (resultado >=10) {
        resultado += 5;
    }else if (resultado<10){
        resultado -= 7;
    }
    
    cout << "O resultado final : " << resultado << endl;

    return 0;
}

