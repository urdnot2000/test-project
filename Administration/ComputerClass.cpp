#include "ComputerClass.h"

void ComputerClass::addComputer(const std::string & name, Computer *computer) {
    if(computer != nullptr) {
        computer->setName(name);
        computers[name] = computer;
    }
}

Computer *ComputerClass::removeComputer(const std::string & name) {
    auto it = computers.find(name);
    if(it != computers.end()) {
        return (*it).second;
    }
    return nullptr;
}

std::map<std::string, Computer *> & ComputerClass::getComputers() {
    return computers;
}

ComputerClass::~ComputerClass() {
    for(auto p : computers) {
        delete p.second;
    }
}
