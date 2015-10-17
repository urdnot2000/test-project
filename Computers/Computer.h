#ifndef TESTPROJECT_COMPUTER_H
#define TESTPROJECT_COMPUTER_H

#include "IValuable.h"
#include "MotherBoard.h"
#include <string>


// Computer базовый класс для всех компьютеров. Может быть включен, выключен, перезагружен.
// также можно установить программу и поменять материнскую плату.
// пример наследования. Придаем всем наследникам Computer ценностные качества.

class Computer : public IValuable {
public:
    Computer(MotherBoard *);

    virtual std::string getVendor() = 0;
    virtual std::string getModel() = 0;
    virtual void turnOn();
    virtual void turnOff();
    virtual void reload();
    virtual void setupProgram(const std::string &);

    MotherBoard * getMotherBoard();
    MotherBoard * setMotherBoard(MotherBoard *);

    std::string getName();
    void setName(const std::string &);

protected:
    std::string name;       // пример инкапсуляции. Прямой доступ из вне к поляи закрыт
    MotherBoard * motherBoard;  // и осуществляется через методы класса.
};


#endif //TESTPROJECT_COMPUTER_H
