#include "Computer.h"

Computer::Computer(MotherBoard * board) : name("unamed"), motherBoard(board) {
}

MotherBoard * Computer::setMotherBoard(MotherBoard *board) {
    MotherBoard * old_board = motherBoard;
    motherBoard = board;
    return old_board;
}

MotherBoard *Computer::getMotherBoard() {
    return motherBoard;
}

void Computer::turnOn() {
    std::cout << "Turn on " << name << " computer" << std::endl;
}

void Computer::turnOff() {
    std::cout << "Turn off " << name << " computer" << std::endl;
}

void Computer::reload() {
    std::cout << "Reload " << name << " computer" << std::endl;
}

void Computer::setupProgram(const std::string & program) {
    std::cout << "Setup " << program << " on " << name << " computer" << std::endl;
}

std::string Computer::getName() {
    return name;
}

void Computer::setName(const std::string & new_name) {
    name = new_name;
}
