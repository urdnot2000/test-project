//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_COMPUTERCLASSADMIN_H
#define TESTPROJECT_COMPUTERCLASSADMIN_H

#include <iostream>

class ComputerClass;
class Computer;
class SimpleComputerStore;
class MotherBoard;
class IValuable;

class ComputerClassAdmin {
public:
    ComputerClassAdmin(ComputerClass *);
    void turnOn();
    void turnOn(const std::string &);   // пример статического полиморфизма
    void turnOff();
    void turnOff(const std::string &);  // еще один.
    void reload();
    void reload(const std::string &);
    void setupProgram(const std::string &);
    void setupProgram(const std::string &, const std::string &);

    void sellComputer(const std::string &, SimpleComputerStore &);

    MotherBoard * changeMotherBoard(const std::string &, MotherBoard *);

    int convertToMetal(const std::string &);
    int convertToMetal(IValuable *);

private:
    ComputerClass * computerClass;
};


#endif //TESTPROJECT_COMPUTERCLASSADMIN_H
