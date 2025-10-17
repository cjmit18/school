#include <string>

class Dog {
	
	private:
		std::string breed;
	public:
		Dog(){}
		
		Dog(std::string theBreed)
			:breed{theBreed} {}
		
		std::string getBreed() {
			return breed;
		}
};
