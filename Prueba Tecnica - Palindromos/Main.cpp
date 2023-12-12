#include <iostream>
#include <string.h>

using namespace std;

string palabra;
string aux;

void main() {

	cout << "Ingresa una palabra:\t";
	cin >> palabra;

	//reconocer
	//oso
	
	//ZAPATO
	//012345
	for (int i = palabra.length(); i > 0; i--)
	{
		aux += palabra[i - 1];
	}


	if (palabra.compare(aux) == 0) {
		cout << "\nSI SoN PALINDROMOS :)";
	}
	else {
		cout << "\nNO SON PALINDROMOS :C";
	}


}

