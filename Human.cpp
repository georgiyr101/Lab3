#include <iostream>
#include "Human.h"

String Human::getFirstName() const { return this->firstName; }
String Human::getLastName() const { return this->lastName; }
int Human::getBirthYear() const { return this->birthYear; }

void Human::setFirstName(const String first) { this->firstName = first; }
void Human::setLastName(const String last) { this->lastName = last; }
void Human::setBirthYear(int year) { this->birthYear = year; }

void Human::input(istream& in) 
{
	cout << "Введите имя: ";
	in >> this->firstName;
	cout << "Введите фамилию: ";
	in >> this->lastName;
	cout << "Введите год рождения: ";
	in >> this->birthYear;
}
void Human::output(ostream& out) const 
{
	out << "Имя: " << this->firstName << "\n";
	out << "Фамилия: " << this->lastName << "\n";
	out << "Год рождения: " << this->birthYear << "\n";
}

istream& operator>>(istream& in, Human& human) {
	human.input(in);
	return in;
}

ostream& operator<<(ostream& out, const Human& human) {
	human.output(out);
	return out;
}