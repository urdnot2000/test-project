//
// Created by urdnot on 10/15/15.
//

#include "ComputerStore.h"

ComputerStore::ComputerStore() {

}

MotherBoard * ComputerStore::buyMotherBoard(const std::string &) {
    std::cout << "This is empty store." << std::endl;
    return nullptr;
}

Computer * ComputerStore::buyComputer(const std::string &) {
    std::cout << "This is empty store. Sorry." << std::endl;
    return nullptr;
}

ComputerStore::~ComputerStore() {
    std::cout << "Destroy computer store" << std::endl;
}

int ComputerStore::sell(IValuable * item) {
    if(item != nullptr) {
        int cash = item->getPrice();
        delete item;
        return cash;
    }
    return 0;
}
