#include <iostream>
#include "Human.h"
#include "Teacher.h"
#include "CommissionMember.h"
#include "TeacherCommissionMember.h"
#include "Menu.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int choice;
    while (true) {
        system("cls");
        cout << "\n ������� ���� \n";
        cout << "1. ������ � Human\n";
        cout << "2. ������ � Teacher\n";
        cout << "3. ������ � CommissionMember\n";
        cout << "4. ������ � TeacherCommissionMember\n";
        cout << "0. �����\n";
        cout << "��� �����: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
        case 1: {
            Human h;
            menuHuman(h);
            break;
        }
        case 2: {
            Teacher t;
            menuTeacher(t);
            break;
        }
        case 3: {
            CommissionMember c;
            menuCommissionMember(c);
            break;
        }
        case 4: {
            TeacherCommissionMember tcm;
            menuTeacherCommissionMember(tcm);
            break;
        }
        case 0:
            cout << "����� �� ���������...\n";
            return 0;
        default:
            cout << "�������� �����!\n";
        }
    }
}




