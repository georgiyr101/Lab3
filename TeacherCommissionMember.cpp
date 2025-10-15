#include "TeacherCommissionMember.h"
#include <iomanip>

int TeacherCommissionMember::getWorksCount() const {
    return worksCount;
}

String TeacherCommissionMember::getCommissionWork(int index) const {
    if (index >= 0 && index < worksCount) {
        return commissionWorks[index];
    }
    return String("");
}

bool TeacherCommissionMember::addCommissionWork(const String work) {
    if (worksCount < MAX_COMMISSION_WORKS) {
        commissionWorks[worksCount] = work;
        worksCount++;
        return true;
    }
    return false;
}

bool TeacherCommissionMember::setCommissionWork(int index, const String work) {
    if (index >= 0 && index < worksCount) {
        commissionWorks[index] = work;
        return true;
    }
    return false;
}

void TeacherCommissionMember::input(istream& in) {
    Human::input(in);

    in.ignore(1000, '\n');

    cout << "������� ���������: ";
    in >> position;

    cout << "������� �������������: ";
    in >> specialty;

    cout << "������� ���������� ������� ������: ";
    in >> publicationsCount;
    in.ignore(1000, '\n');

    if (publicationsCount > MAX_PUBLICATIONS) {
        publicationsCount = MAX_PUBLICATIONS;
    }

    for (int i = 0; i < publicationsCount; i++) {
        cout << "������� ������� ���� " << (i + 1) << ": ";
        in >> scientificPublications[i];
    }

    cout << "������� �������� ��������: ";
    in >> commissionName;

    cout << "������� ���������� ������� �������������: ";
    in >> biographyCount;
    in.ignore(1000, '\n');

    if (biographyCount > MAX_BIOGRAPHY) {
        biographyCount = MAX_BIOGRAPHY;
    }

    for (int i = 0; i < biographyCount; i++) {
        cout << "������� ����� ������������� " << (i + 1) << ": ";
        in >> biography[i];
    }

    cout << "������� ���������� ����� � ��������: ";
    in >> worksCount;
    in.ignore(1000, '\n');

    if (worksCount > MAX_COMMISSION_WORKS) {
        worksCount = MAX_COMMISSION_WORKS;
    }

    for (int i = 0; i < worksCount; i++) {
        cout << "������� ������ � �������� " << (i + 1) << ": ";
        in >> commissionWorks[i];
    }
}

void TeacherCommissionMember::output(ostream& out) const {
    Human::output(out);

    out << left;
    out << setw(20) << "���������:" << position << "\n"
        << setw(20) << "�������������:" << specialty << "\n"
        << setw(20) << "������� �����:" << publicationsCount << " ����������\n";

    for (int i = 0; i < publicationsCount; i++) {
        out << "  " << setw(2) << (i + 1) << ". " << scientificPublications[i] << "\n";
    }

    out << setw(20) << "��������:" << commissionName << "\n"
        << setw(20) << "�������������:" << biographyCount << " �������\n";

    for (int i = 0; i < biographyCount; i++) {
        out << "  " << setw(2) << (i + 1) << ". " << biography[i] << "\n";
    }

    out << setw(20) << "������ � ��������:" << worksCount << " �����\n";

    for (int i = 0; i < worksCount; i++) {
        out << "  " << setw(2) << (i + 1) << ". " << commissionWorks[i] << "\n";
    }
}

istream& operator>>(istream& in, TeacherCommissionMember& teacherMember) {
    teacherMember.input(in);
    return in;
}

ostream& operator<<(ostream& out, const TeacherCommissionMember& teacherMember) {
    teacherMember.output(out);
    return out;
}