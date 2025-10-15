#pragma once
#ifndef COMMISSIONMEMBER_H
#define COMMISSIONMEMBER_H

#include <iostream>
#include "Human.h"

class CommissionMember : virtual public Human
{
protected:
	String commissionName = "";
	static const int MAX_BIOGRAPHY = 5;
	String biography[MAX_BIOGRAPHY];
	int biographyCount = 0;
public:
	CommissionMember(){}
	CommissionMember(String firstName, String lastName, int birthYear, String commissionName): Human(firstName, lastName, birthYear), commissionName(commissionName), biographyCount(0) {}
	~CommissionMember() {}

	String getCommissionName() const;
	int getBiographyCount() const;
	String getBiography(int index) const;

	void setCommissionName(const String commissionName);
	bool addBiography(const String biographyLine);
	bool setBiography(int index, const String biographyLine);

	void input(istream& in) override;
	void output(ostream& out) const override;
};

istream& operator>>(istream& in, CommissionMember& member);
ostream& operator<<(ostream& out, const CommissionMember& member);


#endif