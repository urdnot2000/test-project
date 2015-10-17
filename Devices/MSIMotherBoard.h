//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_MSIMOTHERBOARD_H
#define TESTPROJECT_MSIMOTHERBOARD_H

#include "MotherBoard.h"

class MSIMotherBoard : public MotherBoard {
public:
    std::string getVendor();
    std::string getModel();
    std::string getSoket();

    int getPrice();
    int getMetalWeight();
};


#endif //TESTPROJECT_MSIMOTHERBOARD_H
