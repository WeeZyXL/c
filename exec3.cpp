#include <iostream>
#include <string>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	string nomeprod, cor;
	int quantidade;
	float preco;
	
	cout<<  "Digite o nome do produto: ";
	getline(cin, nomeprod);
	
	cout << "Digite a quantidade em estoque:  ";
	cin >> quantidade;
	
	cout<<  "Escolha a cor:   ";
	cin >> cor;
	
	if (cor== "verde"){
		preco = 10;
	}else if (cor == "azul"){
		preco = 30;
	}else if(cor == "vermelho"){
		preco = 50;
	}
	else {
		preco = 100;
	}
	
	cout << "produto:  "<< nomeprod<<endl;
	cout << "quantidade: " << quantidade<< endl;
	cout << "cor escolhida: "<<cor << endl;
	cout << "preco: "<< preco<< endl;
	
	
	
	
	
	
	
	return 0;
}
