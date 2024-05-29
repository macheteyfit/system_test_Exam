#pragma once
#include <iostream>
#include "User.h"

class Student : public User
{
private:
	std::string name;
	std::string address;
	int age;
public:
	Student(std::string loginP,
		std::string passwordP,
		std::string nameP,
		std::string addressP,
		int ageP) : User(loginP, passwordP),
		name{ nameP }, address{ addressP }, age{ ageP } {}

	void print() {
		printf("Student's login: Student's name: %s\nStudent's address: %s\nStudent's age: %i\n\n",
		login.data(), name.data(), address.data(), age);

	}

};

