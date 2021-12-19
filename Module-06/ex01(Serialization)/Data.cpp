//
// Created by Herminia Woodwright on 12/19/21.
//

#include "Data.hpp"


Data::Data(std::string name) : name(name) {}

Data::Data(const Data &data) {
	*this = data;
}

Data &Data::operator=(const Data &data) {
	if (this != &data)
		this->name = data.name;
	return *this;
}

Data::~Data() { }

const std::string &Data::getName() const {
	return name;
}
