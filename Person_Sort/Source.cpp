#include <iostream>
#include "person.h"

using namespace std;

void sort_mass(Person **mass, int n);
void comp_person(Person** temp1, Person** temp2);

int main() {
	Person* mass[100];
	char choice = 'y';
	int count = 0;
	do {
		mass[count] = new Person();
		cout << "Enter name" << endl;
		mass[count]->setName();
		cout << "Enter surname" << endl;
		mass[count]->setSurname();
		cout << "Enter age" << endl;
		mass[count]->setAge();
		count++;
		cout << " if you want to continue enter y" << endl;
		cin >> choice;
	} while (choice == 'y');

	for (int i = 0; i < count; i++)
		mass[i]->display();

	cout << " Sort mass" << endl;
	sort_mass(mass,count);
	for (int i = 0; i < count; i++)
		mass[i]->display();
	return 0;
}

void sort_mass(Person** mass, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			comp_person(mass + i, mass + j);
}

void comp_person(Person** temp1, Person** temp2) {
	Person *pers = NULL;
	if ((*temp1)->getAge() > (**temp2).getAge()) {
		pers = *temp1;
		*temp1 = *temp2;
		*temp2 = pers;
	
	}
}