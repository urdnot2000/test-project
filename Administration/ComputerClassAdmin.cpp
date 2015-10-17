//
// Created by urdnot on 10/16/15.
//

#include "Computer.h"
#include "ComputerClass.h"
#include "ComputerClassAdmin.h"
#include "SimpleComputerStore.h"

ComputerClassAdmin::ComputerClassAdmin(ComputerClass * comp_class) : computerClass(comp_class) {
}

void ComputerClassAdmin::turnOn() {
    auto cmps = computerClass->getComputers();
    for(auto p : cmps) {
        p.second->turnOn();     // пример применения динамического полиморфизма.
                                // не важно что конкретно за компьютер интерфейсы у них общие.
    }
}

void ComputerClassAdmin::turnOn(const std::string & comp_name) {
    auto cmps = computerClass->getComputers();
    cmps[comp_name]->turnOn();
}

void ComputerClassAdmin::turnOff() {
    auto cmps = computerClass->getComputers();
    for(auto p : cmps) {
        p.second->turnOff();
    }
}

void ComputerClassAdmin::turnOff(const std::string & comp_name) {
    auto cmps = computerClass->getComputers();
    cmps[comp_name]->turnOff();
}

void ComputerClassAdmin::reload() {
    auto cmps = computerClass->getComputers();
    for(auto p : cmps) {
        p.second->reload();
    }
}

void ComputerClassAdmin::reload(const std::string & comp_name) {
    auto cmps = computerClass->getComputers();
    cmps[comp_name]->reload();
}

void ComputerClassAdmin::setupProgram(const std::string & program_name) {
    auto cmps = computerClass->getComputers();
    for(auto p : cmps) {
        p.second->setupProgram(program_name);
    }
}

void ComputerClassAdmin::setupProgram(const std::string & program_name, const std::string & comp_name) {
    auto cmps = computerClass->getComputers();
    cmps[program_name]->setupProgram(comp_name);
}

void ComputerClassAdmin::sellComputer(const std::string & comp_name, SimpleComputerStore & store) {
    int cash = store.sell(computerClass->removeComputer(comp_name));
    std::cout << cash << "$ received." << std::endl;
}

MotherBoard * ComputerClassAdmin::changeMotherBoard(const std::string & comp_name, MotherBoard * board) {
    auto cmps = computerClass->getComputers();
    if(cmps.find(comp_name) != cmps.end() && (board != nullptr)) {
        std::cout << "On " << comp_name << " motherboard changed." << std::endl;
        return cmps[comp_name]->setMotherBoard(board);
    }
    std::cout << "Nothing changed." << std::endl;
    return nullptr;
}

int ComputerClassAdmin::convertToMetal(const std::string & comp_name) {
    Computer * comp = computerClass->removeComputer(comp_name);
    if(comp != nullptr) {
        return convertToMetal(comp);
    }
    std::cout << "Wrong computer name." << std::endl;
    return 0;
}

int ComputerClassAdmin::convertToMetal(IValuable *valuable) {
    if(valuable != nullptr) {
        int profit = valuable->getMetalWeight();
        delete valuable;
        std::cout << profit << "g received." << std::endl;
        return profit;
    }
    return 0;
}
