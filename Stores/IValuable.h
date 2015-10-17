//
// Created by urdnot on 10/16/15.
//

#ifndef TESTPROJECT_IVALUABLE_H
#define TESTPROJECT_IVALUABLE_H

// IValuable отвечает за ценность объектов и содержание цветных металов
// он является базовым для классов Computer, MotherBoard.

class IValuable {
public:
    virtual int getPrice() = 0;
    virtual int getMetalWeight() = 0;
};


#endif //TESTPROJECT_IVALUABLE_H
