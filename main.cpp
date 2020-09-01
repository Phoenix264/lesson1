#include <iostream>
#include "version.h"

int main(int, char**) {
    std::cout << "Build " << GetVersion() << std::endl;
    std::cout << "Hello, world!" << std::endl;
}
