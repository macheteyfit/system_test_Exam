#pragma once
#include <iostream>

class User
{
protected:
	std::string login;
	std::string password;
public:
	User(std::string loginP, std::string passwordP) :
		login{ loginP }, password{ passwordP } {}

	bool checkPassword(std::string loginP, std::string passwordP) {
		return (login == loginP && password == passwordP);

	}

	virtual void print() = 0;
};

