#include <iostream>
// #include "mathFunctions.h"
#include "tutorialConfig.h"

int main(int argc, char *argv[]) {

    #ifdef USE_MYMATH
        std::cout << add(1, 2) << std::endl;
        std::cout << sub(1, 2) << std::endl;
    #else
        std::cout << "not use my math functions" << std::endl;
    #endif
    return 0;
}
