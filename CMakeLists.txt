cmake_minimum_required(VERSION 3.17)
project(SynqThink)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 REQUIRED COMPONENTS Core Qml Quick WebView)

add_executable(SynqThing main.cpp qml.qrc)
set_target_properties(SynqThing PROPERTIES AUTORCC on)
target_link_libraries(SynqThing Qt5::Core Qt5::Qml Qt5::Quick Qt5::WebView)
