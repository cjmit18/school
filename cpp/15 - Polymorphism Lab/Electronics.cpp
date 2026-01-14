#include "Electronics.h"
#include <string>
#include <sstream>

Electronics::Electronics(std::string brandName) 
		: brand{brandName}{}
		
std::string Electronics::toString() const
{
	std::ostringstream output;
	output << "The brand name is " << brand;
	return output.str();
}
