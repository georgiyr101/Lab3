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

    cout << "Введите должность: ";
    in >> position;

    cout << "Введите специальность: ";
    in >> specialty;

    cout << "Введите количество научных трудов: ";
    in >> publicationsCount;
    in.ignore(1000, '\n');

    if (publicationsCount > MAX_PUBLICATIONS) {
        publicationsCount = MAX_PUBLICATIONS;
    }

    for (int i = 0; i < publicationsCount; i++) {
        cout << "Введите научный труд " << (i + 1) << ": ";
        in >> scientificPublications[i];
    }

    cout << "Введите название комиссии: ";
    in >> commissionName;

    cout << "Введите количество пунктов автобиографии: ";
    in >> biographyCount;
    in.ignore(1000, '\n');

    if (biographyCount > MAX_BIOGRAPHY) {
        biographyCount = MAX_BIOGRAPHY;
    }

    for (int i = 0; i < biographyCount; i++) {
        cout << "Введите пункт автобиографии " << (i + 1) << ": ";
        in >> biography[i];
    }

    cout << "Введите количество работ в комиссии: ";
    in >> worksCount;
    in.ignore(1000, '\n');

    if (worksCount > MAX_COMMISSION_WORKS) {
        worksCount = MAX_COMMISSION_WORKS;
    }

    for (int i = 0; i < worksCount; i++) {
        cout << "Введите работу в комиссии " << (i + 1) << ": ";
        in >> commissionWorks[i];
    }
}

void TeacherCommissionMember::output(ostream& out) const {
    Human::output(out);

    out << left;
    out << setw(20) << "Должность:" << position << "\n"
        << setw(20) << "Специальность:" << specialty << "\n"
        << setw(20) << "Научные труды:" << publicationsCount << " публикаций\n";

    for (int i = 0; i < publicationsCount; i++) {
        out << "  " << setw(2) << (i + 1) << ". " << scientificPublications[i] << "\n";
    }

    out << setw(20) << "Комиссия:" << commissionName << "\n"
        << setw(20) << "Автобиография:" << biographyCount << " пунктов\n";

    for (int i = 0; i < biographyCount; i++) {
        out << "  " << setw(2) << (i + 1) << ". " << biography[i] << "\n";
    }

    out << setw(20) << "Работы в комиссии:" << worksCount << " работ\n";

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