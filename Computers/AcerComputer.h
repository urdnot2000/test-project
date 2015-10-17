//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_ACERCOMPUTER_H
#define TESTPROJECT_ACERCOMPUTER_H

#include "Computer.h"

class AcerComputer : public Computer {
public:
    AcerComputer(MotherBoard *);

    std::string getVendor();
    std::string getModel();

    int getPrice();
    int getMetalWeight();
};


#endif //TESTPROJECT_ACERCOMPUTER_H
