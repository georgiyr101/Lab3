#include "CommissionMember.h"
#include <iomanip>


String CommissionMember::getCommissionName() const {return commissionName;}

int CommissionMember::getBiographyCount() const {return biographyCount;}

String CommissionMember::getBiography(int index) const 
{
    if (index >= 0 && index < biographyCount) return biography[index];
    return String("");
}

void CommissionMember::setCommissionName(const String commissionName) {this->commissionName = commissionName;}

bool CommissionMember::addBiography(const String biographyLine) 
{
    if (biographyCount < MAX_BIOGRAPHY) 
    {
        biography[biographyCount] = biographyLine;
        biographyCount++;
        return true;
    }
    return false;
}

bool CommissionMember::setBiography(int index, const String biographyLine) 
{
    if (index >= 0 && index < biographyCount) 
    {
        biography[index] = biographyLine;
        return true;
    }
    return false;
}

void CommissionMember::input(istream& in) 
{
    Human::input(in);
    in.ignore(1000, '\n');
    cout << "������� �������� ��������: ";
    in >> commissionName;
    cout << "������� ���������� ������� ������������� (���� " << MAX_BIOGRAPHY << "): ";
    in >> biographyCount;
    in.ignore(1000, '\n');
    if (biographyCount > MAX_BIOGRAPHY) biographyCount = MAX_BIOGRAPHY;

    for (int i = 0; i < biographyCount; i++) 
    {
        cout << "������� ����� ������������� " << (i + 1) << ": ";
        in >> biography[i];
    }
}

void CommissionMember::output(ostream& out) const 
{
    Human::output(out);

    out << left;
    out << setw(20) << "��������:" << commissionName << "\n"
        << setw(20) << "�������������:" << biographyCount << " �������\n";

    for (int i = 0; i < biographyCount; i++) out << "  " << setw(2) << (i + 1) << ". " << biography[i] << "\n";
}

istream& operator>>(istream& in, CommissionMember& member) 
{
    member.input(in);
    return in;
}

ostream& operator<<(ostream& out, const CommissionMember& member) 
{
    member.output(out);
    return out;
}