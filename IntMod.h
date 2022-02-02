#pragma once
#include <math.h>
#include <iostream>
using namespace std;

class IntMod
{
public:
	//конструктор класс с присваиванием числа и его модуля список инициализации
	IntMod(int a, int b):chislo(a), modul(b){
	}
	//деструктор
	~IntMod() {		
	}
	//геттер числа
	int getChislo() {
		return chislo;
	}
	//сеттер числа
	void setChislo(int value) {
		chislo = value;
	}
	//геттер  модуля
	int getModul() {
		return chislo;
	}
	//сеттер модуля
	void setModul (int value) {
		modul = value;
	}
	void print() {
		std::cout << "Число: " << chislo << " \t Модуль: " << modul <<"\n";
	}
	IntMod operator+(IntMod value);
	IntMod operator+=(IntMod value);
	IntMod operator-(IntMod value);
	IntMod operator-=(IntMod value);
	bool operator==(IntMod value);
	bool operator!=(IntMod value);
	bool operator>(IntMod value);
	bool operator<(IntMod value);
	bool operator>=(IntMod value);
	bool operator<=(IntMod value);
	IntMod operator*(IntMod value);
	IntMod operator*=(IntMod value);
	
private:
	int chislo;
	int modul;
};