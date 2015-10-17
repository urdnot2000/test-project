#include <iostream>
#include "ComputerClass.h"
#include "ComputerClassAdmin.h"
#include "SimpleComputerStore.h"

// --------------------------------------------------------------------
//  SimpleComputerStore, ComputerClassAdmin, ComputerClass - классы
//  верхнего уровня абстрации.
//  Computer, MotherBoard, IValuable и их наследники нижний уровень
//  абстракции.
//  Все требуемые операции реализованы на нижнем уровне абстракции.
//  На верхнем выполняется их инициация и обход контейнера.
//  Изначально хотел реализовать для мат. плат, компьютеров, учебн.
//  класса паттерн компоновщик с валидацией (чтобы нельзя было
//  поместить компьютер в мат. плату) но остановился на отдельных
//  классах потому что все же как сущности они слишком различны.

using namespace std;

int main() {
    SimpleComputerStore store;
    ComputerClass comp404Room;
    ComputerClassAdmin admin(&comp404Room);

    comp404Room.addComputer("first", store.buyComputer("Asus"));
    comp404Room.addComputer("second", store.buyComputer("Acer"));
    comp404Room.addComputer("third", store.buyComputer("Asus"));
    comp404Room.addComputer("fourth", store.buyComputer("HP"));
    comp404Room.addComputer("fourth", store.buyComputer("Asus"));

    admin.turnOn();
    admin.setupProgram("NotePad");
    admin.turnOff("second");

    admin.sellComputer("second", store);

    int cash = 0;
    cash = store.sell(admin.changeMotherBoard("first", store.buyMotherBoard("MSI")));
    cout << cash << "$ received" << endl;

    admin.convertToMetal("third");

    return 0;
}