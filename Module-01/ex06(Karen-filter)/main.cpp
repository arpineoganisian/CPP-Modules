#include "Karen.hpp"

int main(int argc, char *argv[]) {

	if (argc == 2) {
		std::string logLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		std::string level(argv[1]);
		int i = 0;
		while (i < 4) {
			if (level == logLevels[i]) {
				break;
			}
			i++;
		}
		Karen karen;
		switch (i) {
			case 0:
				karen.complain("DEBUG");
				std::cout << std::endl;
			case 1:
				karen.complain("INFO");
				std::cout << std::endl;
			case 2:
				karen.complain("WARNING");
				std::cout << std::endl;
			case 3:
				karen.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]"
				<<std::endl;
				break;
		}
	} else {
		std::cout << "Wrong number of arguments" << std::endl;
	}
	return 0;
}
