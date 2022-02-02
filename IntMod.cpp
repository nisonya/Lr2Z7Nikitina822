#include "IntMod.h"

IntMod IntMod::operator+ (IntMod value) {
	if (modul == value.modul) {
		int s = (chislo + value.chislo) % value.modul;
		return IntMod(s, value.modul);
	}
	else return(IntMod(0, 0));
}
IntMod IntMod::operator+= (IntMod value) {
	if (modul == value.modul) {
		int s = (chislo + value.chislo) % value.modul;
		return IntMod(s, value.modul);
	}
	else return(IntMod(0, 0));
}
IntMod IntMod::operator- (IntMod value) {
	if (modul == value.modul) {
	int s = (chislo - value.chislo) % value.modul;
	return IntMod(s, value.modul);
	}
	else return(IntMod(0, 0));
}
IntMod IntMod::operator-= (IntMod value) {
	if (modul == value.modul) {
	int s = (chislo - value.chislo) % value.modul;
	return IntMod(s, value.modul);
	}
	else return(IntMod(0, 0));
}
bool IntMod::operator== (IntMod value) {
	if (chislo % modul == value.chislo % value.modul) { return true; }
	else return false;
}
bool IntMod::operator!= (IntMod value) {
	if (chislo % modul != value.chislo % value.modul) { return true; }
	else return false;
}
bool IntMod::operator> (IntMod value) {
	if (chislo % modul > value.chislo % value.modul) { return true; }
	else return false;
}
bool IntMod::operator< (IntMod value) {
	if (chislo % modul < value.chislo % value.modul) { return true; }
	else return false;
}
bool IntMod::operator>= (IntMod value) {
	if (chislo % modul >= value.chislo % value.modul) { return true; }
	else return false;;
}
bool IntMod::operator<= (IntMod value) {
	if (chislo % modul <= value.chislo % value.modul) { return true; }
	else return false;
}
IntMod IntMod::operator* (IntMod value) {
	if (modul == value.modul) {
		int s = (chislo * value.chislo) % value.modul;
		return IntMod(s, value.modul);
	}
	else return(IntMod(0, 0));
}
IntMod IntMod::operator*= (IntMod value) {
	if (modul == value.modul) {
		int s = (chislo * value.chislo) % value.modul;
		return IntMod(s, value.modul);
	}
	else return(IntMod(0, 0));
}