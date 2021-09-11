#include <iostream>
#include <string>
#include <fstream>
#include <fstream>
#include <stdlib.h>
//#include <sys/types.h>
#include <sys/stat.h>


void exitWithError(std::string error) {
	std::cout << error << std::endl;
	exit(1);
}

bool isDirectory(char *argv) {
	struct stat info;
	stat(argv, &info);
	if (info.st_mode & S_IFDIR) { return true;}
	else { return false; }
}

int main(int argc, char *argv[]) {

	if (argc == 4) {
		std::string filename = std::string(argv[1]);
		std::string s1 = std::string(argv[2]);
		std::string s2 = std::string(argv[3]);

		if (s1.empty() || s2.empty()) {
			exitWithError("s1 and s2 cannot be empty");
		}

		std::ifstream in(filename);
		if (!in) {
			exitWithError(filename + ": File cannot be opened for reading");
		}
		if (isDirectory(argv[1])) {
			exitWithError(filename + " is a directory");
		}

		std::ofstream out( filename + ".replace", std::ios::trunc);
		if (!out) {
			exitWithError(filename + ".replace: File cannot be opened for writing");
		}

		int s1Length(s1.length());
		int s2Length(s2.length());

		while(in) {
			std::string line;
			getline(in, line);

			unsigned long pos(line.find(s1));
			while (pos != std::string::npos) {
				line.erase(pos, s1Length);
				line.insert(pos, s2);
				pos = line.find(s1, pos + s2Length);
			}
			out << line << std::endl;
		}
	}
	else {
		std::cout << "Wrong number of arguments" << std::endl;
	}
	return 0;
}
