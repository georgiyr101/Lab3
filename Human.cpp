#include <iostream>
#include "Human.h"
#include <iomanip>

String Human::getFirstName() const { return this->firstName; }
String Human::getLastName() const { return this->lastName; }
int Human::getBirthYear() const { return this->birthYear; }

void Human::setFirstName(const String& first) { this->firstName = first; }
void Human::setLastName(const String& last) { this->lastName = last; }
void Human::setBirthYear(int year) { this->birthYear = year; }

void Human::input(istream& in) {
    cout << "Введите имя: ";
    in >> firstName;
    cout << "Введите фамилию: ";
    in >> lastName;
    cout << "Введите год рождения: ";
    in >> birthYear;
}

void Human::output(ostream& out) const {
    out << left << setw(15) << firstName << setw(15) << lastName << setw(12) << birthYear;
}

void Human::printHeader(ostream& out) const {
    out << left << setw(15) << "Имя" << setw(15) << "Фамилия" << setw(12) << "Год рожд.";
}

istream& operator>>(istream& in, Human& human) {
	human.input(in);
	return in;
}

ostream& operator<<(ostream& out, const Human& human) {
	human.output(out);
	return out;
}
