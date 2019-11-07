#include <iostream>
#include <string>
using namespace std;
//prototipo de funciones
void intercambio(int*, int*);
int main()
{
	int a, b;
	cout << "introduce el primer valor: ";
	cin >> a;
	cout << "introduce el segundo valor: ";
	cin >> b;
	cout << endl;
	cout << " valor de a: " << a << endl << "valor de b: " << b << endl;
	intercambio(&a, &b);
	cout << endl << "despues del intercambio:" <<endl << endl;
	cout << "el valor de a: " << a << endl << "valor de b: "<< b << endl;
	system("pause");
	return 0;
}
void intercambio(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
