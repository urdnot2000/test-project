//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_COMPUTERCLASS_H
#define TESTPROJECT_COMPUTERCLASS_H

#include <map>
#include <string>
#include "Computer.h"

// класс обертка для контейнера компьтеров.

class ComputerClass {
public:
    void addComputer(const std::string &, Computer *);
    Computer * removeComputer(const std::string &);

    std::map<std::string, Computer *> & getComputers();

    virtual ~ComputerClass();
private:
    std::map<std::string, Computer *> computers;
};


#endif //TESTPROJECT_COMPUTERCLASS_H
