#include<iostream>

using namespace std;

int main()
{
	int op = 1;
	while( op == 1)
	{
		cout << "                     BIOGRAFIA                         " << endl;
		cout << "Mi nombre es Eddy Navia Condori." << endl;
		cout << "Tengo 19 años, naci el 25 de mayo del 2003." << endl;
		cout << "Soy de la Carrera Ing. de Sistemas." << endl;
		cout << "Egrese del Colegio Nacional Junin." << endl;
		cout << "Tengo conocientos basicos sobre lo que es la soldadura de metales y electronica" << endl;
        cout << "Hago mantenimiento de laptops y computadoras de escritorio" << endl;
		cout << "Doy clases de matematica escolar." << endl << endl;
		cout << "¿\nDesea volver a correr el programa?" << endl;
		cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl; cin >> op;
		while (op <= 0 || op >= 3)
		{
			cout << "INGRESAR NUMEROS COMPRENDIDOS ENTRE 1 Y 2" << endl << endl << endl;
			cout << "�Desea volver a correr el programa? " << endl;
			cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl;
			cin >> op;  
		}
	}
    return 0;
}