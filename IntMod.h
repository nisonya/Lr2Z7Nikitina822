#pragma once
#include <math.h>
#include <iostream>
using namespace std;

class IntMod
{
public:
	//����������� ����� � ������������� ����� � ��� ������ ������ �������������
	IntMod(int a, int b):chislo(a), modul(b){
	}
	//����������
	~IntMod() {		
	}
	//������ �����
	int getChislo() {
		return chislo;
	}
	//������ �����
	void setChislo(int value) {
		chislo = value;
	}
	//������  ������
	int getModul() {
		return chislo;
	}
	//������ ������
	void setModul (int value) {
		modul = value;
	}
	void print() {
		std::cout << "�����: " << chislo << " \t ������: " << modul <<"\n";
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