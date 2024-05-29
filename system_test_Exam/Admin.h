#pragma once
#include <iostream>
#include "User.h"

class Admin : public User
{

public:
	Admin() : User("Admin", "228855") {}

	void print() {
		printf("Admin's login:  %s\n\n", login.data());
	}
};

