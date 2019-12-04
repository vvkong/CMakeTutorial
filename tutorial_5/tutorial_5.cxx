#include "tutorialConfig.h"
#include <iostream>
#include <cmath>

struct Person {

};

struct Teacher: Person {

};
int main(int argc, char* argv[]) {
    std::cout << "Hello Boy" << std::endl;

    #ifdef USE_MYMATH
        std::cout << "custom: " << mySqrt(100) << std::endl;
    #else
        std::cout << "standard: " << sqrt(100) << std::endl;
    #endif

}