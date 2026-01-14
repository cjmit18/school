#ifndef LAB12_H
#define LAB12_H

class Lab12{

    private:
    int exampleMember = 0;
    
    public:
    void setExampleMember(int value) {
        exampleMember = value;
    };
    int getExampleMember() const {
        return exampleMember;
    };
};
#endif