#include <iostream>
#include <memory>
#include "LigaAtuomatica.h"

int main(){
    std::cout << "Hello Test" << std::endl;

    std::vector<std::unique_ptr<ONG>> objVector;
    
    std::shared_ptr<ONG> asoc(new StudentAsociation);

    objVector.emplace_back(new StudentAsociation());
    objVector.emplace_back(new LigaAutomatica());

    for(auto &iter : objVector){
        iter->addPeople();
    }

    return 0;
}