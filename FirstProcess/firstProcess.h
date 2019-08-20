#include <iostream>
#include <thread>

class FirstProcess {

    void createOngs();

public:
    FirstProcess(){
        std::cout << "First process started" << std::endl;

        createOngs();
    }

    void operator()(){
        
    }
};