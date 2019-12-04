#include <iostream>
#include "tutorialConfig.h"

int main(int argc, char* argv[]) {
    std::cout << argc << std::endl;

    std::cout << TUTORIAL_VERSION_MAJOR << "." << TUTORIAL_VERSION_MINOR << std::endl;

    return 0;
}