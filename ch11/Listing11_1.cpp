//пример ввода вывода для простых типов данных
#include "iostream"

using namespace std;


void listing11_1()
{
	int i; double x; char a;
	cout << "Enter an integer ->\t"; cin >> i;
	cout << "Enter any letter ->\t"; cin >> a;
	cout << "Enter real value ->\t"; cin >> x;
	cout << "int\t" << i << endl;
}