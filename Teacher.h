#ifndef TEACHER_H
#define TEACHER_H

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

	String getPosition() const;
	String getSpecialty() const;
	int getPublicationsCount() const;
	String getScientificPublication(int index) const;

	void setPosition(const String& position);
	void setSpecialty(const String& specialty);
	bool addScientificPublication(const String& publication);
	bool setScientificPublication(int index, const String& publication);

	virtual void input();

	virtual void printHeader(ostream& out) const override;

};

istream& operator>>(istream& in, Teacher& teacher);
ostream& operator<<(ostream& out, const Teacher& teacher);

#endif
