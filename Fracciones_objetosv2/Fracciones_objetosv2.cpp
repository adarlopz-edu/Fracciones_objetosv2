//LOPEZ LOPEZ BRANDON ADAIR
//22100190

#include <iostream>
#include <conio.h>
#include <sstream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

void ingresoDeDatos(); //Inicializo la funcion desde aqui para usarla en la funcion intro
string sharedata1(int, int, string);
string sharedata2(int, int, string);

class Fraccion {
private:
	int numerador;
	int denominador;

public:
	Fraccion(int, int);
	void suma(int, int);

};


void intro() {

	cout << "FRACCIONES CON OBJETOS" << endl << endl;
	cout << "Seleccione una operacion" << endl;
	cout << "1. Suma" << endl << "2. Resta" << endl << "3. Multiplicacion" << endl << "4. Division" << endl;

	while (1) {
		switch (char tipoOperacion = _getch()) {
		case '1':
			cout << endl << "Suma" << endl;
			ingresoDeDatos();

			break;
		case '2':
			cout << endl << "Resta" << endl;

			break;
		case '3':
			cout << endl << "Multiplicacion" << endl;

			break;
		case '4':
			cout << endl << "Division" << endl;

			break;
		}
	}

}

void ingresoDeDatos() {

	string primeraFraccion;
	string segundaFraccion;

	bool validarInput1(string fraccion1);
	bool validarInput2(string fraccion2);
	bool isFraccion1{};
	bool isFraccion2{};

	while (isFraccion1 == false) {
		cout << endl << "Ingresa la primera fraccion (por ejemplo: 7/2): ";
		cin >> primeraFraccion;
		isFraccion1 = validarInput1(primeraFraccion);

	}

	while (isFraccion2 == false) {
		cout << endl << "Ingresa la segunda fraccion: ";
		cin >> segundaFraccion;
		isFraccion2 = validarInput2(segundaFraccion);
	}

}

bool validarInput1(string fraccion) {

	char* fraccion_char = new char[fraccion.length() + 1];
	strcpy(fraccion_char, fraccion.c_str());//convierto el string de la primera fraccion a un arreglo tipo char
	//todo esto para utilizar el arreglo para jugar con las posiciones y los caracteres

	int posicionSlash{};
	int pS{};

	for (int a{}; a < fraccion.length(); a++) {
		//todas estas condiciones son para validar la estructura de una fraccion
		if (fraccion_char[a] == '/') { //revisa si en alguna posicion del arreglo para empezar hay un /
			posicionSlash = a;
			pS = posicionSlash + 1; // esta solo es para sumar y 1 y poder ver la posicion del slash real
		}
	}

	if (posicionSlash == 0 || pS == fraccion.length()) { // si el / esta o al principio o al final dale cuello
		cout << "nose puede";
		return false;
	}
	else {
		sharedata1(posicionSlash, fraccion.length(), fraccion_char);
		return true;
		//ME FALTA RETORNAR NUM Y DEM o sacarlos de alguna forma y vamonos a las clases
	}

}

bool validarInput2(string fraccion) {

	char* fraccion_char = new char[fraccion.length() + 1];
	strcpy(fraccion_char, fraccion.c_str());//convierto el string de la primera fraccion a un arreglo tipo char
	//todo esto para utilizar el arreglo para jugar con las posiciones y los caracteres

	int posicionSlash{};
	int pS{};

	for (int a{}; a < fraccion.length(); a++) {
		//todas estas condiciones son para validar la estructura de una fraccion
		if (fraccion_char[a] == '/') { //revisa si en alguna posicion del arreglo para empezar hay un /
			posicionSlash = a;
			pS = posicionSlash + 1; // esta solo es para sumar y 1 y poder ver la posicion del slash real
		}
	}

	if (posicionSlash == 0 || pS == fraccion.length()) { // si el / esta o al principio o al final dale cuello
		cout << "nose puede";
		return false;
	}
	else {
		sharedata2(posicionSlash, fraccion.length(), fraccion_char);
		return true;
		//ME FALTA RETORNAR NUM Y DEM o sacarlos de alguna forma y vamonos a las clases
	}

}

string sharedata1(int posicionSlash, int tamañoCadena, string fraccion_char) {

	cout << "frraccion 1";

	int numerador = stoi(fraccion_char);//convierte un string a un int

	int c = posicionSlash + 1;
	string dm(fraccion_char, c);//crra un string
	int denominador = stoi(dm);//y lo convierte a int

	cout << numerador;
	cout << endl;
	cout << denominador;

	return "a";
}

string sharedata2(int posicionSlash, int tamañoCadena, string fraccion_char) {

	cout << "frraccion 2";

	int numerador = stoi(fraccion_char);//convierte un string a un int

	int c = posicionSlash + 1;
	string dm(fraccion_char, c);//crra un string
	int denominador = stoi(dm);//y lo convierte a int

	cout << numerador;
	cout << endl;
	cout << denominador;

	return "a";
}

void Fraccion::suma(int n1, int d1) {

	cout << n1;
	cout << d1;

}

int main() {

	intro();

}