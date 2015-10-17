//
// Created by urdnot on 10/15/15.
//

#ifndef TESTPROJECT_SIMPLECOMPUTERSTORE_H
#define TESTPROJECT_SIMPLECOMPUTERSTORE_H

#include "ComputerStore.h"

class SimpleComputerStore : public ComputerStore {
public:
    SimpleComputerStore();

    MotherBoard * buyMotherBoard(const std::string &);
    Computer * buyComputer(const std::string &);
};


#endif //TESTPROJECT_SIMPLECOMPUTERSTORE_H
