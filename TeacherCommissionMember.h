#pragma once
#ifndef TEACHERCOMMISSIONMEMBER_H
#define TEACHERCOMMISSIONMEMBER_H
#define MAX_COMMISSION_WORKS 8

#include "Teacher.h"
#include "CommissionMember.h"

class TeacherCommissionMember : public Teacher, public CommissionMember
{
protected:
    String commissionWorks[MAX_COMMISSION_WORKS];
    int worksCount = 0;
public:
    TeacherCommissionMember() {}
    TeacherCommissionMember(String firstName, String lastName, int birthYear, String position, String specialty, String commissionName) : Human(firstName, lastName, birthYear), Teacher(firstName, lastName, birthYear, position, specialty), CommissionMember(firstName, lastName, birthYear, commissionName), worksCount(0) {}

    int getWorksCount() const;
    String getCommissionWork(int index) const;

    bool addCommissionWork(const String work);
    bool setCommissionWork(int index, const String work);

    virtual void input(istream& in) override;
    virtual void output(ostream& out) const override;
    virtual void printHeader(ostream& out) const override;
};


istream& operator>>(istream& in, TeacherCommissionMember& teacherMember);
ostream& operator<<(ostream& out, const TeacherCommissionMember& teacherMember);






#endif
