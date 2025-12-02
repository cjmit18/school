#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Electronics.h"

class Computer : public Electronics {
	private:
		std::string OS;
	public:
		std::string toString() const;
		Computer(std::string, std::string);
};
#endif
