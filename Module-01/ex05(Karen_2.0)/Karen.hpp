#ifndef KAREN_H
#define KAREN_H


#include <string>
#include <iostream>

class Karen {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Karen();
	void complain(std::string level);
	virtual ~Karen();
};


#endif //KAREN_H
