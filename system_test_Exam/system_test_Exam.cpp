#include <iostream>
#include <map>
#include "Admin.h"
#include "Student.h"
#include "User.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	
	User* admin = new Admin();
	User* student = new Student("User", "User", "Anton", "Vladimir", 29);

	cout << boolalpha << admin->checkPassword("Admin", "228855") << endl;
	cout << boolalpha << student->checkPassword("Admin", "228855") << endl;

	map<string, User*> users;

	users["Admin"] = admin;
	users["User"] = student;

	string login;
	string password;
	string name;
	string address;
	int age;
	cout << "Введите логин: " << endl;
	cin >> login;
	cout << "Введите пароль: " << endl;
	cin >> password;

	
	
	int choice;
	bool loginIn = false;
	while (loginIn == false) {
		system("sls");
	}
	cout << "Меню: " << endl;
	cout << "1. Логин: " << endl;
	cout << "2. Sing up: " << endl;
	cin >> choice;
	

	switch (choice) {
	case 1:
		cout << "Введите логин: " << endl;
		cin >> login;
		cout << "Введите пароль: " << endl;
		cin >> password;
		if (users.count(login) &&
			users[login]->checkPassword(login, password)) {
			loginIn = true;
			cout << "Пользователь подтверждён";
		}
		else {
			cout << "Ошибка входа";
		}
		break;
	case 2:
		if (!users.count(login)) {
			cout << "Придумайте логин: " << endl;
			cin >> login;
			cout << "Придумайте пароль: " << endl;
			cin >> password;
			cout << "Введите имя: " << endl;
			cin >> name;
			cout << "Введите адрес: " << endl;
			cin >> address;
			cout << "Введите возраст: " << endl;
			cin >> age;

			users[login] = new Student(login, password, name, address, age);
			loginIn = true;
			cout << "Поздравляю ваш аккаунт создан" << endl;
		}
		else {
			cout << "Ошибка! этот логин уже используется!" << endl;
		}
			break;
	}
	for (auto user : users) {
		user.second->print();
	}

}
