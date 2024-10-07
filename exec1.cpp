#include <iostream>
#include <string>

using namespace std;

 int main ()
 
 const string usuario1 = "wesley";
  const string senha1 = "2024";
  
  string usuario, senha;
  
  cout << "Digite o usuario: ";
  cin >> usuario;
  
  if (usuario == usuario1) {
  	
  	cout << "Digite sua senha: " << endl;
  } else if ( senha == senha1) {
  	cout << "Aprovado" << endl;
  } else { 
  cout << "usuario invalido";
  }
  
  
  
  
  
	return 0;
}
