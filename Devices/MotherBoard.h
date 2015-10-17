#ifndef TESTPROJECT_MOTHERBOARD_H
#define TESTPROJECT_MOTHERBOARD_H

#include "IValuable.h"
#include <iostream>

// MotherBoard - базовый класс для всех материнских плат. Также наследует IValuable.

class MotherBoard : public IValuable {
public:
    virtual std::string getVendor() = 0;
    virtual std::string getModel() = 0;
    virtual std::string getSoket() = 0;
};


#endif //TESTPROJECT_MOTHERBOARD_H
