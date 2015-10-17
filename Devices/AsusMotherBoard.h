//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_ASUSMOTHERBOARD_H
#define TESTPROJECT_ASUSMOTHERBOARD_H

#include "MotherBoard.h"

class AsusMotherBoard : public MotherBoard {
public:
    std::string getVendor();
    std::string getModel();
    std::string getSoket();

    int getPrice();
    int getMetalWeight();
};


#endif //TESTPROJECT_ASUSMOTHERBOARD_H
