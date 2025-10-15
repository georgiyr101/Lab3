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
	cout << "������� ���: ";
	in >> this->firstName;
	cout << "������� �������: ";
	in >> this->lastName;
	cout << "������� ��� ��������: ";
	in >> this->birthYear;
}
void Human::output(ostream& out) const 
{
	out << "���: " << this->firstName << "\n";
	out << "�������: " << this->lastName << "\n";
	out << "��� ��������: " << this->birthYear << "\n";
}

istream& operator>>(istream& in, Human& human) {
	human.input(in);
	return in;
}

ostream& operator<<(ostream& out, const Human& human) {
	human.output(out);
	return out;
}