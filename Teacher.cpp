#include "Teacher.h"
#include <iostream>
#include <iomanip>

String Teacher::getPosition() const { return position; }

String Teacher::getSpecialty() const { return specialty; }

int Teacher::getPublicationsCount() const {return publicationsCount;}

String Teacher::getScientificPublication(int index) const 
{
    if (index >= 0 && index < publicationsCount) 
    {
        return scientificPublications[index];
    }
    return String("");
}

void Teacher::setPosition(const String position) {this->position = position;}

void Teacher::setSpecialty(const String specialty) 
{
    this->specialty = specialty;
}

bool Teacher::addScientificPublication(const String publication) 
{
    if (publicationsCount < MAX_PUBLICATIONS) 
    {
        scientificPublications[publicationsCount] = publication;
        publicationsCount++;
        return true;
    }
    return false;
}

bool Teacher::setScientificPublication(int index, const String publication) 
{
    if (index >= 0 && index < publicationsCount) 
    {
        scientificPublications[index] = publication;
        return true;
    }
    return false;
}

void Teacher::input(istream& in)
{
    Human::input(in);
    in.ignore(1000, '\n');
    cout << "Введите должность: ";
    in >> this->position;

    cout << "Введите специальность: ";
    in >> this->specialty;

    cout << "Введите количество научных трудов: ";
    in >> this->publicationsCount;
    in.ignore(1000, '\n');

    if (publicationsCount > MAX_PUBLICATIONS) 
    {
        publicationsCount = MAX_PUBLICATIONS;
    }

    for (int i = 0; i < publicationsCount; i++) 
    {
        cout << "Введите научный труд " << (i + 1) << ": ";
        in >> this->scientificPublications[i];
    }
}

void Teacher::output(ostream& out) const {
    Human::output(out);

    out << left;
    out << setw(15) << "Должность:" << position << "\n"
        << setw(15) << "Специальность:" << specialty << "\n"
        << setw(15) << "Научные труды:" << publicationsCount << "\n";

    for (int i = 0; i < publicationsCount; i++) out << setw(4) << "" << setw(3) << (i + 1) << ". " << scientificPublications[i] << "\n";
    
}

istream& operator>>(istream& in, Teacher& teacher)
{
    teacher.input(in);
    return in;
}

ostream& operator<<(ostream& out, const Teacher& teacher) 
{
    teacher.output(out);
    return out;
}