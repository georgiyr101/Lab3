#include "Menu.h"

void menuHuman(Human& h) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- ���� Human ---\n";
        cout << "1. ������ ������\n";
        cout << "2. �������� ������\n";
        cout << "3. �������� ���\n";
        cout << "4. �������� �������\n";
        cout << "5. �������� ��� ��������\n";
        cout << "6. �������� ���\n";
        cout << "7. �������� �������\n";
        cout << "8. �������� ��� ��������\n";
        cout << "0. �����\n";
        cout << "��� �����: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
        case 1:
            h.input(cin);
            break;
        case 2:
            h.output(cout);
            break;
        case 3: {
            cout << "����� ���: ";
            String s;
            cin >> s;
            h.setFirstName(s);
            break;
        }
        case 4: {
            cout << "����� �������: ";
            String s;
            cin >> s;
            h.setLastName(s);
            break;
        }
        case 5: {
            cout << "����� ��� ��������: ";
            int y;
            cin >> y;
            h.setBirthYear(y);
            break;
        }
        case 6:
            cout << "���: " << h.getFirstName() << "\n";
            break;
        case 7:
            cout << "�������: " << h.getLastName() << "\n";
            break;
        case 8:
            cout << "��� ��������: " << h.getBirthYear() << "\n";
            break;
        case 0:
            return;
        default:
            cout << "������ ������!\n";
        }
        system("pause");
    }
}


void menuTeacher(Teacher& t) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- ���� Teacher ---\n";
        cout << "1. ������ ������\n";
        cout << "2. �������� ������\n";
        cout << "3. �������� ������� ����\n";
        cout << "4. �������� ���������\n";
        cout << "5. �������� �������������\n";
        cout << "6. �������� ���\n";
        cout << "7. �������� �������\n";
        cout << "8. �������� ��� ��������\n";
        cout << "9. �������� ���������� �� �������\n";
        cout << "0. �����\n";
        cout << "��� �����: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
        case 1:
            t.input(cin);
            break;
        case 2:
            t.output(cout);
            break;
        case 3: {
            cout << "������� �������� ����������: ";
            String pub;
            cin >> pub;
            if (!t.addScientificPublication(pub))
                cout << "������ �������� ������ ����������!\n";
            break;
        }
        case 4: {
            cout << "����� ���������: ";
            String pos;
            cin >> pos;
            t.setPosition(pos);
            break;
        }
        case 5: {
            cout << "����� �������������: ";
            String sp;
            cin >> sp;
            t.setSpecialty(sp);
            break;
        }
        case 6: {
            cout << "����� ���: ";
            String name;
            cin >> name;
            t.setFirstName(name);
            break;
        }
        case 7: {
            cout << "����� �������: ";
            String last;
            cin >> last;
            t.setLastName(last);
            break;
        }
        case 8: {
            cout << "����� ��� ��������: ";
            int year;
            cin >> year;
            t.setBirthYear(year);
            break;
        }
        case 9: {
            int i;
            cout << "������� ������ ����������: ";
            cin >> i;
            cout << "����������: " << t.getScientificPublication(i) << "\n";
            break;
        }
        case 0:
            return;
        default:
            cout << "������ ������!\n";
        }
    }
}


void menuCommissionMember(CommissionMember& c) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- ���� CommissionMember ---\n";
        cout << "1. ������ ������\n";
        cout << "2. �������� ������\n";
        cout << "3. �������� ����� �������������\n";
        cout << "4. �������� �������� ��������\n";
        cout << "5. �������� ���\n";
        cout << "6. �������� �������\n";
        cout << "7. �������� ��� ��������\n";
        cout << "8. �������� ����� ������������� �� �������\n";
        cout << "0. �����\n";
        cout << "��� �����: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
        case 1:
            c.input(cin);
            break;
        case 2:
            c.output(cout);
            break;
        case 3: {
            cout << "������� ����� �������������: ";
            String line;
            cin >> line;
            if (!c.addBiography(line))
                cout << "������ �������� ������ �������!\n";
            break;
        }
        case 4: {
            cout << "������� ����� �������� ��������: ";
            String name;
            cin >> name;
            c.setCommissionName(name);
            break;
        }
        case 5: {
            cout << "����� ���: ";
            String name;
            cin >> name;
            c.setFirstName(name);
            break;
        }
        case 6: {
            cout << "����� �������: ";
            String last;
            cin >> last;
            c.setLastName(last);
            break;
        }
        case 7: {
            cout << "����� ��� ��������: ";
            int year;
            cin >> year;
            c.setBirthYear(year);
            break;
        }
        case 8: {
            int i;
            cout << "������� ������: ";
            cin >> i;
            cout << "���������: " << c.getBiography(i) << "\n";
            break;
        }
        case 0:
            return;
        default:
            cout << "������ ������!\n";
        }
    }
}


void menuTeacherCommissionMember(TeacherCommissionMember& tcm) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- ���� TeacherCommissionMember ---\n";
        cout << "1. ������ ��� ������\n";
        cout << "2. �������� ��� ������\n";
        cout << "3. �������� ������� ����\n";
        cout << "4. �������� ����� �������������\n";
        cout << "5. �������� ������ � ��������\n";
        cout << "6. �������� ���������\n";
        cout << "7. �������� �������������\n";
        cout << "8. �������� �������� ��������\n";
        cout << "9. �������� ���\n";
        cout << "10. �������� �������\n";
        cout << "11. �������� ��� ��������\n";
        cout << "0. �����\n";
        cout << "��� �����: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
        case 1:
            tcm.input(cin);
            break;
        case 2:
            tcm.output(cout);
            break;
        case 3: {
            cout << "������� ����������: ";
            String pub;
            cin >> pub;
            if (!tcm.addScientificPublication(pub))
                cout << "��������� ���������� ����������!\n";
            break;
        }
        case 4: {
            cout << "������� ����� �������������: ";
            String bio;
            cin >> bio;
            if (!tcm.addBiography(bio))
                cout << "��������� ���������� �������!\n";
            break;
        }
        case 5: {
            cout << "������� ������ � ��������: ";
            String work;
            cin >> work;
            if (!tcm.addCommissionWork(work))
                cout << "��������� ���������� �����!\n";
            break;
        }
        case 6: {
            cout << "����� ���������: ";
            String pos;
            cin >> pos;
            tcm.setPosition(pos);
            break;
        }
        case 7: {
            cout << "����� �������������: ";
            String sp;
            cin >> sp;
            tcm.setSpecialty(sp);
            break;
        }
        case 8: {
            cout << "����� �������� ��������: ";
            String name;
            cin >> name;
            tcm.setCommissionName(name);
            break;
        }
        case 9: {
            cout << "����� ���: ";
            String n;
            cin >> n;
            tcm.setFirstName(n);
            break;
        }
        case 10: {
            cout << "����� �������: ";
            String l;
            cin >> l;
            tcm.setLastName(l);
            break;
        }
        case 11: {
            cout << "����� ��� ��������: ";
            int y;
            cin >> y;
            tcm.setBirthYear(y);
            break;
        }
        case 0:
            return;
        default:
            cout << "������ ������!\n";
        }
    }
}