#include <iostream>
#include <thread>

class SecondProcess {

public:
    SecondProcess(){
        std::cout << "Second process started" << std::endl;
    }

    void operator()(){
        
    }
};