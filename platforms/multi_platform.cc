#include "platform.h"
#include <iostream>

int main() {
    std::cout << platform::get_platform() << "\n";
}