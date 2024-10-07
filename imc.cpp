#include <iostream>
#include <string>


using namespace std;

int main() {
    float peso, idade, altura, imc;
    
    string nome;

     cout <<"Digite seu nome: ";
     cin >> nome;
     
     cout <<"Digite sua idade: ";
     cin >> idade;

    cout << "Digite seu peso:  " ;
    cin >> peso;

    cout << "Digite sua altura:  ";
    cin >> altura;
    

    imc = peso / ( altura * altura); 
    
    
    if (imc < 18.5) {
        cout << "Ola, " << nome << " sua idade de: " << idade << " voce tem o IMC de: " << imc << " Abaixo do peso";
    } else if (imc >= 18.5 && imc < 25) {
        cout << "Ola, " << nome << " sua idade de: " << idade << " voce tem o IMC de: " << imc << " Peso normal";
    } else if (imc >= 25 && imc < 30) {
        cout << "Ola, " << nome << " sua idade de: " << idade << " voce tem o IMC de: " << imc << " Sobrepeso";
    } else {
        cout << "Ola, " << nome << " sua idade de: " << idade << " voce tem o IMC de: " << imc << " você tem obesidade";
    }
    
     return 0;
}

