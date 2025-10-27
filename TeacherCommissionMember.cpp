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

//void TeacherCommissionMember::input(istream& in) {
//    Human::input(in);
//    in.ignore(1000, '\n');
//    cout << "Введите должность: ";
//    in >> position;
//    cout << "Введите специальность: ";
//    in >> specialty;
//    cout << "Введите количество научных трудов: ";
//    in >> publicationsCount;
//    in.ignore(1000, '\n');
//    if (publicationsCount > MAX_PUBLICATIONS) {
//        publicationsCount = MAX_PUBLICATIONS;
//    }
//    for (int i = 0; i < publicationsCount; i++) {
//        cout << "Введите научный труд " << (i + 1) << ": ";
//        in >> scientificPublications[i];
//    }
//    cout << "Введите название комиссии: ";
//    in >> commissionName;
//    cout << "Введите количество пунктов автобиографии: ";
//    in >> biographyCount;
//    in.ignore(1000, '\n');
//    if (biographyCount > MAX_BIOGRAPHY) {
//        biographyCount = MAX_BIOGRAPHY;
//    }
//    for (int i = 0; i < biographyCount; i++) {
//        cout << "Введите пункт автобиографии " << (i + 1) << ": ";
//        in >> biography[i];
//    }
//    cout << "Введите количество работ в комиссии: ";
//    in >> worksCount;
//    in.ignore(1000, '\n');
//    if (worksCount > MAX_COMMISSION_WORKS) {
//        worksCount = MAX_COMMISSION_WORKS;
//    }
//
//    for (int i = 0; i < worksCount; i++) {
//        cout << "Введите работу в комиссии " << (i + 1) << ": ";
//        in >> commissionWorks[i];
//    }
//}
//
//void TeacherCommissionMember::output(ostream& out) const {
//    Human::output(out);
//
//    out << left
//        << setw(20) << position
//        << setw(25) << specialty
//        << setw(25) << commissionName;
//
//    String worksList = "";
//    for (int i = 0; i < worksCount; i++) {
//        if (i > 0) worksList += ", ";
//        worksList += commissionWorks[i];
//    }
//    out << setw(40) << worksList;
//}

void TeacherCommissionMember::printHeader(ostream& out) const {
    Human::printHeader(out);

    out << left
        << setw(20) << "Должность"
        << setw(25) << "Специальность"
        << setw(25) << "Комиссия"
        << setw(40) << "Работы в комиссии"
        << "\n";
}

istream& operator>>(istream& in, TeacherCommissionMember& teacherMember) {
    /*teacherMember.input(in);*/

    return in;
}

ostream& operator<<(ostream& out, const TeacherCommissionMember& teacherMember) {
    teacherMember.output(out);
    return out;
}
