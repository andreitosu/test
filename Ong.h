#include <iostream>
#include <string>
#include <vector>

class ONG{
    public:
        virtual std::string getName() = 0;
        virtual float numeber() = 0;
        virtual void addPeople() = 0;
        virtual void makeActivity() =0;
};