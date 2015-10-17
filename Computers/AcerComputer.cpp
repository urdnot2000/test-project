//
// Created by urdnot on 10/16/15.
//

#include "AcerComputer.h"
#include "MotherBoard.h"

AcerComputer::AcerComputer(MotherBoard * board) : Computer(board) {
}

std::string AcerComputer::getVendor() {
    return "Acer";
}

std::string AcerComputer::getModel() {
    return "Aspire ES1-111";
}

int AcerComputer::getPrice() {
    return (360 + motherBoard->getPrice());
}

int AcerComputer::getMetalWeight() {
    return (214 + motherBoard->getMetalWeight());
}
