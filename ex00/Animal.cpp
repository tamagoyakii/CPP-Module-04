#include "Animal.hpp"

Animal::Animal(void): _type("Human") {
	std::cout << "Animal " << this->_type << " created" << std::endl;
}

Animal::Animal(const Animal& ref): _type(ref.getType()) {
	std::cout << "Animal " << this->_type << " copied" << std::endl;
}

Animal& Animal::operator=(const Animal& ref) {
	this->_type = ref.getType();
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal " << this->_type << " destroyed" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Animal is making a sound... shh....." << std::endl;
}

std::string Animal::getType(void) const {
	return this->_type;
}