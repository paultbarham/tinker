// ConsoleApplication for tinkering
// Paul T. Barham

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "tchar.h"


class Animal {
public:
	virtual int noise() = 0;
};

class Cat : public Animal {
public:
	int noise() {
		return 1;
	}
};

class Dog : public Animal {
public:
	int noise() {
		return 2;
	}
};

void letsHear(Animal *a) {
	if (a->noise() == 1) { std::cout << "Animal is a Cat." << std::endl;  }
	else if (a->noise() == 2) {
		std::cout << "Animal is a Dog." << std::endl;
	}
	else { std::cout << "Animal is just an Animal." << std::endl;  }
}


int _tmain(int argc, _TCHAR* argv[])
{
	Cat *c;
	Dog *d;

	std::cerr << "Creating one Cat and one Dog object" << std::endl;

	c = new Cat();
	d = new Dog();
	letsHear(c);
	letsHear(d); 

	std::cerr << "Deleting one Cat and one Dog object" << std::endl;
	delete c;
	delete d;

	return 0;
}

