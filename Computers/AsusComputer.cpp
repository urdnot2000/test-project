//
// Created by urdnot on 10/16/15.
//

#include "AsusComputer.h"
#include "MotherBoard.h"

std::string AsusComputer::getVendor() {
    return "ASUS";
}

std::string AsusComputer::getModel() {
    return "N550-JV";
}

AsusComputer::AsusComputer(MotherBoard *board) : Computer(board) {
}

int AsusComputer::getPrice() {
    return (450 + motherBoard->getPrice());
}

int AsusComputer::getMetalWeight() {
    return (234 + motherBoard->getMetalWeight());
}
