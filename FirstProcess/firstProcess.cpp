#include "firstProcess.h"
#include "LigaAtuomatica.h"

void FirstProcess::createOngs(){
    
    std::vector<std::unique_ptr<ONG>> objVector;
    
    std::shared_ptr<ONG> asoc(new StudentAsociation);

    objVector.emplace_back(new StudentAsociation());
    objVector.emplace_back(new LigaAutomatica());

    for(auto &iter : objVector){
        iter->addPeople();
    }
}