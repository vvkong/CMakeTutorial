#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if( argc > 1 ) {
        //std::cout << "argv[1]: " << atol(argv[1]) << std::endl;

        std::cout << "argv[1]: " << std::atol(argv[1]) << std::endl;
    }
    std::cout << std::endl;
    return 0;
}