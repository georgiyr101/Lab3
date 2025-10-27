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
        cout << "\n Главное меню \n";
        cout << "1. Работа с Teacher\n";
        cout << "2. Работа с CommissionMember\n";
        cout << "3. Работа с TeacherCommissionMember\n";
        cout << "0. Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
        case 1: {
            Teacher t;
            menuTeacher(t);
            break;
        }
        case 2: {
            CommissionMember c;
            menuCommissionMember(c);
            break;
        }
        case 3: {
            TeacherCommissionMember tcm;
            menuTeacherCommissionMember(tcm);
            break;
        }
        case 0:
            cout << "Выход из программы...\n";
            return 0;
        default:
            cout << "Неверный выбор!\n";
        }
    }
}




