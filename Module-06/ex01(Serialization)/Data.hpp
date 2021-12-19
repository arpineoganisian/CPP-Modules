//
// Created by Herminia Woodwright on 12/19/21.
//

#ifndef EX01_SERIALIZATION__DATA_HPP
#define EX01_SERIALIZATION__DATA_HPP


#include <string>

class Data {
private:
	std::string name;
public:
	Data(std::string name);
	Data(const Data &data);
	Data& operator=(const Data &data);
	virtual ~Data();

	const std::string &getName() const;
};


#endif //EX01_SERIALIZATION__DATA_HPP
