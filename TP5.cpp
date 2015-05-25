/* TP # 5 - Perimetro del Rectangulo
TOMAS AUGUSTO SCHMID
Última Modificación: 24/05/2015
*/

#include <iostream>
using namespace std;


double getNroPositivo();
double getPerimetro(double, double);

int main () {

double h;  //Altura
double b; //Base

cout << "Ingrese la Base: ";
b = getNroPositivo();
cout << "Ingrese la Altura: "; 
h = getNroPositivo();

cout << "El perimetro es: " << getPerimetro(b,h);
}

double getNroPositivo(){
	double valorIngresado;
	bool menorQueCero = true;

		do 
		{
			cin >> valorIngresado; 
			if (valorIngresado < 0)
			{
				cout << "Error: Ingrese un valor mayor que cero" << endl; 
			}
			else
			{
				menorQueCero = false;
				return valorIngresado;
			}
		}while(menorQueCero);

}

double getPerimetro (double b,double h){
	return (2 * b) + (2 * h);
}
