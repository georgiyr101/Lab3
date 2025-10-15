#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "String.h"

class Human
{
protected:
	String firstName = "";
	String lastName = "";
	int birthYear = 0;
public:
	Human() {}
	Human(String firstName, String lastName, int birthYear)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->birthYear = birthYear;
	}
	virtual ~Human(){}

	String getFirstName() const;
	String getLastName() const;
	int getBirthYear() const;

	void setFirstName(const String first);
	void setLastName(const String last);
	void setBirthYear(int year);

	virtual void input(istream& in);
	virtual void output(ostream& out) const;

};

istream& operator>>(istream& in, Human& human);
ostream& operator<<(ostream& out, const Human& human);

#endif