#include "Computer.h"
#include <string>
#include <sstream>

Computer::Computer(std::string brandName, std::string OSname) 
	// explicitly call base-class constructor                  
   	: Electronics(brandName),
	  OS{OSname} {}
		
std::string Computer::toString() const
{
	std::ostringstream output;
	output << Electronics::toString() << ", and the OS is " << OS << std::endl;
	//"The brand name is " << brand;
	return output.str();
}
