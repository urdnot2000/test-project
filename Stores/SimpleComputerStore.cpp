//
// Created by urdnot on 10/15/15.
//

#include "SimpleComputerStore.h"
#include "AsusMotherBoard.h"
#include "MSIMotherBoard.h"
#include "AsusComputer.h"
#include "AcerComputer.h"
#include <iostream>

SimpleComputerStore::SimpleComputerStore() {

}

MotherBoard * SimpleComputerStore::buyMotherBoard(const std::string & board_name) {
    if(board_name == "Asus") {
        std::cout << "Store sell Asus motherboard" << std::endl;
        return new AsusMotherBoard;
    } else if(board_name == "MSI") {
        std::cout << "Store sell MSI motherboard" << std::endl;
        return new MSIMotherBoard;
    } else {
        std::cout << "There isn't  " << board_name << " motherboard" << std::endl;
        return nullptr;
    }
}

Computer* SimpleComputerStore::buyComputer(const std::string & computer_name) {
    if(computer_name == "Asus") {
        std::cout << "Store sell Asus computer." << std::endl;
        return new AsusComputer(new AsusMotherBoard);
    } else if(computer_name == "Acer") {
        std::cout << "Store sell Acer motherboard." << std::endl;
        return new AcerComputer(new MSIMotherBoard);
    } else {
        std::cout << "There isn't  " << computer_name << " computer." << std::endl;
        return nullptr;
    }
}