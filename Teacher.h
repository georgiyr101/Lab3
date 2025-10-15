#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include "Human.h"

class Teacher : virtual public Human
{
protected:
	String position = "";
	String specialty = "";
	static const int MAX_PUBLICATIONS = 10;
	String scientificPublications[MAX_PUBLICATIONS];
	int publicationsCount = 0;
public:
	Teacher() {}
	Teacher(String firstName, String lastName, int birthYear, String position, String specialty): Human(firstName, lastName, birthYear), position(position), specialty(specialty), publicationsCount(0) {}
	~Teacher() {}

	String getPosition() const;
	String getSpecialty() const;
	int getPublicationsCount() const;
	String getScientificPublication(int index) const;

	void setPosition(const String position);
	void setSpecialty(const String specialty);
	bool addScientificPublication(const String publication);
	bool setScientificPublication(int index, const String publication);

	void input(istream& in) override;
	void output(ostream& out) const override;

};

istream& operator>>(istream& in, Teacher& teacher);
ostream& operator<<(ostream& out, const Teacher& teacher);

#endif