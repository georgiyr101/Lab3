#include "Menu.h"

void menuHuman(Human& h) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- Меню Human ---\n";
        cout << "1. Ввести данные\n";
        cout << "2. Показать данные\n";
        cout << "3. Изменить имя\n";
        cout << "4. Изменить фамилию\n";
        cout << "5. Изменить год рождения\n";
        cout << "6. Показать имя\n";
        cout << "7. Показать фамилию\n";
        cout << "8. Показать год рождения\n";
        cout << "0. Назад\n";
        cout << "Ваш выбор: ";
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
            cout << "Новое имя: ";
            String s;
            cin >> s;
            h.setFirstName(s);
            break;
        }
        case 4: {
            cout << "Новая фамилия: ";
            String s;
            cin >> s;
            h.setLastName(s);
            break;
        }
        case 5: {
            cout << "Новый год рождения: ";
            int y;
            cin >> y;
            h.setBirthYear(y);
            break;
        }
        case 6:
            cout << "Имя: " << h.getFirstName() << "\n";
            break;
        case 7:
            cout << "Фамилия: " << h.getLastName() << "\n";
            break;
        case 8:
            cout << "Год рождения: " << h.getBirthYear() << "\n";
            break;
        case 0:
            return;
        default:
            cout << "Ошибка выбора!\n";
        }
        system("pause");
    }
}


void menuTeacher(Teacher& t) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- Меню Teacher ---\n";
        cout << "1. Ввести данные\n";
        cout << "2. Показать данные\n";
        cout << "3. Добавить научный труд\n";
        cout << "4. Изменить должность\n";
        cout << "5. Изменить специальность\n";
        cout << "6. Изменить имя\n";
        cout << "7. Изменить фамилию\n";
        cout << "8. Изменить год рождения\n";
        cout << "9. Показать публикацию по индексу\n";
        cout << "0. Назад\n";
        cout << "Ваш выбор: ";
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
            cout << "Введите название публикации: ";
            String pub;
            cin >> pub;
            if (!t.addScientificPublication(pub))
                cout << "Нельзя добавить больше публикаций!\n";
            break;
        }
        case 4: {
            cout << "Новая должность: ";
            String pos;
            cin >> pos;
            t.setPosition(pos);
            break;
        }
        case 5: {
            cout << "Новая специальность: ";
            String sp;
            cin >> sp;
            t.setSpecialty(sp);
            break;
        }
        case 6: {
            cout << "Новое имя: ";
            String name;
            cin >> name;
            t.setFirstName(name);
            break;
        }
        case 7: {
            cout << "Новая фамилия: ";
            String last;
            cin >> last;
            t.setLastName(last);
            break;
        }
        case 8: {
            cout << "Новый год рождения: ";
            int year;
            cin >> year;
            t.setBirthYear(year);
            break;
        }
        case 9: {
            int i;
            cout << "Введите индекс публикации: ";
            cin >> i;
            cout << "Публикация: " << t.getScientificPublication(i) << "\n";
            break;
        }
        case 0:
            return;
        default:
            cout << "Ошибка выбора!\n";
        }
    }
}


void menuCommissionMember(CommissionMember& c) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- Меню CommissionMember ---\n";
        cout << "1. Ввести данные\n";
        cout << "2. Показать данные\n";
        cout << "3. Добавить пункт автобиографии\n";
        cout << "4. Изменить название комиссии\n";
        cout << "5. Изменить имя\n";
        cout << "6. Изменить фамилию\n";
        cout << "7. Изменить год рождения\n";
        cout << "8. Показать пункт автобиографии по индексу\n";
        cout << "0. Назад\n";
        cout << "Ваш выбор: ";
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
            cout << "Введите пункт автобиографии: ";
            String line;
            cin >> line;
            if (!c.addBiography(line))
                cout << "Нельзя добавить больше пунктов!\n";
            break;
        }
        case 4: {
            cout << "Введите новое название комиссии: ";
            String name;
            cin >> name;
            c.setCommissionName(name);
            break;
        }
        case 5: {
            cout << "Новое имя: ";
            String name;
            cin >> name;
            c.setFirstName(name);
            break;
        }
        case 6: {
            cout << "Новая фамилия: ";
            String last;
            cin >> last;
            c.setLastName(last);
            break;
        }
        case 7: {
            cout << "Новый год рождения: ";
            int year;
            cin >> year;
            c.setBirthYear(year);
            break;
        }
        case 8: {
            int i;
            cout << "Введите индекс: ";
            cin >> i;
            cout << "Биография: " << c.getBiography(i) << "\n";
            break;
        }
        case 0:
            return;
        default:
            cout << "Ошибка выбора!\n";
        }
    }
}


void menuTeacherCommissionMember(TeacherCommissionMember& tcm) {
    int choice;
    while (true) {
        system("cls");
        cout << "\n--- Меню TeacherCommissionMember ---\n";
        cout << "1. Ввести все данные\n";
        cout << "2. Показать все данные\n";
        cout << "3. Добавить научный труд\n";
        cout << "4. Добавить пункт автобиографии\n";
        cout << "5. Добавить работу в комиссии\n";
        cout << "6. Изменить должность\n";
        cout << "7. Изменить специальность\n";
        cout << "8. Изменить название комиссии\n";
        cout << "9. Изменить имя\n";
        cout << "10. Изменить фамилию\n";
        cout << "11. Изменить год рождения\n";
        cout << "0. Назад\n";
        cout << "Ваш выбор: ";
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
            cout << "Введите публикацию: ";
            String pub;
            cin >> pub;
            if (!tcm.addScientificPublication(pub))
                cout << "Превышено количество публикаций!\n";
            break;
        }
        case 4: {
            cout << "Введите пункт автобиографии: ";
            String bio;
            cin >> bio;
            if (!tcm.addBiography(bio))
                cout << "Превышено количество пунктов!\n";
            break;
        }
        case 5: {
            cout << "Введите работу в комиссии: ";
            String work;
            cin >> work;
            if (!tcm.addCommissionWork(work))
                cout << "Превышено количество работ!\n";
            break;
        }
        case 6: {
            cout << "Новая должность: ";
            String pos;
            cin >> pos;
            tcm.setPosition(pos);
            break;
        }
        case 7: {
            cout << "Новая специальность: ";
            String sp;
            cin >> sp;
            tcm.setSpecialty(sp);
            break;
        }
        case 8: {
            cout << "Новое название комиссии: ";
            String name;
            cin >> name;
            tcm.setCommissionName(name);
            break;
        }
        case 9: {
            cout << "Новое имя: ";
            String n;
            cin >> n;
            tcm.setFirstName(n);
            break;
        }
        case 10: {
            cout << "Новая фамилия: ";
            String l;
            cin >> l;
            tcm.setLastName(l);
            break;
        }
        case 11: {
            cout << "Новый год рождения: ";
            int y;
            cin >> y;
            tcm.setBirthYear(y);
            break;
        }
        case 0:
            return;
        default:
            cout << "Ошибка выбора!\n";
        }
    }
}