#pragma once

#include <iostream>
#include <string>

class Person {
private:
	std::string name;
	std::string surname;
	int age;
public:
	
	void display() {
		std::cout << "Name: " << name << "| Surname: " << surname << "| Age: " << age<< std::endl;
	}
	inline int getAge() { return age; }
	void setName() {
		std::cin >> name;
	}
	void setSurname() {
		std::cin >> surname;
	}

	void setAge() {
		std::cin >> age;
	}

};
