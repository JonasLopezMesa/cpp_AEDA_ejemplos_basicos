#include <iostream>
#include <cmath>
using namespace std;

int main () {

	
	//PRIMER EJERCICIO//////////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << "Ecuación de primer Grado" << endl;
	cout << "introduzca los valores a y b de la ecuación de primer Grado." << endl;
	
	float r;
	float a, b;
	cout << "Primero a:" << endl;
	cin >> a;
	cout << "Ahora b:" << endl;
	cin >> b;
	
	r = (-b / a);
	
	cout << "x = " << r << endl;
	cout << "Fin del programa" << endl;
	
	return 0;
	
	//SEGUNDO EJERCICIO//////////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << "Ecuación de segundo Grado" << endl;
	cout << "introduzca los valores a, b y c de la ecuación de segundo Grado." << endl;
	float x, x1;
	float a, b, c;
	cout << "Primero a" << endl;
	cin >> a;
	cout << "Ahora b" << endl;
	cin >> b;
	cout << "Por Último c" << endl;
	cin >> c;
	
	x = (-b + (sqrt((b * b) - (4 * (a * c)))) / (2 * a));
	x1 = (-b - (sqrt((b * b) - (4 * (a * c)))) / (2 * a));
	
	cout << "x tiene dos soluciones: " << endl;
	cout << "x1 = " << x << endl;
	cout << "x2 = " << x1 << endl;
	cout << "Fin del Programa" << endl;
	
	return 0;
	
	//TERCER EJERCICIO//////////////////////////////////////////////////////////////////////////////////////////////////
	
	float alt, edad, altura_cm, porcentaje_edad, peso_recomendado;
	
	cout << "Introduzca la altura: " << endl;
	cin >> alt;
	cout << "Introduzca la edad: " << endl;
	cin >> edad;
	
	altura_cm = alt * 100;
	porcentaje_edad = edad * 0.10;
	
	peso_recomendado = ((altura_cm - 100) + (porcentaje_edad)) * 0.9;
	
	cout << "el peso recomendado es: " << peso_recomendado  << "Kg."<< endl;
	cout << "Fin del programa" << endl;
	
	return 0;
	
	//QUINTO EJERCICIO//////////////////////////////////////////////////////////////////////////////////////////////////
	
	int decimal, i = 0, binario[32] = {0};
	while ( decimal != -1 ){
	cout << "introduce un número en decimal: " << endl;
	cin >> decimal;
	
	while ( (decimal / 2) != 0) {
		binario[i] = decimal % 2;
		decimal = decimal / 2;
		i++;
		}
	i++;
	binario[i] = 1;
	i = 31;
	while (i != 0) {
		cout << binario[i];
		i--;
	}
		cout << endl;
	}
	
	cout << "fin del programa";
	return 0;
	
	//DOCEAVO EJERCICIO//////////////////////////////////////////////////////////////////////////////////////////////////
	
	int a, b;
	while (a != -1){
	
	cout << "Introduzca un número entero: " << endl;
	cin >> a;
	b = 0;
	
	for (int i = 0; i <= a-1; i++) {
		b++;
		for (int j = 1; j <= b; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
