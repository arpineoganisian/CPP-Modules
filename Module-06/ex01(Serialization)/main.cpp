#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

void someRandomLogicWithSerializedData(uintptr_t raw) {
	std::cout << raw << std::endl;
}

int main() {

	Data data("Arpine");
	std::cout << "before serialization: " << data.getName() << " "
			<< &data << std::endl;

	uintptr_t uintptr = serialize(&data);
	someRandomLogicWithSerializedData(uintptr);
	Data *serialized = deserialize(uintptr);
	std::cout << "after serialization: " << serialized->getName() << "  "
		<< serialized << std::endl;

	return 0;
}
