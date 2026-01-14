#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include <string>

class Electronics {
	private:
		std::string brand;
	public:
		virtual std::string toString() const;
		
		// STEP 1 - add a default constructor:
		Electronics(std::string);
		
};
#endif
