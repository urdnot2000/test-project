cmake_minimum_required(VERSION 3.3)
project(TestProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(Computers Devices Stores Administration)
set(SOURCE_FILES main.cpp Devices/MotherBoard.cpp Devices/MotherBoard.h Computers/Computer.cpp Computers/Computer.h Stores/ComputerStore.cpp Stores/ComputerStore.h Stores/SimpleComputerStore.cpp Stores/SimpleComputerStore.h Computers/AsusComputer.cpp Computers/AsusComputer.h Computers/AcerComputer.cpp Computers/AcerComputer.h Devices/AsusMotherBoard.cpp Devices/AsusMotherBoard.h Devices/MSIMotherBoard.cpp Devices/MSIMotherBoard.h Administration/ComputerClass.cpp Administration/ComputerClass.h Administration/ComputerClassAdmin.cpp Administration/ComputerClassAdmin.h Stores/IValuable.cpp Stores/IValuable.h)
add_executable(TestProject ${SOURCE_FILES})