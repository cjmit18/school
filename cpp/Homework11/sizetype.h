#include <string>
#include <array>

class stringSize {
    private:
        std::string sizeString;
    public:
        stringSize(const std::string& str) : sizeString(str) {}
        stringSize() : sizeString("") {} // Default constructor
        size_t getObjectSize() const {
            return sizeof(sizeString);
        }
    };

class stringAndDoubleSum {
    private:
    std::string str;
    double num = 3.14;
    public:
        stringAndDoubleSum(const std::string& s, double n) : str(s), num(n) {} 

    size_t getObjectSize() const {
        return sizeof(str) + sizeof(num);
    }
};

class arrayofStrings {
    private:
    std::array<std::string, 10> strArray;;
    public:
    size_t getObjectSize() const {
        return sizeof(strArray);
    }
};

class arrayUsingBrackets {
    private:
    std::string strArray[10];

    public:
    size_t getObjectSize() const {
        return sizeof(strArray);
    }
};

class objectSize {
    private:
    stringSize sizeStringMember{};

    public:

    size_t getObjectSize() const {
        return sizeStringMember.getObjectSize();
    }
};

class hundredClassObjectsArray {
    private:
    std::array<stringSize, 100> classObjects;

    public:
    size_t getObjectSize() const {
        return sizeof(classObjects);
    }
};

class hundredClassObjectsBrackets {
    private:
    stringSize classObjects[100];

    public:
    size_t getObjectSize() const {
        return sizeof(classObjects);
    }
};
