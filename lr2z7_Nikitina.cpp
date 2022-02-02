//Создайте класс IntMod (операции по модулю простого числа) с операциями +, +=, -, -=, =, ==, !=, >, <, >=, <=, *, *=, /, /=.

#include <locale.h>
#include <iostream>
#include "IntMod.h"
using namespace std;

int main()
{
	//установки локализации
	setlocale(LC_ALL, "ru");
	//создание экземляра класса
	IntMod intmode(2,10);
	IntMod intmode2(2, 10);
	IntMod intmode3(3, 10);
	//вывод большего значения
	if (intmode == intmode2) cout << "Равны"<<"\n";
	else cout << "Не равны" << "\n";
	intmode.print();
	intmode = intmode + intmode2;
	intmode.print();
	intmode.print();
	intmode = intmode - intmode3;
	intmode.print();
	return 0;
}

