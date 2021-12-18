#include <iostream>

void printChar(std::string strValue) {

}


int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout << "Wrong number of arguments!" << std::endl;
		return (0);
	}

	std::cout << "char: " << argv[1] << std::endl;
	std::cout << "int: " << argv << std::endl;
	std::cout << "float: " << std::endl;
	std::cout << "double: " << std::endl;

	return 0;
}
