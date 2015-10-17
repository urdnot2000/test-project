//
// Created by urdnot on 10/15/15.
//

#ifndef TESTPROJECT_COMPUTERSTORE_H
#define TESTPROJECT_COMPUTERSTORE_H

#include "IValuable.h"
#include "MotherBoard.h"
#include "Computer.h"

// Базовый класс для магазинов. Здесь можно купить/продать мат. плату/компьютер
// представляет из себя реализацию паттерна фабрика.

class ComputerStore {
public:
    ComputerStore();

    virtual MotherBoard * buyMotherBoard(const std::string &);
    virtual Computer * buyComputer(const std::string &);
    virtual int sell(IValuable *);

    virtual ~ComputerStore();
};


#endif //TESTPROJECT_COMPUTERSTORE_H
