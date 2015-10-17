//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_ASUSCOMPUTER_H
#define TESTPROJECT_ASUSCOMPUTER_H

#include "Computer.h"

class AsusComputer : public Computer {
public:
    AsusComputer(MotherBoard *);

    std::string getVendor();
    std::string getModel();

    int getPrice();
    int getMetalWeight();
};


#endif //TESTPROJECT_ASUSCOMPUTER_H
