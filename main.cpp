#include <iostream>
#include <memory>
#include <thread>
#include "firstPocess/firstProcess.h"
#include "secondProcess.h"

std::shared_ptr<int> sharedInt;

void oneThread(){
    auto i = 0;
    while (i< 2000000)
    {
        std::cout << "Functie 1 : " << i << std::endl;
        i++;
    }
    
    std::cout << "First Thread" << std::endl;
}

void secondThread(int x){
    while (x < 1000000)
    {
        std::cout << "Functie 2 : " << x << std::endl;
        x++;
    }
    std::cout << "Second Thread" << std::endl;
}

void threadsStart(){
    std::cout << "Threads Start called" << std::endl;

    std::thread first((FirstProcess()));
    std::thread second((SecondProcess()));

    first.join();
    second.join();

    std::cout << "Threads stoped" << std::endl;
}

int main(){
    std::cout << "Hello Test" << std::endl;

    threadsStart();

    return 0;
}